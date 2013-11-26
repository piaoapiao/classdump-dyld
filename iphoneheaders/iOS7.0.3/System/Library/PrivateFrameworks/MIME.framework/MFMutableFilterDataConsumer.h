/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MIME/MFBaseFilterDataConsumer.h>
#import <MIME/MFGuaranteedCollectingDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class , MFLock;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {

	<MFGuaranteedCollectingDataConsumer>* _mainConsumer;
	MFLock* _consumerLock;
	BOOL _isDone;

}
-(void)dealloc;
-(id)data;
-(void)done;
-(int)appendData:(id)arg1 ;
-(id)initWithMainConsumer:(id)arg1 ;
-(void)addDataConsumer:(id)arg1 ;
@end
