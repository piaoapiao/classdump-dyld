/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {

	BOOL _invitationRecordsDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLGenericAlbum * album; 
@property (nonatomic,readonly) BOOL invitationRecordsDidChange; 
+(id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 ;
-(id)userInfo;
-(id)name;
-(void)_calculateDiffs;
-(NSObject*)album;
-(BOOL)invitationRecordsDidChange;
@end
