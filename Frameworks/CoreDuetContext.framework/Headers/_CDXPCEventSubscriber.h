#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface _CDXPCEventSubscriber : NSObject
{
    unsigned int _uid;
    unsigned long long _token;
    NSObject<OS_xpc_object> *_descriptor;
    NSString *_streamName;
}


@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long token; // @synthesize token=_token;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *clientIdentifier;
- (id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3 streamName:(id)arg4;

@end

