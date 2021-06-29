#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject
{
    _CDInteractionStore *_store;
}


@property(retain) _CDInteractionStore *store; // @synthesize store=_store;
- (id)inSeedPredicateForSeed:(id)arg1;
- (id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3;
- (void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)keyForModelWithSettings:(id)arg1;
- (id)initWithStore:(id)arg1;

@end

