/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface MMSDelayedDownloadAlertItem : SBAlertItem {

	NSString* _fromAddress;
	int _messageCount;

}
-(void)setMessageCount:(int)arg1 ;
-(void)_showNetworkPrefs;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setAddress:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end
