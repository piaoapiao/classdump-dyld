/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL;

@interface SecurityInfo : NSObject {

	NSURL* url;
	int urlSecurityAssessment;
	int urlSecurityProvider;
	BOOL hasWarnedUser;

}
-(id)assessedURL;
-(void)setAssessedURL:(id)arg1 ;
-(int)urlSecurityAssessment;
-(void)setURLSecurityAssessment:(int)arg1 ;
-(BOOL)isKnownToBeUnsafe;
-(BOOL)hasWarnedUser;
-(void)setHasWarnedUser:(BOOL)arg1 ;
-(int)urlSecurityProvider;
-(void)setURLSecurityProvider:(int)arg1 ;
-(void)dealloc;
-(id)description;
@end
