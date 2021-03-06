#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSSecureCoding;
#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSString, _CDEventStreamProperties, _DKObjectType;

@interface _DKEventStream : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    _CDEventStreamProperties *_eventProperties;
    NSString *_name;
    _DKObjectType *_eventValueType;
}

+ (BOOL)supportsSecureCoding;
+ (id)eventStreamWithName:(id)arg1 valueType:(id)arg2;
+ (id)eventStreamWithName:(id)arg1;
+ (id)fromPBCodable:(id)arg1;

@property(readonly) _DKObjectType *eventValueType; // @synthesize eventValueType=_eventValueType;
@property(readonly) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3;
@property(readonly) _CDEventStreamProperties *eventProperties; // @synthesize eventProperties=_eventProperties;
- (id)toPBCodable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

