#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSDictionary, NSError, NSString, RPCompanionLinkClient, _DKSyncPeer;

@protocol _DKSyncCommonClass <_DKSyncRemoteStorage>
- (void)sendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 peer:(_DKSyncPeer *)arg3 highPriority:(BOOL)arg4 options:(NSDictionary *)arg5 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg6;
- (void)handshakeWithDuetSyncPeer:(_DKSyncPeer *)arg1 orError:(NSError *)arg2;
- (NSError *)transformCaughtObject:(id)arg1 existingError:(NSError *)arg2;
- (NSError *)transformResponseError:(NSError *)arg1;
- (void)handleAvailabilityFailureWithPeer:(_DKSyncPeer *)arg1 completion:(void (^)(NSError *))arg2;
- (BOOL)isTransportActiveForPeer:(_DKSyncPeer *)arg1;
- (RPCompanionLinkClient *)client;
- (void)setDeviceID:(NSString *)arg1;
- (NSString *)myDeviceID;
@end

