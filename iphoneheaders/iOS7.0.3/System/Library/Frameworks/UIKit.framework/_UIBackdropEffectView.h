/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView {

	CABackdropLayer* _backdropLayer;
	float _zoom;

}

@property (nonatomic,retain) CABackdropLayer * backdropLayer;              //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (assign,nonatomic) float zoom;                                   //@synthesize zoom=_zoom - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(id)init;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)backdropLayer;
-(void)backdropLayerStatisticsDidChange:(id)arg1 ;
-(void)setZoom:(float)arg1 ;
-(void)setBackdropLayer:(id)arg1 ;
-(float)zoom;
@end
