/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun {

	WDCharacterProperties* mProperties;
	int mType;

}
-(void)dealloc;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(void)setCharacterType:(int)arg1 ;
-(void)clearProperties;
-(int)characterType;
@end
