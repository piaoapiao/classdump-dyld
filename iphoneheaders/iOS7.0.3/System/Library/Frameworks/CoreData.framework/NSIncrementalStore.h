/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSPersistentStore.h>

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {

	NSDictionary* _storeMetadata;
	unsigned long long _lastIdentifier;
	void* _reserveda;
	void* _reservedb;

}
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(id)identifierForNewStoreAtURL:(id)arg1 ;
-(BOOL)load:(id*)arg1 ;
-(id)referenceObjectForObjectID:(id)arg1 ;
-(id)_rawMetadata__;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_preflightCrossCheck;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(void)dealloc;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadMetadata:(id*)arg1 ;
@end
