#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, _CDInteraction, NSError;

@protocol _CDInteractionRecording
- (void)recordInteractions:(NSArray *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (BOOL)recordInteractions:(NSArray *)arg1;
- (BOOL)recordInteraction:(_CDInteraction *)arg1;
@end

