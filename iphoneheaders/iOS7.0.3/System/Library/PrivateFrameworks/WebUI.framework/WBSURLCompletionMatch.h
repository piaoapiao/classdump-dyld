/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface WBSURLCompletionMatch : NSObject {

	int _matchLocation;

}

@property (nonatomic,readonly) int matchLocation;              //@synthesize matchLocation=_matchLocation - In the implementation block
+(int)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(int)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(id)title;
-(id)originalURLString;
-(id)userVisibleURLString;
-(int)matchLocation;
-(id)initWithMatchLocation:(int)arg1 ;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end
