/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface PDIterate : NSObject {

	int mType;
	BOOL mIsBackwards;
	BOOL mIsPercentage;
	double mValue;

}
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setValue:(double)arg1 ;
-(double)value;
-(BOOL)isBackwards;
-(void)setIsBackwards:(BOOL)arg1 ;
-(BOOL)isValuePercentage;
-(void)setIsValuePercentage:(BOOL)arg1 ;
@end
