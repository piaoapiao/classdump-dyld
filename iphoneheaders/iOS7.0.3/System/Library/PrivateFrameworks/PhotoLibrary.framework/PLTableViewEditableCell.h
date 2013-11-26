/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class PLTextView, UITextField, UILabel;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {

	PLTextView* _textView;
	UITextField* _textField;
	UILabel* _sizeTextLabel;
	id _delegate;
	BOOL _forceFirstResponder;
	int _cellStyle;

}

@property (assign,nonatomic) int style;              //@synthesize cellStyle=_cellStyle - In the implementation block
+(id)posterCellIdentifier;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(int)style;
-(id)value;
-(CGSize)contentSize;
-(BOOL)isEditing;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_textFieldChanged;
-(id)initWithFrame:(CGRect)arg1 multiLine:(BOOL)arg2 ;
-(id)initHDSDCell;
-(id)initWithFrame:(CGRect)arg1 cellStyle:(int)arg2 ;
-(void)forceFirstResponder:(BOOL)arg1 ;
-(id)sizeTextLabel;
-(void)setPlaceholderText:(id)arg1 ;
@end
