#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, _DKKnowledgeSyncStorageAssertion;

@interface _DKSyncState : NSObject
{
    BOOL _needsCloudSyncDown;
    BOOL _needsCloudSyncUp;
    NSError *_error;
    _DKKnowledgeSyncStorageAssertion *_assertion;
    NSMutableArray *_replies;
}


@property(retain) NSMutableArray *replies; // @synthesize replies=_replies;
@property(retain) _DKKnowledgeSyncStorageAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL needsCloudSyncUp; // @synthesize needsCloudSyncUp=_needsCloudSyncUp;
@property BOOL needsCloudSyncDown; // @synthesize needsCloudSyncDown=_needsCloudSyncDown;
- (void)finish;
- (void)addReplyBlock:(id)arg1;
- (id)initWithSyncStorageAssertion:(id)arg1 reply:(id)arg2;

@end

