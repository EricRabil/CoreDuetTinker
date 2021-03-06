#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;

@interface _DKChangeSetSummary : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _sequenceNumber;
    NSSet *_eventUUIDs;
}


@property(retain, nonatomic) NSSet *eventUUIDs; // @synthesize eventUUIDs=_eventUUIDs;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

@end

