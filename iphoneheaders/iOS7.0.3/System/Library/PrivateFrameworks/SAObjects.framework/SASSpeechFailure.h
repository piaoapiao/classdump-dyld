/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (assign,nonatomic) int errorCode; 
@property (assign,nonatomic) int reason; 
@property (nonatomic,copy) NSString * reasonDescription; 
+(id)speechFailure;
+(id)speechFailureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setReason:(int)arg1 ;
-(int)reason;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)reasonDescription;
-(void)setReasonDescription:(id)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
@end
