#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSObject;

@class NSArray, NSObject, _DKEventQuery, NSError;
@protocol OS_dispatch_queue;

@protocol _DKContentProvider <NSObject>
- (void)executeQuery:(_DKEventQuery *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)executeQuery:(_DKEventQuery *)arg1 error:(id *)arg2;
@end

