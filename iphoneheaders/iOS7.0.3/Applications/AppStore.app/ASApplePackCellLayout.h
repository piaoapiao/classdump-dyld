/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class UILabel, NSString;

@interface ASApplePackCellLayout : SKUIItemCellLayout {

	UILabel* _descriptionLabel;
	int _position;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) int position;                           //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * shortDescription; 
@property (nonatomic,copy) NSString * title; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(id)title;
-(id)shortDescription;
-(void)setShortDescription:(id)arg1 ;
-(void).cxx_destruct;
@end
