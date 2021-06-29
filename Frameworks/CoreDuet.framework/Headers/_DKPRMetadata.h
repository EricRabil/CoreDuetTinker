#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <ProtocolBuffer/PBCodable.h>

@protocol NSCopying;

@class NSMutableArray;

@interface _DKPRMetadata : NSObject <NSCopying>
{
    NSMutableArray *_entrys;
}

+ (Class)entryType;

@property(retain, nonatomic) NSMutableArray *entrys; // @synthesize entrys=_entrys;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)entryAtIndex:(unsigned long long)arg1;
- (unsigned long long)entrysCount;
- (void)addEntry:(id)arg1;
- (void)clearEntrys;

@end
