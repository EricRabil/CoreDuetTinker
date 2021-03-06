#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation
{
     id  _localStorage;
     id  _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    void* _perfEvent;
    BOOL _highPriority;
    _DKSyncHistory *_history;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    BOOL _foundDeletions;
}

+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;

- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)handleFetchedDeletedEventIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 untilDate:(id)arg4;
- (void)performSyncDownPeerDeletionsWithPreviousUntilDate:(id)arg1;
- (void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletionsWithDidPrewarm:(BOOL)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletions;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

