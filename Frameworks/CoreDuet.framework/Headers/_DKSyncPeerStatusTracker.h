#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncContextObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, _DKKnowledgeStorage, _DKSyncPeer;

@interface _DKSyncPeerStatusTracker : _DKSyncContextObject
{
    NSMutableDictionary *_peerInfos;
    _DKSyncPeer *_pseudoPeer;
    NSMutableArray *_observers;
    NSMutableDictionary *_lastSuccessfulActivityDates;
    NSDate *_firstForeignPeersCountDate;
    _DKKnowledgeStorage *_storage;
}

+ (id)stringForTransports:(long long)arg1;
+ (id)syncPeerTransportsStrings;
+ (id)peerStatusTrackerWithContext:(id)arg1;
+ (id)sharedInstance;

@property(nonatomic) __weak _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
- (void)debugLogPeers;
- (void)postCloudDeviceCountChangedNotification;
- (void)_loadPeers;
- (id)uuidWithUUIDString:(id)arg1;
- (id)description;
- (id)_observerBlocks;
- (void)removeStatusChangeObserver:(id)arg1;
- (id)addStatusChangeObserverWithBlock:(id)arg1;
- (void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3;
- (id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2;
- (void)setLastSeenDate:(id)arg1 onPeer:(id)arg2;
- (void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2;
- (void)addActiveTransports:(long long)arg1 toPeer:(id)arg2;
- (void)_modifyActiveTransportInPeer:(id)arg1 withNewTransportsBlock:(id)arg2;
- (long long)activeTransportsForPeer:(id)arg1;
- (id)_peerInfoForPeer:(id)arg1;
- (BOOL)isSingleDevice;
- (unsigned long long)foreignPeersCount;
- (id)peersWithActiveTransports:(long long)arg1;
- (id)peersWithAnyActiveTransports;
- (id)allPeers;
- (void)removePeer:(id)arg1;
- (id)pseudoPeerForSyncTransportCloudUp;
- (id)existingPeerWithIDSDeviceIdentifier:(id)arg1;
- (id)existingPeerWithSourceDeviceID:(id)arg1;
- (id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2;
- (id)peerWithIDSDeviceIdentifier:(id)arg1;
- (id)peerWithCompanionLinkDevice:(id)arg1;
- (void)registerNewPeer:(id)arg1;
- (void)setSourceDeviceID:(id)arg1 version:(id)arg2 peer:(id)arg3;
- (id)initWithContext:(id)arg1;

@end

