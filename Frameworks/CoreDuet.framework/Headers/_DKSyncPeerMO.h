#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID;

@interface _DKSyncPeerMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *cloudID; // @dynamic cloudID;
@property(copy, nonatomic) NSString *deviceID; // @dynamic deviceID;
@property(copy, nonatomic) NSDate *lastSeenDate; // @dynamic lastSeenDate;
@property(copy, nonatomic) NSString *model; // @dynamic model;
@property(copy, nonatomic) NSString *rapportID; // @dynamic rapportID;
@property(copy, nonatomic) NSUUID *uuid; // @dynamic uuid;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end
