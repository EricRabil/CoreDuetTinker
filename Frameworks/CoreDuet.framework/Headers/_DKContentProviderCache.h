#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface _DKContentProviderCache : NSObject
{
    NSCache *_cache;
}


@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (id)contentProviderForEventStream:(id)arg1 error:(id *)arg2;
- (id)init;

@end

