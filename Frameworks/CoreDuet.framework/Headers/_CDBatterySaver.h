#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDBatterySaverProtocol-Protocol.h>

@class NSXPCConnection;

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol>
{
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;
+ (id)batterySaver;

- (long long)getPowerMode;
- (BOOL)setPowerMode:(long long)arg1 error:(id *)arg2;
- (void)setPowerMode:(long long)arg1 withCompletion:(id)arg2;
- (BOOL)setPowerMode:(long long)arg1 fromSource:(id)arg2;
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(id)arg3;
- (long long)setMode:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

