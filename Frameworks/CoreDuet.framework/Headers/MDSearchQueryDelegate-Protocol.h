#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol NSObject;

@class MDSearchQuery, NSArray, NSError;

@protocol MDSearchQueryDelegate <NSObject>
- (void)searchQuery:(MDSearchQuery *)arg1 didReturnItems:(NSArray *)arg2;

@optional
- (void)searchQuery:(MDSearchQuery *)arg1 didFailWithError:(NSError *)arg2;
- (void)searchQuery:(MDSearchQuery *)arg1 statusChanged:(unsigned long long)arg2;
@end

