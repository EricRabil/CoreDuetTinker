#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDContextServer-Protocol.h>

@class NSArray, NSObject, _CDContextualKeyPath;
@protocol NSCopying, NSSecureCoding;

@protocol _CDLocalContextServer <_CDContextServer>
- (void)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 forArrayAtPath:(_CDContextualKeyPath *)arg3 handler:(void (^)(BOOL))arg4;
- (void)setObject:(NSObject<NSCopying, NSSecureCoding> *)arg1 forPath:(_CDContextualKeyPath *)arg2 handler:(void (^)(BOOL))arg3;
@end

