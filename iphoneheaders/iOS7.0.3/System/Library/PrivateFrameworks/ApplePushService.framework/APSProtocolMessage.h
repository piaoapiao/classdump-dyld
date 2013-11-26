/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableData;

@interface APSProtocolMessage : NSObject {

	int _command;
	NSMutableData* _data;

}
-(void)_appendOneByte:(unsigned char)arg1 ;
-(void)_appendTwoBytes:(unsigned short)arg1 ;
-(void)appendItem:(unsigned char)arg1 data:(id)arg2 ;
-(void)_appendFourBytes:(unsigned)arg1 ;
-(id)initWithCommand:(int)arg1 ;
-(void)appendItem:(unsigned char)arg1 string:(id)arg2 ;
-(void)appendOneByteItem:(unsigned char)arg1 byte:(unsigned char)arg2 ;
-(void)appendTwoByteItem:(unsigned char)arg1 bytes:(unsigned short)arg2 ;
-(void)appendFourByteItem:(unsigned char)arg1 bytes:(unsigned)arg2 ;
-(id)copyMessageData;
-(void)dealloc;
@end
