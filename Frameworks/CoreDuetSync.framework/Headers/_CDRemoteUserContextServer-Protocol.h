//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSUUID, _CDContextualChangeRegistration, NSError;

@protocol _CDRemoteUserContextServer
- (void)requestActivateDevicesWithHandler:(void (^)(NSError *))arg1;
- (void)fetchPropertiesOfRemoteKeyPaths:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(void (^)(NSError *))arg2;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(_CDContextualChangeRegistration *)arg1 deviceIDs:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(_CDContextualChangeRegistration *)arg1 deviceIDs:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (NSUUID *)sourceDeviceUUID;
@end

