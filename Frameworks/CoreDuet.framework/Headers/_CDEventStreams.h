#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _CDEventStreams : NSObject
{
    BOOL _allStreamsLoaded;
    NSDictionary *_allEventStreams;
    NSDictionary *_allKBEventStreams;
}

+ (id)privacyPolicyForEventStreamName:(id)arg1;
+ (id)rateLimiterForEventStreamName:(id)arg1;
+ (id)ephemeralitySchedule;
+ (id)eventStreamPropertiesForEventStream:(id)arg1;
+ (id)eventStreamPropertiesForKBName:(id)arg1;
+ (id)eventStreamPropertiesForName:(id)arg1;
+ (id)eventStreamForName:(id)arg1;
+ (id)contentProviderPlistEventStreamsForPath:(id)arg1;
+ (void)loadAllEventStreams;
+ (id)sharedInstance;

@property(nonatomic) BOOL allStreamsLoaded; // @synthesize allStreamsLoaded=_allStreamsLoaded;
@property(readonly, nonatomic) NSDictionary *allKBEventStreams; // @synthesize allKBEventStreams=_allKBEventStreams;
- (void)setAllKBEventStreams:(id)arg1;
@property(readonly, nonatomic) NSDictionary *allEventStreams; // @synthesize allEventStreams=_allEventStreams;
- (void)setAllEventStreams:(id)arg1;
- (id)_eventStreamForName:(id)arg1 orKBName:(id)arg2;
- (id)init;

@end

