#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject
{
    NSArray *_additionChangeSets;
    NSArray *_deletionChangeSets;
    NSDate *_startDate;
    NSDate *_endDate;
}


@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *deletionChangeSets; // @synthesize deletionChangeSets=_deletionChangeSets;
@property(readonly, nonatomic) NSArray *additionChangeSets; // @synthesize additionChangeSets=_additionChangeSets;
- (id)initWithAdditionChangeSets:(id)arg1 deletionChangeSets:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end

