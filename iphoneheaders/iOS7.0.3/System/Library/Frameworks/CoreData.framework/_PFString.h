/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSString.h>

@interface _PFString : NSString {

	int _reserved1;
	int _cd_rc;
	unsigned _length;
	id _sourceData;
	int _reserved2;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(const char*)cString;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(void)getCString:(char*)arg1 ;
-(unsigned)cStringLength;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)copy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)description;
-(unsigned)length;
-(const char*)UTF8String;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end
