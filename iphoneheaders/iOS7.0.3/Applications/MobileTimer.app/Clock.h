/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol Clock
@property (nonatomic,readonly) int runMode; 
@optional
-(double)updateInterval;
-(double)coarseUpdateInterval;
-(void)updateFlutter;
-(void)updateTimeContinuously:(int)arg1;

@required
-(void)start;
-(void)stop;
-(int)runMode;
-(void)updateTime;
@end
