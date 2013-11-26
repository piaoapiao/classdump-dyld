/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>
#import <CalDAV/CalDAVSubscribedCalendar.h>

@class NSURL, NSString, NSMutableDictionary, NSSet, NSTimeZone, NSDictionary, NSArray;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {

	NSMutableDictionary* _properties;

}

@property (readonly) <CalDAVPrincipal> * principal; 
@property (retain) NSString * guid; 
@property (retain) NSURL * calendarURL; 
@property (retain) NSString * title; 
@property (retain) NSString * notes; 
@property (retain) NSString * color; 
@property (retain) NSString * symbolicColorName; 
@property (retain) NSString * pushKey; 
@property (retain) NSURL * owner; 
@property (retain) NSString * ownerDisplayName; 
@property (retain) NSSet * calendarUserAddresses; 
@property (retain) NSURL * publishURL; 
@property (retain) NSURL * prePublishURL; 
@property (retain) NSTimeZone * timeZone; 
@property (retain) NSDictionary * bulkRequests; 
@property (assign) int order; 
@property (assign) int sharingStatus; 
@property (retain) NSSet * sharees; 
@property (assign) BOOL isTaskContainer; 
@property (assign) BOOL isEventContainer; 
@property (assign) BOOL isSubscribed; 
@property (assign) BOOL isManagedByServer; 
@property (assign) BOOL isScheduleInbox; 
@property (assign) BOOL isScheduleOutbox; 
@property (assign) BOOL isNotification; 
@property (assign) BOOL isPoll; 
@property (assign) BOOL isEditable; 
@property (assign) BOOL isRenameable; 
@property (assign) BOOL isEnabled; 
@property (assign) BOOL isPublished; 
@property (assign) BOOL isAffectingAvailability; 
@property (assign) BOOL canBePublished; 
@property (assign) BOOL canBeShared; 
@property (assign) BOOL wasModifiedLocally; 
@property (assign) BOOL needsResync; 
@property (retain) NSString * ctag; 
@property (retain) NSString * syncToken; 
@property (readonly) BOOL needsPublishUpdate; 
@property (readonly) NSArray * syncActions; 
@property (readonly) NSArray * shareeActions; 
@property (readonly) NSDictionary * uuidsToAddActions; 
@property (readonly) NSDictionary * hrefsToModDeleteActions; 
@property (readonly) NSSet * allItemURLs; 
@property (retain) NSURL * subscriptionURL; 
@property (assign) BOOL hasAlarmFilter; 
@property (assign) BOOL hasAttachmentFilter; 
@property (assign) BOOL hasTaskFilter; 
@property (assign) double refreshInterval; 
@property (assign) BOOL autoprovisioned; 
@property (retain) NSString * locationCode; 
@property (retain) NSString * languageCode; 
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)properties;
-(id)subscriptionURL;
-(double)refreshInterval;
-(void)setSubscriptionURL:(id)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(id)initWithCalendarURL:(id)arg1 properties:(id)arg2 principal:(id)arg3 ;
-(id)calendarURLString;
-(BOOL)isTaskContainer;
-(void)setIsTaskContainer:(BOOL)arg1 ;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1 ;
-(BOOL)hasAlarmFilter;
-(BOOL)hasAttachmentFilter;
-(BOOL)hasTaskFilter;
-(void)setHasAlarmFilter:(BOOL)arg1 ;
-(void)setHasAttachmentFilter:(BOOL)arg1 ;
-(void)setHasTaskFilter:(BOOL)arg1 ;
@end
