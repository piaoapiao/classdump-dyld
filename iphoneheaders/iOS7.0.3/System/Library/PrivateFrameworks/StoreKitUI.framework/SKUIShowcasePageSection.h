/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <iTunesStoreUI/SKUIShowcaseDelegate.h>

@class SKUIMissingItemLoader, SKUIShowcaseViewController, SKUIShowcasePageComponent;

@interface SKUIShowcasePageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIShowcaseDelegate> {

	SKUIMissingItemLoader* _missingItemLoader;
	BOOL _pinned;
	SKUIShowcaseViewController* _showcaseViewController;

}

@property (nonatomic,@dynamic,readonly) SKUIShowcasePageComponent * pageComponent; 
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(int)numberOfCells;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(float)contentInsetAdjustmentForCollectionView:(id)arg1 ;
-(id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(int)arg3 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 ;
-(void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2 ;
-(void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2 ;
-(id)_showcaseViewController;
-(void).cxx_destruct;
-(id)cellForIndexPath:(id)arg1 ;
-(void)showcase:(id)arg1 didDisplayItemAtIndex:(int)arg2 ;
-(void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 ;
@end
