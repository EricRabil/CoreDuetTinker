#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _DKSyncPeer, NSError;

@protocol _DKSyncRemoteStorage
- (long long)transportType;
- (NSString *)name;
- (void)fetchSourceDeviceIDFromPeer:(_DKSyncPeer *)arg1 highPriority:(BOOL)arg2 completion:(void (^)(NSUUID *, NSString *, NSError *))arg3;
- (void)cancelOutstandingOperations;
- (BOOL)isAvailable;
- (void)start;
@end
