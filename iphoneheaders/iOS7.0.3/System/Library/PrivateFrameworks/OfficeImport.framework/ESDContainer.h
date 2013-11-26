/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDContainer : ESDObject {

	NSMutableArray* mChildren;

}
+(void)readChildrenOfObject:(EshObject*)arg1 reader:(OcReaderRef)arg2 toArray:(id)arg3 ;
+(void)pbReadChildrenOfObject:(EshObject*)arg1 toArray:(id)arg2 state:(id)arg3 ;
-(void)dealloc;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(unsigned)childCount;
-(id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)initFromReader:(OcReaderRef)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(id)shapeContainer;
-(id)childAt:(unsigned)arg1 ;
-(EshGroup*)eshGroup;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)insertChild:(id)arg1 at:(unsigned)arg2 ;
-(id)firstChildOfType:(unsigned short)arg1 ;
-(EshContainer*)eshContainer;
-(id)addEshChild:(EshObject*)arg1 ;
-(id)addChildOfType:(unsigned short)arg1 ;
-(unsigned)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned)arg2 ;
-(id)containerFromObject:(id)arg1 mustExist:(BOOL)arg2 ;
-(id)childOfType:(unsigned short)arg1 instance:(short)arg2 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(id)addContainerChildOfType:(unsigned short)arg1 ;
-(EshObject*)addAtomChildOfType:(unsigned short)arg1 ;
-(id)insertEshChild:(EshObject*)arg1 at:(unsigned)arg2 ;
-(id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2 ;
-(id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned)arg2 ;
-(id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(BOOL)arg2 ;
-(id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(BOOL)arg3 ;
-(id)containerChildAt:(unsigned)arg1 ;
-(id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)addPptContainerChildOfType:(unsigned short)arg1 ;
-(EshObject*)addPptAtomChildOfType:(unsigned short)arg1 ;
-(id)addPptEshClientChildOfType:(unsigned short)arg1 ;
-(void)addCStringWithNSString:(id)arg1 instance:(int)arg2 ;
-(void)addCStringWithChar2String:(const unsigned short*)arg1 instance:(int)arg2 ;
@end
