#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKEventQuery.h>

@class NSDate, _DKKnowledgeStorage;

@interface _DKPredictionQuery : _DKEventQuery
{
    BOOL _useHistoricalHistogram;
    BOOL _isTopNPrediction;
    int _slotDuration;
    int _minimumDaysOfHistory;
    int _totalSlotsInDay;
    unsigned long long _type;
    unsigned long long _partitionType;
    NSDate *_asOfDate;
    _DKKnowledgeStorage *_storage;
    id _predictionHandler;
    long long _topN;
    double _minLikelihood;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)calendar:(id)arg1 isWeekendWithIntervalToWeekdayWeekendTransition:(double *)arg2 containingOrAfterDate:(id)arg3;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;

@property(nonatomic) double minLikelihood; // @synthesize minLikelihood=_minLikelihood;
@property(nonatomic) long long topN; // @synthesize topN=_topN;
@property(nonatomic) BOOL isTopNPrediction; // @synthesize isTopNPrediction=_isTopNPrediction;
@property(nonatomic) int totalSlotsInDay; // @synthesize totalSlotsInDay=_totalSlotsInDay;
@property(copy) id predictionHandler; // @synthesize predictionHandler=_predictionHandler;
@property(retain, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSDate *asOfDate; // @synthesize asOfDate=_asOfDate;
@property(nonatomic) BOOL useHistoricalHistogram; // @synthesize useHistoricalHistogram=_useHistoricalHistogram;
@property(nonatomic) unsigned long long partitionType; // @synthesize partitionType=_partitionType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) int minimumDaysOfHistory; // @synthesize minimumDaysOfHistory=_minimumDaysOfHistory;
@property(nonatomic) int slotDuration; // @synthesize slotDuration=_slotDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)likelihoodForTopN:(long long)arg1 withMinLikelihood:(double)arg2 withData:(id)arg3;
- (id)predictionOfType:(unsigned long long)arg1 withData:(id)arg2;
- (void)addEventsToObservations:(id)arg1 startingHistogram:(id)arg2 endingHistogram:(id)arg3 withPredictionDate:(id)arg4;
- (void)handleEventPredictionWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 predictionStartDate:(id)arg3 durationSinceFirstEvent:(double)arg4 calendar:(id)arg5 observations:(id)arg6 useWeights:(BOOL)arg7;
- (void)handleImpulsePredictionWithEventStartDate:(id)arg1 predictionStartDate:(id)arg2 durationSinceFirstEvent:(double)arg3 calendar:(id)arg4 observations:(id)arg5 lastDate:(id *)arg6 lastSlot:(int *)arg7;
- (id)constructTimelineWithObservations:(id)arg1 withFirstEventDate:(id)arg2 withHistogramInterval:(id)arg3 withPredictionStartDate:(id)arg4 durationSinceFirstEvent:(double)arg5;
- (void)setValueForIndex:(int)arg1 forObservations:(id)arg2 withDenominator:(double)arg3;
- (BOOL)shouldIncludeEventWithStartDate:(id)arg1 eventSlot:(int)arg2 withPredictionStartDate:(id)arg3 withPartitionType:(unsigned long long)arg4 andCalendar:(id)arg5;
- (BOOL)both:(id)arg1 and:(id)arg2 areSameDayOfWeekWith:(id)arg3;
- (BOOL)both:(id)arg1 and:(id)arg2 areWeekendOrWeekdayWithCalendar:(id)arg3;
- (int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2;
- (int)computeSlotFromMidnightForDate:(id)arg1;

@end

