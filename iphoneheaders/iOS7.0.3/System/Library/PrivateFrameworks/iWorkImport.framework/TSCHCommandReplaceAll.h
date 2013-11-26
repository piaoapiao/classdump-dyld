/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKReplaceAllChildCommand.h>

@class TSCHChartDrawableInfo, NSMutableArray;

@interface TSCHCommandReplaceAll : TSKReplaceAllChildCommand {

	TSCHChartDrawableInfo* mInfo;
	NSMutableArray* mCommands;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)shouldRunSynchronously;
-(void)p_addSubcommandsForStyleOwner:(id)arg1 property:(int)arg2 ;
-(id)initWithParentCommand:(id)arg1 chartInfo:(id)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end
