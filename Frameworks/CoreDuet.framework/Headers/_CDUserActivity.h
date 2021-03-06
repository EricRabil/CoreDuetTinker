#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSSecureCoding;

@class NSDate, NSDictionary, NSString;

@interface _CDUserActivity : NSObject <NSSecureCoding>
{
    NSString *_bundleId;
    NSString *_type;
    NSString *_title;
    NSDate *_date;
    NSDictionary *_payload;
}

+ (BOOL)supportsSecureCoding;
+ (id)createFromUserActivity:(id)arg1;

@property(copy) NSDictionary *payload; // @synthesize payload=_payload;
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *type; // @synthesize type=_type;
@property(copy) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

