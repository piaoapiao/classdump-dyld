/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIActivityItemDeferredSource.h>
#import <UIKit/UIActivityItemSource.h>

@protocol OS_dispatch_semaphore;
@class PLManagedAsset, NSData, NSString, PUActivityItemSourceOperation, PLVideoRemaker, NSObject;

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemSource> {

	PLManagedAsset* _asset;
	BOOL _isMogul;
	NSData* _data;
	NSString* _utiType;
	PUActivityItemSourceOperation* _operation;
	PLVideoRemaker* _remaker;
	BOOL _remakingWasCancelled;
	NSObject<OS_dispatch_semaphore>* _remakingSemaphore;
	NSString* _remakerTempPath;
	id _strongSelf;
	float _remakerProgress;

}

@property (nonatomic,readonly) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * utiType; 
@property (assign) float remakerProgress;                           //@synthesize remakerProgress=_remakerProgress - In the implementation block
-(void)dealloc;
-(id)data;
-(id)initWithAsset:(id)arg1 ;
-(void)_cleanup;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)asset;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(id)utiType;
-(void)cleanupForActivityDidComplete;
-(BOOL)needsVideoRemakerForActivityType:(id)arg1 ;
-(float)remakerProgress;
-(void)_cancelRemaking:(id)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)_cleanupRemaker;
-(void)_removeTempFile;
-(void)_getData:(id*)arg1 type:(id*)arg2 forActivityType:(id)arg3 ;
-(BOOL)_videoRemakerNeededForActivityType:(id)arg1 ;
-(void)_getAssetData:(id*)arg1 type:(id*)arg2 forActivityType:(id)arg3 ;
-(void)_setRemakerProgress:(float)arg1 ;
-(void)prepareItemForActivityType:(id)arg1 ;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
-(void).cxx_destruct;
@end
