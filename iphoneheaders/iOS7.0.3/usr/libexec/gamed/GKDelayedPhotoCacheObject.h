/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKDelayedRequestCacheObject.h>

@class NSData;

@interface GKDelayedPhotoCacheObject : GKDelayedRequestCacheObject

@property (nonatomic,@dynamic,retain) NSData * photoData; 
+(id)entityName;
-(void)performWithClient:(id)arg1 transaction:(id)arg2 ;
-(id)serverRepresentation;
@end
