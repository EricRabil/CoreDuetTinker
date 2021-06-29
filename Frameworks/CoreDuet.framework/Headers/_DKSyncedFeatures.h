#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKSyncedFeatures : NSObject
{
    BOOL _isDigitalHealthDisabledInitialized;
    BOOL _isDigitalHealthDisabledPreviousResult;
    BOOL _isSingleDevice;
    long long _screenTimeSyncState;
}

+ (id)sharedInstance;
@property long long screenTimeSyncState; // @synthesize screenTimeSyncState=_screenTimeSyncState;
- (id)description;
- (id)_stateStringWithState:(long long)arg1;
- (BOOL)isSupergreenDisabledForTransports:(long long)arg1;
- (BOOL)isSiriPortraitDisabled;
- (BOOL)isIDSMessageGatingDisabled;
- (BOOL)isDigitalHealthDisabledWithIsSingleDevice:(BOOL)arg1 forTransports:(long long)arg2;
- (void)_fetchScreenTimeSyncState;
- (id)init;

@end

