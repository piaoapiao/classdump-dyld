/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol QLPrintPageRendererDataSource <NSObject>
@required
-(int)numberOfPageInPrintPageRenderer:(id)arg1 withSize:(CGSize)arg2;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(int)arg2 withSize:(CGSize)arg3 printingDone:(BOOL*)arg4;
@end
