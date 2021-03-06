#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKCompatibility : NSObject
{
    long long _min;
    long long _max;
}

+ (id)compatibilityFromSerializedCompatibility:(id)arg1;
+ (id)compatibilityWithMinVersion:(long long)arg1 maxVersion:(long long)arg2;
+ (id)currentCompatibility;
@property(nonatomic) long long max; // @synthesize max=_max;
@property(nonatomic) long long min; // @synthesize min=_min;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)filterIncompatibleEvents:(id)arg1;
- (id)eventPredicate;
- (id)serialize;

@end

