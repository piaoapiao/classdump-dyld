/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class AOSFindBaseServiceProvider, CLLocation, AOSMonitoredFence, NSURL, NSDate;

@interface AOSFMRequestFenceTrigger : AOSFMRequest {

	AOSFindBaseServiceProvider* _provider;
	CLLocation* _triggeredLocation;
	AOSMonitoredFence* _fence;
	NSURL* _triggerURL;
	NSDate* _triggerTimestamp;
	int _triggerType;
	double _validityDuration;

}

@property (nonatomic,retain) AOSFindBaseServiceProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) CLLocation * triggeredLocation;                     //@synthesize triggeredLocation=_triggeredLocation - In the implementation block
@property (nonatomic,retain) AOSMonitoredFence * fence;                          //@synthesize fence=_fence - In the implementation block
@property (nonatomic,retain) NSURL * triggerURL;                                 //@synthesize triggerURL=_triggerURL - In the implementation block
@property (nonatomic,retain) NSDate * triggerTimestamp;                          //@synthesize triggerTimestamp=_triggerTimestamp - In the implementation block
@property (assign,nonatomic) int triggerType;                                    //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) double validityDuration;                            //@synthesize validityDuration=_validityDuration - In the implementation block
-(id)triggerURL;
-(id)initWithProvider:(id)arg1 triggeredLocation:(id)arg2 fence:(id)arg3 validityDuration:(double)arg4 triggerURL:(id)arg5 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(void)setTriggerURL:(id)arg1 ;
-(id)requestUrl;
-(BOOL)canRequestBeRetriedNow;
-(int)maxNonNetworkRelatedRetries;
-(int)maxConsecutiveNetworkNotificationRetries;
-(int)maxTimerBasedNetworkRetries;
-(void)setTriggeredLocation:(id)arg1 ;
-(void)setFence:(id)arg1 ;
-(void)setTriggerTimestamp:(id)arg1 ;
-(id)triggeredLocation;
-(id)fence;
-(id)triggerTimestamp;
-(void)setProvider:(id)arg1 ;
-(id)requestBody;
-(void)setTriggerType:(int)arg1 ;
-(int)triggerType;
-(double)validityDuration;
-(void)setValidityDuration:(double)arg1 ;
-(void).cxx_destruct;
-(id)provider;
@end
