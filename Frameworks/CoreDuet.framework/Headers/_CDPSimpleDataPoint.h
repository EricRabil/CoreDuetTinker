#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataPoint-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint>
{
    BOOL _userIsSender;
    BOOL _userIsThreadInitiator;
    NSDate *_timestamp;
    NSArray *_peopleIdentifiers;
    NSString *_title;
}


@property(nonatomic) BOOL userIsThreadInitiator; // @synthesize userIsThreadInitiator=_userIsThreadInitiator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL userIsSender; // @synthesize userIsSender=_userIsSender;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

