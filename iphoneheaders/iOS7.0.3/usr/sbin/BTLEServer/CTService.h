/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BTLEServer/ServerService.h>

@class CBMutableCharacteristic, NSTimer;

@interface CTService : ServerService {

	CBMutableCharacteristic* _currentTime;
	CBMutableCharacteristic* _localTimeInformation;
	NSTimer* _nextDSTTransitionTimer;

}
-(id)currentTimeValue;
-(BOOL)currentTimeZone;
-(unsigned char)currentDstOffset;
-(id)localTimeInformationValue;
-(void)dstDidChange;
-(id)readCurrentTime;
-(id)readLocalTimeInformation;
-(void)systemClockDidChange;
-(void)systemTimeZoneDidChange;
-(void)setupNextDSTTransitionTimer;
-(void)currentTimeDidChange;
-(void)updateCurrentTime;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end
