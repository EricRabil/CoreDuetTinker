#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface _DKChangeSet : NSObject <_DKProtobufConverting>
{
    NSArray *_eventsToAdd;
    NSArray *_eventIDsToDelete;
    NSUUID *_deviceIdentifier;
    unsigned long long _sequenceNumber;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_type;
}

+ (id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
+ (id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)_createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)fromPBCodable:(id)arg1;
+ (id)deletionChangeSetEntityName;
+ (id)additionChangeSetEntityName;
+ (id)dataFromCompressedChangeSet:(id)arg1;

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSArray *eventIDsToDelete; // @synthesize eventIDsToDelete=_eventIDsToDelete;
@property(retain, nonatomic) NSArray *eventsToAdd; // @synthesize eventsToAdd=_eventsToAdd;
@property(readonly, copy) NSString *description;
- (id)asData;
- (id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 type:(id)arg7;
- (id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4;
- (id)initWithEventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithEventsToAdd:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)toPBCodable;
- (id)insertInManagedObjectContext:(id)arg1;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

