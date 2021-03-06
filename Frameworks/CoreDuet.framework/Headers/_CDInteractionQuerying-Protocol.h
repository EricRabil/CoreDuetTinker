#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSPredicate, NSError;

@protocol _CDInteractionQuerying
- (NSArray *)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3;
- (void)countContactsUsingPredicate:(NSPredicate *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)countInteractionsUsingPredicate:(NSPredicate *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (unsigned long long)countContactsUsingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)countInteractionsUsingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
@end

