/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class AOSLocationTracker, NSMutableArray, NSObject, PCPersistentTimer;

@interface AOSTrackedLocationsStore : NSObject {

	AOSLocationTracker* _locationTracker;
	NSMutableArray* _trackedLocations;
	NSObject<OS_dispatch_queue>* _store_ops_queue;
	PCPersistentTimer* _locationPurgeTimer;

}

@property (assign,nonatomic,__weak) AOSLocationTracker * locationTracker;                //@synthesize locationTracker=_locationTracker - In the implementation block
@property (nonatomic,retain) NSMutableArray * trackedLocations;                          //@synthesize trackedLocations=_trackedLocations - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * store_ops_queue;              //@synthesize store_ops_queue=_store_ops_queue - In the implementation block
@property (nonatomic,retain) PCPersistentTimer * locationPurgeTimer;                     //@synthesize locationPurgeTimer=_locationPurgeTimer - In the implementation block
-(void)setLocationTracker:(id)arg1 ;
-(id)locationTracker;
-(void)recordLocation:(id)arg1 ofType:(int)arg2 ;
-(void)actOnTrackedLocationsUsingBlock:(/*^block*/ id)arg1 ;
-(id)initWithLocationTracker:(id)arg1 ;
-(void)deleteAllTrackedLocations;
-(id)locationPurgeTimer;
-(void)setLocationPurgeTimer:(id)arg1 ;
-(id)locationPurgeTimerXPCTransactionName;
-(void)setTrackedLocations:(id)arg1 ;
-(id)_serialQueue_readTrackedLocationsCache;
-(id)trackedLocations;
-(void)setStore_ops_queue:(id)arg1 ;
-(void)_serialQueue_scheduleLocationPurgeTimer;
-(id)_locationCacheFile;
-(id)_trackedLocationTypeAsString:(int)arg1 ;
-(id)store_ops_queue;
-(void)_serialQueue_addTrackedLocationNow:(id)arg1 ;
-(void)_serialQueue_purgeOldTrackedLocationsNow;
-(void)_serialQueue_updateTrackedLocationsCache:(id)arg1 ;
-(void)_serialQueue_deleteTrackedLocationsCache;
-(void)_serialQueue_scheduleLocationPurgeTimer_internal;
-(void)dealloc;
-(void).cxx_destruct;
@end
