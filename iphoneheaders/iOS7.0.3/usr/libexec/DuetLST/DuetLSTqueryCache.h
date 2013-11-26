/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <DuetLST/DuetLST-Structs.h>
@class NSMutableArray, DuetLST;

@interface DuetLSTqueryCache : NSObject {

	NSMutableArray* cache;
	unsigned long long cacheHits;
	unsigned long long cacheMisses;
	DuetLST* lst;

}

@property (nonatomic,retain) DuetLST * lst; 
@property (nonatomic,retain) NSMutableArray * cache; 
@property (assign,nonatomic) unsigned long long cacheHits; 
@property (assign,nonatomic) unsigned long long cacheMisses; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(id)queryCacheForParams:(SCD_Struct_Du0*)arg1 ;
-(void)updateCacheForParams:(SCD_Struct_Du0*)arg1 withResults:(id)arg2 ;
-(void)dumpAll:(char*)arg1 ;
-(void)dumpLight:(char*)arg1 ;
-(unsigned long long)cacheHits;
-(void)setCacheHits:(unsigned long long)arg1 ;
-(unsigned long long)cacheMisses;
-(void)setCacheMisses:(unsigned long long)arg1 ;
-(id)cache;
-(void)setCache:(id)arg1 ;
-(void)clearCache;
-(void).cxx_destruct;
@end
