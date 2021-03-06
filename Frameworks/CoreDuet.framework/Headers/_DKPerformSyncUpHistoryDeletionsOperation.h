#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, NSDate, _CDMutablePerfMetric, _DKPerformSyncUpHistoryAdditionsOperation, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation
{
    _DKPerformSyncUpHistoryAdditionsOperation *_sibling;
     id  _localStorage;
     id  _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    void* _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    _DKSyncHistory *_history;
    unsigned long long _batchNumber;
}

+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;

- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)handleUpdateStorageWithStartDate:(id)arg1 endDate:(id)arg2 deletedEventIDsCount:(unsigned long long)arg3 orError:(id)arg4;
- (void)performSyncUpHistoryDeletionsWithPreviousHighWaterMark:(id)arg1;
- (void)performSyncUpHistoryDeletionsWithDeletionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (BOOL)existsAdditionsSyncHistory;
- (void)performSyncUpHistoryDeletions;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 sibling:(id)arg2 localStorage:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6 type:(id)arg7;

@end

