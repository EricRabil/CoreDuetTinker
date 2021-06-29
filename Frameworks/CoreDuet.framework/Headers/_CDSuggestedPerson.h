#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _CDContact;

@interface _CDSuggestedPerson : NSObject
{
    _CDContact *_contact;
    NSString *_interactionBundleID;
    double _rank;
    double _score;
    NSArray *_interactions;
}


@property(retain) NSArray *interactions; // @synthesize interactions=_interactions;
@property double score; // @synthesize score=_score;
@property double rank; // @synthesize rank=_rank;
@property(retain) NSString *interactionBundleID; // @synthesize interactionBundleID=_interactionBundleID;
@property(retain) _CDContact *contact; // @synthesize contact=_contact;
- (id)description;

@end

