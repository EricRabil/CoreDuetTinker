#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDSpotlightQuerier : NSObject
{
}

+ (id)keywordsFromString:(id)arg1;
+ (id)uniqueIdentifierKeyForUTI:(id)arg1;
+ (id)osxBundleIdForUTI:(id)arg1;
+ (id)osxUTItoUniqueIdentifierKeyMap;
+ (id)orQueryStrings:(id)arg1;
+ (id)queryStringForMessages;
+ (id)queryStringForMail;
+ (id)contentTypeKey;
+ (id)queryAttributesForUniqueIdentifierAttributeOSX;
+ (id)mdSearchableQueryAttributes;
+ (struct __MDQuery *)createAuthorQuery:(id)arg1;
+ (struct __MDQuery *)sentMailboxQueryCreate;
+ (id)sentMailboxes;
+ (id)userEmails;
+ (id)mdQueryAttributesOSX;
+ (struct __MDQuery *)mdQueryCreateWithPredicateStr:(id)arg1 userEmails:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;
+ (id)queryStringWithPredicateStr:(id)arg1 userEmails:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)querySpotlightForPredicateString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)requestQuery:(id)arg1;
- (void)requestQuery:(struct __MDQuery *)arg1 readerBlock:(id)arg2;

@end

