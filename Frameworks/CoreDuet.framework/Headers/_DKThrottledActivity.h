#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _DKSimpleKeyValueStore;

@interface _DKThrottledActivity : NSObject
{
    NSString *_namespace;
     id  _store;
}

+ (id)standardInstance;

@property(retain, nonatomic)  id  store; // @synthesize store=_store;
- (void)setDate:(id)arg1 forName:(id)arg2;
- (void)clearHistoryForName:(id)arg1;
- (id)description;
- (void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id)arg4;
- (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3 throttleBlock:(id)arg4;
- (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3;
- (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3 throttleBlock:(id)arg4;
- (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3;
- (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3 throttleBlock:(id)arg4;
- (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3;
- (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3 throttleBlock:(id)arg4;
- (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id)arg3;
- (id)activityThrottler;
- (id)initWithStore:(id)arg1 namespace:(id)arg2;

@end

