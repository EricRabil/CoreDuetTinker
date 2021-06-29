#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDActivityEventRecording-Protocol.h>
#import <CoreDuet/_CDAppActionRecording-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording>
{
    NSString *_previousActivityType;
    NSString *_previousTitle;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}

+ (id)appActionRecorder;

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *previousTitle; // @synthesize previousTitle=_previousTitle;
@property(retain, nonatomic) NSString *previousActivityType; // @synthesize previousActivityType=_previousActivityType;
- (void)recordUserActivityEvents:(id)arg1;
- (void)recordUserActivityEvent:(id)arg1;
- (void)recordUserActivityEventForCollection:(id)arg1;
- (void)_recordUserActivityEvent:(id)arg1;
- (void)recordAppAction:(id)arg1;
- (void)createConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

