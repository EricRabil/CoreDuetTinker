#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString;

@interface _DKSourceMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSString *deviceID; // @dynamic deviceID;
@property(copy, nonatomic) NSString *groupID; // @dynamic groupID;
@property(copy, nonatomic) NSString *itemID; // @dynamic itemID;
@property(retain, nonatomic) NSSet *product; // @dynamic product;
@property(copy, nonatomic) NSString *sourceID; // @dynamic sourceID;
@property(copy, nonatomic) NSNumber *userID; // @dynamic userID;

@end

