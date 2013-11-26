/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolylineOverlay.h>
#import <VectorKit/VKRouteMapMatchingDataSource.h>

@class VKOriginalRouteMapMatchingDataSource, VKAttributedRouteMapMatcher;

@interface VKAttributedRoute : VKPolylineOverlay <VKRouteMapMatchingDataSource> {

	VKOriginalRouteMapMatchingDataSource* _originalRouteMapMatchingDataSource;
	VKAttributedRouteMapMatcher* _driveMapMatcher;
	VKAttributedRouteMapMatcher* _walkMapMatcher;

}

@property (nonatomic,readonly) PolylineCoordinate start; 
@property (nonatomic,readonly) PolylineCoordinate end; 
+(id)attributedRouteWithRoute:(id)arg1 ;
+(void)sendCoreLocationRouteHintFromMatch:(id)arg1 location:(id)arg2 ;
-(void)dealloc;
-(PolylineCoordinate)start;
-(PolylineCoordinate)end;
-(void)forEachMapMatchingSection:(/*^block*/ id)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(PolylineCoordinate)makeRouteCoordinateFromPointIndex:(unsigned)arg1 offset:(float)arg2 ;
-(PolylineCoordinate)routeCoordinateAtDistanceAlongOriginalRoute:(double)arg1 from:(PolylineCoordinate)arg2 ;
-(id)_originalRouteMapMatchingDataSourceAroundPoint:(VKPoint)arg1 ;
-(id)_mapMatcherForTransportType:(int)arg1 ;
-(id)_findClosestCoordinateAlongRouteForLocation:(id)arg1 trackedLocation:(id)arg2 transportType:(int)arg3 useCLMatchedLocation:(BOOL)arg4 onDate:(id)arg5 ;
-(VKPoint)_pointOnOriginalRouteForRouteCoordinate:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Vec2Imp<float>*)arg2 aCoord:(const PolylineCoordinate*)arg3 bCoord:(const PolylineCoordinate*)arg4 pointOnSegment:(Vec2Imp<float>)arg5 bounds:(const SCD_Struct_VK47*)arg6 ;
-(double)_courseAt:(unsigned)arg1 ;
-(id)_routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(BOOL)arg3 stopBeforeNextManeuver:(BOOL)arg4 atDate:(id)arg5 ;
-(id)mapMatchToLocation:(id)arg1 onDate:(id)arg2 withTrackedLocation:(id)arg3 transportType:(int)arg4 ;
-(id)findClosestCoordinateAlongRouteForMatchedLocation:(id)arg1 onDate:(id)arg2 transportType:(int)arg3 ;
-(id)findClosestCoordinateAlongRouteForMatchedLocation:(id)arg1 transportType:(int)arg2 ;
-(id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopBeforeNextManeuver:(BOOL)arg3 ;
-(id)projectedTunnelMatchUpToDistance:(double)arg1 from:(id)arg2 overTime:(double)arg3 ;
-(SCD_Struct_VK61)locationAtDistance:(double)arg1 from:(id)arg2 ;
@end
