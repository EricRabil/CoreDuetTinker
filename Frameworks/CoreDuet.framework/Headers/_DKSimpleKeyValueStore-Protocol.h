#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString;
@protocol NSSecureCoding;

@protocol _DKSimpleKeyValueStore
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;
- (NSObject *)objectForKey:(NSString *)arg1;
@end

