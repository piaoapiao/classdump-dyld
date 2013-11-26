/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLMicroBlogSheetDelegate, SLMicroBlogMentionsDelegate;
@class NSObject, NSArray, NSString, UITableView;

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSObject<SLMicroBlogSheetDelegate>* _sheetDelegate;
	NSArray* _mentions;
	NSString* _searchString;
	UITableView* _tableView;
	NSObject<SLMicroBlogMentionsDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) NSObject<SLMicroBlogMentionsDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_blankSurrogateProfileImage;
-(id)initWithSheetDelegate:(id)arg1 ;
-(void)updateMentions;
-(void)setMentions:(id)arg1 ;
-(id)mentions;
-(void)completeWithSelectedMention:(id)arg1 ;
-(void)chooseRow:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(CGSize)contentSizeForViewInPopover;
-(void)loadView;
-(void)setSearchString:(id)arg1 ;
-(void).cxx_destruct;
@end
