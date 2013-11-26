/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface GEOResourceInfo : NSObject {

	NSString* _name;
	int _type;
	NSString* _checksum;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * checksum;              //@synthesize checksum=_checksum - In the implementation block
-(void)dealloc;
-(int)type;
-(id)name;
-(id)initWithName:(id)arg1 type:(int)arg2 checksum:(id)arg3 ;
-(id)checksum;
@end
