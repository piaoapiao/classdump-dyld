/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned)arg2 resultsHandler:(/*^block*/ id)arg3 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned)arg2 ;
+(SCD_Struct_SL12)imageSizeWithData:(id)arg1 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned)arg2 resultsHandler:(/*^block*/ id)arg3 ;
@end
