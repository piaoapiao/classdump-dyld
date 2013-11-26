/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIGradient;

@interface STRoundedGradientBackroundView : UIView {

	UIColor* _topColor;
	UIColor* _bottomColor;
	UIColor* _borderColor;
	UIGradient* _gradient;

}

@property (nonatomic,retain) UIColor * topColor;                 //@synthesize topColor=_topColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomColor;              //@synthesize bottomColor=_bottomColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
-(void)_invalidateGradient;
-(id)_gradient;
-(void)setBottomColor:(id)arg1 ;
-(id)bottomColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(id)borderColor;
-(void)setTopColor:(id)arg1 ;
-(id)topColor;
@end
