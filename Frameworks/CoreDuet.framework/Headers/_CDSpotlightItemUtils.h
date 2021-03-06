#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDSpotlightItemUtils : NSObject
{
}

+ (BOOL)shouldFilterEmailAddress:(id)arg1;
+ (id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(BOOL)arg3 getMessages:(BOOL)arg4;
+ (id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)messageContextDictionaryForSearchableItem:(id)arg1;
+ (id)emailContextDictionaryForSearchableItem:(id)arg1;
+ (id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (BOOL)isLocationBasedItem:(id)arg1;
+ (id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)interactionForSearchableItem:(id)arg1;
+ (id)policies;
+ (id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2;
+ (BOOL)whitelistedCSSearchableItem:(id)arg1;
+ (id)_contactsForPersons:(id)arg1;
+ (id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2;
+ (long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2;
+ (BOOL)utType:(id)arg1 conformsTo:(id)arg2;
+ (id)utiConformCache;
+ (id)mechanismUtiMap;
+ (BOOL)contentTypeTree:(id)arg1 conformsToUTITypes:(id)arg2;
+ (BOOL)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2;
+ (BOOL)uncachedUtType:(id)arg1 conformsTo:(id)arg2;
+ (id)safariUTIs;
+ (id)expectedUTIsForMechanism:(long long)arg1;
+ (id)expectedSupportedUTIs;

@end

