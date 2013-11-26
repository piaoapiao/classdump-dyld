/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputPrivate.h>

@class UITextInteractionAssistant, UITextInputTraits, UITextRange, NSDictionary, UITextPosition, UIView, UIColor, UIImage;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate> {

	UITextInputTraits* m_traits;

}

@property (assign,nonatomic,@dynamic) int autocapitalizationType; 
@property (assign,nonatomic,@dynamic) int autocorrectionType; 
@property (assign,nonatomic,@dynamic) int spellCheckingType; 
@property (assign,nonatomic,@dynamic) int keyboardType; 
@property (assign,nonatomic,@dynamic) int keyboardAppearance; 
@property (assign,nonatomic,@dynamic) int returnKeyType; 
@property (assign,nonatomic,@dynamic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic,@dynamic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
@property (assign,nonatomic,@dynamic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,@dynamic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic,@dynamic) unsigned insertionPointWidth; 
@property (assign,nonatomic,@dynamic) int textLoupeVisibility; 
@property (assign,nonatomic,@dynamic) int textSelectionBehavior; 
@property (assign,nonatomic,@dynamic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic,@dynamic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic,@dynamic) BOOL acceptsEmoji; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic,@dynamic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) int selectionGranularity; 
-(void)dealloc;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEditable;
-(CGRect)visibleBounds;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)isEditing;
-(id)interactionAssistant;
-(id)selectionView;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id)inputDelegate;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(id)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setInputDelegate:(id)arg1 ;
-(id)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)selectAll;
-(id)textColorForCaretSelection;
-(NSRange)selectionRange;
-(BOOL)hasSelection;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)hasContent;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(id)fontForCaretSelection;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1 ;
-(CGRect)caretRect;
-(void)replaceCurrentWordWithText:(id)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterAfterCaretSelection;
-(id)rectsForNSRange:(NSRange)arg1 ;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(int)wordOffsetInRange:(id)arg1 ;
-(int)selectionState;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(void)extendCurrentSelection:(int)arg1 ;
-(CGRect)convertCaretRect:(CGRect)arg1 ;
-(BOOL)isShowingPlaceholder;
-(void)setupPlaceholderTextIfNeeded;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
@end
