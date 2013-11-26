/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIView.h>

@class UIPasscodeField, UITextInputTraits, UIImageView, NSString;

@interface SBDeviceLockEntryField : UIView {

	int _style;
	int _interfaceOrientation;
	UIPasscodeField* _passcodeField;
	UITextInputTraits* _textInputTraits;
	CFCharacterSetRef _numericTrimmingSet;
	UIImageView* _shadowView;
	BOOL _highlighted;
	id _delegate;

}

@property (assign,nonatomic) int interfaceOrientation;                                       //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) id delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isOkayButtonEnabled,nonatomic) BOOL okayButtonEnabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
+(id)topShadowImage;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)delegate;
-(int)interfaceOrientation;
-(void)appendString:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(id)textInputTraits;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)_backgroundImage;
-(void)passcodeFieldTextDidChange:(id)arg1 ;
-(BOOL)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeFieldDidAcceptEntry:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(id)passcodeField;
-(CGSize)_fieldSizeForCurrentDevice;
-(void)_layoutForCurrentDevice;
-(BOOL)isOkayButtonEnabled;
-(void)setOkayButtonEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 ;
@end
