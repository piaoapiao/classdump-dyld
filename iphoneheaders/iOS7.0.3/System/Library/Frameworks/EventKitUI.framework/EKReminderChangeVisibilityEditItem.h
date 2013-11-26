/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKReminderEditItem.h>

@interface EKReminderChangeVisibilityEditItem : EKReminderEditItem {

	int _visibilityToCommit;

}

@property (nonatomic,readonly) int visibilityToCommit; 
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(int)visibilityToCommit;
@end
