/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {

	ODDPresentationPoint* mParent;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(void)addChild:(id)arg1 order:(unsigned)arg2 ;
-(id)children;
-(id)parent;
@end
