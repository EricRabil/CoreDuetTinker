#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSArray, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation
{
     id  _localStorage;
     id  _transport;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_insertedEvents;
    NSArray *_deletedEventIDs;
    _CDMutablePerfMetric *_perfMetric;
    void* _perfEvent;
}


- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)performSyncUpChange;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 policy:(id)arg4 type:(id)arg5 insertedEvents:(id)arg6 deletedEvents:(id)arg7;

@end

