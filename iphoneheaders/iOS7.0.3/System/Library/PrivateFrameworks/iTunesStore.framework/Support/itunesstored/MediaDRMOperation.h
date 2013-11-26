/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface MediaDRMOperation : ISOperation {

	NSString* _mediaFileExtension;
	NSString* _mediaPath;
	id _sinfs;

}

@property (readonly) NSString * mediaPath; 
@property (readonly) id sinfs; 
@property (readonly) NSString * mediaFileExtension; 
-(id)initWithMediaPath:(id)arg1 sinfs:(id)arg2 ;
-(id)mediaFileExtension;
-(id)sinfs;
-(void)dealloc;
-(void)run;
-(id)mediaPath;
@end
