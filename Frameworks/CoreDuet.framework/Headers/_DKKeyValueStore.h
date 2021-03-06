#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKeyValueStore-Protocol.h>

@protocol _DKSimpleKeyValueStore;

@interface _DKKeyValueStore : NSObject <_DKKeyValueStore>
{
     id  _store;
}

+ (id)standardUserDefaultsKeyValueStore;

- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 havingClass:(Class)arg2;
- (id)objectForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)dateForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)initWithSimpleKeyValueStore:(id)arg1;

@end

