#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter
{
    long long _totalCount;
    long long _currentTotal;
}

@property long long currentTotal; // @synthesize currentTotal=_currentTotal;
@property(readonly) long long totalCount; // @synthesize totalCount=_totalCount;
- (id)description;
- (BOOL)debited;
- (BOOL)credit;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;

@end

