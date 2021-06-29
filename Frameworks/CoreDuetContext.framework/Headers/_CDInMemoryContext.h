#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextInternal-Protocol.h>
#import <CoreDuetContext/_CDLocalContext-Protocol.h>

@class NSMutableDictionary, NSString, _CDContextualLocationRegistrationMonitor, _CDDevice, _CDSystemTimeCallbackScheduler;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface _CDInMemoryContext : NSObject <_CDLocalContext, _CDContextInternal>
{
    NSString *_deviceID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_workloop> *_callbackWorkloop;
    NSMutableDictionary *_context;
    _CDContextualLocationRegistrationMonitor *_locationRegistrationMonitor;
    NSMutableDictionary *_registrations;
    _CDSystemTimeCallbackScheduler *_systemTimeCallbackScheduler;
    _CDDevice *_device;
}

+ (id)contextWithDeviceID:(id)arg1;
+ (id)context;

@property(retain, nonatomic) _CDDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) _CDSystemTimeCallbackScheduler *systemTimeCallbackScheduler; // @synthesize systemTimeCallbackScheduler=_systemTimeCallbackScheduler;
@property(retain, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) _CDContextualLocationRegistrationMonitor *locationRegistrationMonitor; // @synthesize locationRegistrationMonitor=_locationRegistrationMonitor;
@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_workloop> *callbackWorkloop; // @synthesize callbackWorkloop=_callbackWorkloop;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (id)description;
- (id)allRegistrations;
- (id)unsafe_evaluatedContextWithRegistration:(id)arg1 date:(id)arg2;
- (void)unsafe_deregisterForSystemTimeBasedCallbacksForRegistration:(id)arg1;
- (void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistration:(id)arg1 date:(id)arg2;
- (void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistrations:(id)arg1 date:(id)arg2;
- (void)unsafe_evalutateRegistrationPredicate:(id)arg1 previousContextValue:(id)arg2 date:(id)arg3 keyPath:(id)arg4;
- (void)unsafe_evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3;
- (void)evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3;
- (BOOL)evaluatePredicate:(id)arg1 date:(id)arg2;
- (void)deregisterCallback:(id)arg1;
- (void)unsafe_deregisterCallback:(id)arg1;
- (void)registerCallback:(id)arg1;
- (void)addCallback:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(char *)arg4;
- (BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (id)unsafe_setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)objectForContextualKeyPath:(id)arg1;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (void)receiveSystemTimeCallback:(id)arg1;
- (void)locationCoordinatorCircularRegionsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

