/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GEODirectionsProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	BOOL _cancelled;

}

@property (nonatomic,retain) GEORequester * requester;              //@synthesize requester=_requester - In the implementation block
+(id)providerURL;
+(void)setUsePersistentConnection:(BOOL)arg1 ;
+(unsigned short)providerID;
+(void)resetProviderURL;
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(id)requester;
-(void)setRequester:(id)arg1 ;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)cancelProviderRequest;
-(void)cleanupRequester;
@end
