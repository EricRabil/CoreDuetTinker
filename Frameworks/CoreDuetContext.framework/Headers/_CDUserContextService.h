#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSXPCListenerDelegate;
#import <CoreDuetContext/_CDXPCEventPublisherDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, _CDInMemoryUserContext, _CDXPCEventPublisher;
@protocol _CDContextPersisting;

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate, _CDXPCEventPublisherDelegate>
{
    BOOL _remoteDevicesHaveBeenActivated;
     id  _persistence;
    _CDInMemoryUserContext *_userContext;
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSMutableSet *_openRegistrations;
    NSMutableSet *_firedRegistrations;
    NSMutableDictionary *_firedRegistrationInfos;
    _CDXPCEventPublisher *_mdcsEventPublisher;
    _CDXPCEventPublisher *_notificationEventPublisher;
    NSMutableDictionary *_mdcsEventSubscribersByToken;
    NSMutableDictionary *_notificationEventSubscribersByToken;
    NSMutableDictionary *_notificationEventSubscribersByClientIdentifier;
    NSMutableDictionary *_remoteDevicesByDeviceID;
}

+ (id)sharedInstanceWithSharedMemoryStore:(id)arg1;
+ (id)sharedInstanceWithPersistence:(id)arg1;

@property(readonly, nonatomic) NSMutableDictionary *remoteDevicesByDeviceID; // @synthesize remoteDevicesByDeviceID=_remoteDevicesByDeviceID;
@property(nonatomic) BOOL remoteDevicesHaveBeenActivated; // @synthesize remoteDevicesHaveBeenActivated=_remoteDevicesHaveBeenActivated;
@property(retain, nonatomic) NSMutableDictionary *notificationEventSubscribersByClientIdentifier; // @synthesize notificationEventSubscribersByClientIdentifier=_notificationEventSubscribersByClientIdentifier;
@property(retain, nonatomic) NSMutableDictionary *notificationEventSubscribersByToken; // @synthesize notificationEventSubscribersByToken=_notificationEventSubscribersByToken;
@property(retain, nonatomic) NSMutableDictionary *mdcsEventSubscribersByToken; // @synthesize mdcsEventSubscribersByToken=_mdcsEventSubscribersByToken;
@property(retain, nonatomic) _CDXPCEventPublisher *notificationEventPublisher; // @synthesize notificationEventPublisher=_notificationEventPublisher;
@property(retain, nonatomic) _CDXPCEventPublisher *mdcsEventPublisher; // @synthesize mdcsEventPublisher=_mdcsEventPublisher;
@property(retain, nonatomic) NSMutableDictionary *firedRegistrationInfos; // @synthesize firedRegistrationInfos=_firedRegistrationInfos;
@property(retain, nonatomic) NSMutableSet *firedRegistrations; // @synthesize firedRegistrations=_firedRegistrations;
@property(retain, nonatomic) NSMutableSet *openRegistrations; // @synthesize openRegistrations=_openRegistrations;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) _CDInMemoryUserContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic)  id  persistence; // @synthesize persistence=_persistence;
- (void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(id)arg2;
- (void)addSubscriber:(id)arg1;
- (void)requestActivateDevicesFromSubscriber:(id)arg1 withHandler:(id)arg2;
- (void)requestActivateDevicesFromAllSubscribersWithHandler:(id)arg1;
- (void)fetchProxySourceDeviceUUIDFromSubscriber:(id)arg1;
- (id)subscribersForClientIdentifier:(id)arg1;
- (unsigned long long)tokenForSourceDeviceUUID:(id)arg1;
- (id)subscriberForSourceDeviceUUID:(id)arg1;
- (id)proxySourceDeviceUUIDForUserID:(unsigned int)arg1;
- (void)setProxySourceDeviceUUID:(id)arg1 forUserID:(unsigned int)arg2;
- (void)addProxyWithSourceDeviceUUID:(id)arg1;
- (void)removeTokenForUserID:(unsigned int)arg1;
- (void)setToken:(unsigned long long)arg1 forUserID:(unsigned int)arg2;
- (BOOL)setMappingObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (void)sendEvent:(id)arg1 toClient:(id)arg2 replyHandler:(id)arg3;
- (void)sendEvent:(id)arg1 toClient:(id)arg2 handler:(id)arg3;
- (void)sendEvent:(id)arg1 toProxy:(id)arg2 replyHandler:(id)arg3;
- (void)sendEvent:(id)arg1 toProxy:(id)arg2 handler:(id)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)clientWasInterrupted:(id)arg1;
- (void)deleteSavedData;
- (void)start;
- (void)regenerateState;
- (void)informClientOfFiredRegistration:(id)arg1 info:(id)arg2;
- (id)obtainFiredRegistrationMatchingRegistration:(id)arg1 info:(id *)arg2;
- (void)removeOpenRegistration:(id)arg1;
- (void)addOpenRegistration:(id)arg1;
- (id)initWithListener:(id)arg1 withPersistence:(id)arg2 withStorage:(id)arg3 withStore:(id)arg4;
- (id)initWithListener:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

