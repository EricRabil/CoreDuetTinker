#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSyncRapportStorage.h>

#import <CoreDuet/_DKSyncRemoteKnowledgeStorage-Protocol.h>

@class _DKSync2Policy;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncRapportKnowledgeStorage : _DKSyncRapportStorage <_DKSyncRemoteKnowledgeStorage>
{
    unsigned long long _currentChangeSetSequenceNumber;
     id  _delegate;
    _DKSync2Policy *_policy;
}

+ (id)sharedInstance;

@property(retain, nonatomic) _DKSync2Policy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic)  id  delegate; // @synthesize delegate=_delegate;
- (id)dataFromChangeSet:(id)arg1 didCompress:(char *)arg2;
- (id)changeSetFromCompressedData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)changeSetForSyncWithEventsToInsert:(id)arg1 eventIDsToDeletes:(id)arg2 error:(id *)arg3;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(id)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(id)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(id)arg3;
- (void)handleFetchDeletedEventIDsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id)arg6;
- (void)handleFetchDeletedEventIDsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(id)arg6;
- (void)handleFetchEventsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id)arg6;
- (void)handleFetchEventsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(id)arg7;
- (void)handleUnexpectedResponse:(id)arg1 fromPeer:(id)arg2;
- (void)handleUnexpectedRequest:(id)arg1 fromPeer:(id)arg2;
- (void)clearPrewarmedFlag;
- (void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (BOOL)hasDeletionsFlagForPeer:(id)arg1;
- (void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (BOOL)hasAdditionsFlagForPeer:(id)arg1;
- (void)prewarmFetchWithCompletion:(id)arg1;
- (void)registerRequestIDsWithClient:(id)arg1;

@end

