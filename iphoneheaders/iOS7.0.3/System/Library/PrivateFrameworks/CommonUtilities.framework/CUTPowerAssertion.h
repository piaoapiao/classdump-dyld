/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray;

@interface CUTPowerAssertion : NSObject {

	unsigned _assertion;
	NSString* _identifier;
	NSArray* _stack;

}
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
@end
