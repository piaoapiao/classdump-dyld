/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/_MKUserTrackingButton.h>

@interface MapsUserTrackingButton : _MKUserTrackingButton {

	BOOL _shouldInvertSelectionColor;
	BOOL shouldInvertSelectionColor;

}

@property (assign) BOOL shouldInvertSelectionColor; 
-(void)setShouldInvertSelectionColor:(BOOL)arg1 ;
-(void)updateSelectedTintColor;
-(BOOL)shouldInvertSelectionColor;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(float)_selectedIndicatorAlpha;
@end
