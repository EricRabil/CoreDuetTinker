#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKQuantityType;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    double _doubleValue;
    _DKQuantityType *_quantityType;
}

+ (BOOL)supportsSecureCoding;
+ (id)quantityWithDouble:(double)arg1 type:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;
+ (id)entityName;

@property(retain) _DKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property double doubleValue; // @synthesize doubleValue=_doubleValue;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (id)primaryValue;
- (long long)compareValue:(id)arg1;
- (id)objectType;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1 type:(id)arg2;
- (id)toPBCodable;
- (BOOL)copyToManagedObject:(id)arg1;
- (long long)typeCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

