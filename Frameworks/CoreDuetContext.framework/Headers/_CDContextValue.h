#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;
@protocol NSSecureCoding;

@class NSDate, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_metadata;
}

+ (BOOL)supportsSecureCoding;
+ (id)supportedContextValueClasses;

@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;
- (id)init;

@end

