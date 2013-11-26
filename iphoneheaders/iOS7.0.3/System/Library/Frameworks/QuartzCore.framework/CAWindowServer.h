/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled; 
@property (assign) unsigned rendererFlags; 
+(id)serverIfRunning;
+(id)server;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(void)removeAllDisplays;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(BOOL)isMirroringEnabled;
-(unsigned)rendererFlags;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_init;
-(void)setRendererFlags:(unsigned)arg1 ;
-(id)displays;
@end
