#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSObject;

@class NSArray, NSUserActivity, _CDUserActivity;

@protocol _CDActivityEventRecording <NSObject>
- (void)recordUserActivityEventForCollection:(_CDUserActivity *)arg1;
- (void)recordUserActivityEvents:(NSArray *)arg1;
- (void)recordUserActivityEvent:(NSUserActivity *)arg1;
@end

