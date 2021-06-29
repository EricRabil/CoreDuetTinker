#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDate, NSString, _DKCompatibility, _DKSyncHistory, _DKSyncPeer;

@protocol _DKSyncLocalKnowledgeStorage
- (BOOL)deleteEventsWithEventIDs:(NSArray *)arg1 error:(id *)arg2;
- (BOOL)saveEvents:(NSArray *)arg1 error:(id *)arg2;
- (_DKSyncHistory *)deletionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (_DKSyncHistory *)additionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (void)setLastSyncDownDeletionDate:(NSDate *)arg1 previousDate:(NSDate *)arg2 forPeer:(_DKSyncPeer *)arg3 transportName:(NSString *)arg4 error:(id *)arg5;
- (NSDate *)lastSyncDownDeletionDateForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (BOOL)saveSyncedDownWindows:(NSArray *)arg1 peer:(_DKSyncPeer *)arg2 transportName:(NSString *)arg3 error:(id *)arg4;
- (NSArray *)sortedSyncDownWindowsOverlappingBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 peer:(_DKSyncPeer *)arg3 error:(id *)arg4;
- (NSArray *)tombstonesSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 compatibility:(_DKCompatibility *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;
@end

