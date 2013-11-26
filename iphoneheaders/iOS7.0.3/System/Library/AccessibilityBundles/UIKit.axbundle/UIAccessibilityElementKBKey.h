/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {

	UIKBTree* _key;
	BOOL _changesOnShiftDown;

}

@property (nonatomic,retain) UIKBTree * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL changesOnShiftDown;              //@synthesize changesOnShiftDown=_changesOnShiftDown - In the implementation block
-(BOOL)isButtonType;
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(BOOL)_accessibilityWasForcedToUseForeignKB;
-(BOOL)_axIsDictationKey;
-(id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1 ;
-(void)setChangesOnShiftDown:(BOOL)arg1 ;
-(BOOL)isUnaffectedByShiftLock;
-(BOOL)changesOnShiftDown;
-(BOOL)allowsCaseChangeOnShift;
-(void)_applyCapitalLetterTransform;
-(id)_accessibilityLabel;
-(BOOL)_allowCachingAccessibilityLabel;
-(BOOL)_accessibilityIsDeleteKey;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)key;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(BOOL)accessibilityActivate;
-(void)setKey:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityKeyboardKeyEnteredString;
-(BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
-(BOOL)_accessibilityAllowsAlternativeCharacterActivation;
-(id)_accessibilityVariantKeys;
-(BOOL)_accessibilityHasVariantKeys;
@end
