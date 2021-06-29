#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDLocalContext-Protocol.h>

@class NSArray, NSObject, _CDContextValue, _CDContextualKeyPath;
@protocol NSCopying, NSSecureCoding;

@protocol _CDContextInternal <_CDLocalContext>
- (_CDContextValue *)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg3 valueDidChange:(char *)arg4;
- (void)setContextValue:(_CDContextValue *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (_CDContextValue *)setObject:(NSObject<NSCopying, NSSecureCoding> *)arg1 returningMetadataForContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (_CDContextValue *)propertiesForContextualKeyPath:(_CDContextualKeyPath *)arg1;
@end

