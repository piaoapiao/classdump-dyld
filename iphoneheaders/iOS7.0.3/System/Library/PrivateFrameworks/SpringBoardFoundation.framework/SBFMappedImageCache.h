/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface SBFMappedImageCache : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSString* _path;
	NSMutableDictionary* _images;

}
+(id)wallpaperCache;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDescription:(id)arg1 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/ id)arg3 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/ id)arg2 ;
-(void)warmupImageForKey:(id)arg1 ;
@end
