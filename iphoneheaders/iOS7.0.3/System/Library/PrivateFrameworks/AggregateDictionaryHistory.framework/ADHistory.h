/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AggregateDictionaryHistory/AggregateDictionaryHistory-Structs.h>
@class NSString;

@interface ADHistory : NSObject {

	Database* _database;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
-(BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/ id)arg4 ;
-(BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/ id)arg4 ;
@end
