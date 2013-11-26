/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (readonly) int rowIndex; 
@property (readonly) int sectionRowIndex; 
@property (readonly) DOMHTMLCollection * cells; 
@property (copy) NSString * align; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * ch; 
@property (copy) NSString * chOff; 
@property (copy) NSString * vAlign; 
-(int)rowIndex;
-(id)align;
-(void)setAlign:(id)arg1 ;
-(id)bgColor;
-(void)setBgColor:(id)arg1 ;
-(id)ch;
-(void)setCh:(id)arg1 ;
-(id)chOff;
-(void)setChOff:(id)arg1 ;
-(id)vAlign;
-(void)setVAlign:(id)arg1 ;
-(int)sectionRowIndex;
-(id)cells;
-(id)insertCell:(int)arg1 ;
-(void)deleteCell:(int)arg1 ;
@end
