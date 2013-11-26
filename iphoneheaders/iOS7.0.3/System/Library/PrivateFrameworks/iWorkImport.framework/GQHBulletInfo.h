/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStyle;

@interface GQHBulletInfo : NSObject {

	int mType;
	int mBulletIndent;
	int mTextIndent;
	CFStringRef mChar;
	BOOL mHasNumber;
	int mNumber;
	int mLabelType;
	GQDSStyle* mStyle;

}
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(void)setBulletIndent:(int)arg1 ;
-(void)setHasNumber:(BOOL)arg1 ;
-(BOOL)hasNumber;
-(void)setBulletChar:(CFStringRef)arg1 ;
-(CFStringRef)bulletChar;
-(int)bulletIndent;
-(CFStringRef)createTierStringNumber;
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)style;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(int)textIndent;
-(void)setTextIndent:(int)arg1 ;
@end
