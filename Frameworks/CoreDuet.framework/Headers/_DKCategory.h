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

@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    long long _integerValue;
    _DKCategoryType *_categoryType;
}

+ (BOOL)supportsSecureCoding;
+ (id)categoryWithInteger:(long long)arg1 type:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)_categoryFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;
+ (id)entityName;

@property(retain) _DKCategoryType *categoryType; // @synthesize categoryType=_categoryType;
@property long long integerValue; // @synthesize integerValue=_integerValue;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (double)doubleValue;
- (id)primaryValue;
- (long long)compareValue:(id)arg1;
- (id)objectType;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3;
- (id)toPBCodable;
- (BOOL)copyToManagedObject:(id)arg1;
- (long long)typeCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

