#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject
{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}


- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

