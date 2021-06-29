//
//  main.swift
//  CoreDuet
//
//  Created by Eric Rabil on 6/28/21.
//

import Foundation
import CoreDuet
import CoreDuetContext
import AnyCodable

extension NSUUID: Encodable {
    public func encode(to encoder: Encoder) throws {
        var container = encoder.singleValueContainer()
        try container.encode(uuidString)
    }
}

extension _CDClientContext {
    static var shared: _CDUserContext {
        userContext() as! _CDUserContext
    }
}

// all context entries have the structure {.transitionDate:NSDate,.data:Any}
enum CDContextMetadataKey: String, Codable {
    case transitionDate = "_CDContextMetadataTransitionDateKey"
    case data = "_CDContextMetadataDataKey"
}

// helper function for getting context values from the daemon
func CDContextValuesForKeyPath(_ keyPaths: [CDContextKeyPath]) -> [CDContextKeyPath: [CDContextMetadataKey: AnyCodable]] {
    let raw = _CDClientContext.shared.values(forKeyPaths: keyPaths.map { $0.keyPath }) as! [_CDContextualKeyPath: _CDContextValue]
    
    return raw.reduce(into: [CDContextKeyPath: [CDContextMetadataKey: AnyCodable]]()) { dict, pair in
        dict[pair.key.keyPath] = pair.value.metadata.reduce(into: [CDContextMetadataKey: AnyCodable]()) { dict, pair in
            dict[CDContextMetadataKey(rawValue: pair.key as! String)!] = .init(trickle(pair.value))
        }
    }
}

// most initializers in cdcontext registration appear to have breakpoints. the ones that didnt, swift's bridging screwed it up.
// maybes its magic, maybe its unsafe bit casting and abusing the objective-c runtime APIs.
func CDContextSubscribeToKeyPath(_ keyPath: CDContextKeyPath, _ callback: @escaping () -> ()) {
    let contextualRegistration = _CDContextualChangeRegistration.perform(Selector("alloc")).takeRetainedValue() as! _CDContextualChangeRegistration
    let sel = #selector(_CDContextualChangeRegistration.init(identifier:contextualPredicate:dismissalPolicy:deviceSet:deviceTypes:clientIdentifier:mustWake:callback:))
    let imp = contextualRegistration.method(for: sel)
    let imp_typed = unsafeBitCast(imp, to: (@convention(c) (_CDContextualChangeRegistration, Selector, String, _CDContextualPredicate, Any?, Int, Int, String, Bool, @escaping (String) -> ()) -> ()).self)
    imp_typed(contextualRegistration, sel, "milf", keyPath.predicate, nil, 0, 0, "asdf", true, { identifier in
        callback()
    })
    
    _CDClientContext.shared.registerCallback(contextualRegistration)
}

// invoked whenever the foreground app changes
CDContextSubscribeToKeyPath(.foregroundApp) {
    print(_CDClientContext.shared.object(for: CDContextKeyPath.foregroundApp.keyPath))
}

func trickle(_ value: Any) -> Any {
    switch value {
    case let uuid as UUID:
        return uuid.uuidString
    case let dict as Dictionary<String, Any>:
        return dict.reduce(into: [String: Any]()) { dict, val in
            switch val.value {
            case let value as UUID:
                dict[val.key] = value.uuidString
            case let value as [AnyHashable: Any]:
                dict[val.key] = trickle(value)
            default:
                dict[val.key] = val.value
            }
        }
    case let arr as [Any]:
        return arr.map(trickle(_:))
    default:
        return value
    }
}

let x = CDContextValuesForKeyPath(CDContextKeyPath.allCases)

let encoder = JSONEncoder()
encoder.outputFormatting = .prettyPrinted
print(String(data: try! encoder.encode(x), encoding: .utf8)!)

RunLoop.current.run()
