/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDate;

@interface SBWorkItem : NSObject {

	/*^block*/ id _workBlock;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) id work;                            //@synthesize workBlock=_workBlock - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
-(id)initWithWork:(/*^block*/ id)arg1 ;
-(/*^block*/ id)work;
-(void)dealloc;
-(id)creationDate;
@end
