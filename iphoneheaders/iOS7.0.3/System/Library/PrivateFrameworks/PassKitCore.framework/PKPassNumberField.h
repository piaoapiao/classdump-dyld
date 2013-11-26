/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField {

	NSString* _currencyCode;
	int _numberStyle;

}

@property (assign,nonatomic) int numberStyle;                    //@synthesize numberStyle=_numberStyle - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)numberStyle;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(void)setNumberStyle:(int)arg1 ;
-(id)currencyCode;
-(void)setCurrencyCode:(id)arg1 ;
@end
