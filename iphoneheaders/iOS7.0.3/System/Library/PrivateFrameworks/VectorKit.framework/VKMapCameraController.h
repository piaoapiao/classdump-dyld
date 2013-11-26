/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>
#import <VectorKit/VKTrackingCameraControllerDelegate.h>
#import <VectorKit/VKCameraControllerDelegate.h>

@class VKMapModel, VKAnimation, VKTrackingCameraController, VKAnnotationTrackingCameraController, GEOMapRegion;

@interface VKMapCameraController : VKCameraController <VKTrackingCameraControllerDelegate, VKCameraControllerDelegate> {

	VKMapModel* _mapModel;
	VKAnimation* _zoomAnimation;
	VKAnimation* _pitchAnimation;
	VKAnimation* _rotationAnimation;
	VKTrackingCameraController* _trackingCameraController;
	VKAnnotationTrackingCameraController* _annotationTrackingCameraController;
	double _minDistanceToGroundAlongForwardVector;
	double _maxDistanceToGroundAlongForwardVector;
	double _canonicalSkyHeight;
	VKEdgeInsets _edgeInsets;
	double _beganDoublePanPitch;
	BOOL _isPitchable;
	BOOL _isPitchIncreasing;
	int _annotationTrackingZoomStyle;
	BOOL _staysCenteredDuringPinch;
	double _lastRotation;
	BOOL _rotationLowZoomSnappingEnabled;
	BOOL _shouldRotationRubberband;
	BOOL _staysCenteredDuringRotation;
	CGPoint _panStartScreenPoint;
	CGPoint _panLastScreenPoint;
	double _tracePlaybackSpeedMultiplier;
	BOOL _shouldLimitTrackingCameraHeight;
	int _trackingCameraPanStyle;
	double _userZoomFocusStyleGroundspanMeters;
	double _userZoomFocusStyleMinGroundspanMeters;
	double _userZoomFocusStyleMaxGroundspanMeters;
	double _puckHorizontalOffset;
	double _finalYaw;
	double _finalPitch;
	VKAnimation* _regionAnimation;

}

@property (nonatomic,retain) VKMapModel * mapModel;                                                              //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) BOOL staysCenteredDuringPinch;                                                      //@synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch - In the implementation block
@property (assign,nonatomic) BOOL staysCenteredDuringRotation;                                                   //@synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation - In the implementation block
@property (assign,nonatomic) BOOL isPitchable;                                                                   //@synthesize isPitchable=_isPitchable - In the implementation block
@property (getter=isPitched,nonatomic,readonly) BOOL pitched; 
@property (getter=isFullyPitched,nonatomic,readonly) BOOL fullyPitched; 
@property (nonatomic,readonly) BOOL canEnter3DMode; 
@property (assign,nonatomic) BOOL allowDatelineWraparound; 
@property (assign,nonatomic) VKEdgeInsets edgeInsets;                                                            //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double canonicalSkyHeight;                                                          //@synthesize canonicalSkyHeight=_canonicalSkyHeight - In the implementation block
@property (assign,nonatomic) int annotationTrackingZoomStyle; 
@property (assign,nonatomic) BOOL shouldLimitTrackingCameraHeight;                                               //@synthesize shouldLimitTrackingCameraHeight=_shouldLimitTrackingCameraHeight - In the implementation block
@property (assign,nonatomic) int trackingCameraPanStyle;                                                         //@synthesize trackingCameraPanStyle=_trackingCameraPanStyle - In the implementation block
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) BOOL animatingToTrackAnnotation; 
@property (nonatomic,readonly) <VKTrackableAnnotation> * trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
@property (assign,nonatomic) double trackingZoomScale; 
@property (assign,nonatomic) double tracePlaybackSpeedMultiplier;                                                //@synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier - In the implementation block
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) VKPoint centerCoordinate; 
@property (assign,nonatomic) double userZoomFocusStyleGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMinGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMaxGroundspanMeters; 
-(void)dealloc;
-(id)init;
-(VKEdgeInsets)edgeInsets;
-(BOOL)isTracking;
-(BOOL)isAnimating;
-(id).cxx_construct;
-(int)tileSize;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(double)altitude;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 ;
-(BOOL)allowDatelineWraparound;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(void)setGesturing:(BOOL)arg1 ;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)setStaysCenteredDuringPinch:(BOOL)arg1 ;
-(BOOL)staysCenteredDuringPinch;
-(void)setStaysCenteredDuringRotation:(BOOL)arg1 ;
-(BOOL)staysCenteredDuringRotation;
-(void)setIsPitchable:(BOOL)arg1 ;
-(BOOL)isPitchable;
-(id)detailedDescription;
-(void)setCanonicalSkyHeight:(double)arg1 ;
-(int)annotationTrackingZoomStyle;
-(void)setAnnotationTrackingZoomStyle:(int)arg1 ;
-(id)trackingAnnotation;
-(BOOL)isTrackingHeading;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)canEnter3DMode;
-(double)presentationYaw;
-(id)mapRegion;
-(id)mapRegionOfInterest;
-(void)setCenterCoordinate:(VKPoint)arg1 animated:(BOOL)arg2 ;
-(VKPoint)centerCoordinate;
-(void)setCenterCoordinate:(SCD_Struct_VK53)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/ id)arg6 completion:(/*^block*/ id)arg7 ;
-(void)runAnimation:(id)arg1 ;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/ id)arg5 ;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/ id)arg5 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(void)edgeInsetsDidEndAnimating;
-(void)edgeInsetsWillBeginAnimating;
-(void)updateCameraContext:(id)arg1 ;
-(void)setShouldLimitTrackingCameraHeight:(BOOL)arg1 ;
-(void)setTrackingCameraPanStyle:(int)arg1 ;
-(int)trackingCameraPanStyle;
-(void)enter3DMode;
-(void)exit3DMode;
-(BOOL)isPitched;
-(BOOL)isFullyPitched;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(double)trackingZoomScale;
-(void)setTrackingZoomScale:(double)arg1 ;
-(BOOL)isAnimatingToTrackAnnotation;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(id)viewportInfo;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPanningAtPoint:(CGPoint)arg1 ;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopSnappingAnimations;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_VK54*)arg2 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(VKPoint)arg2 ;
-(void)setUserZoomFocusStyleGroundspanMeters:(double)arg1 ;
-(double)userZoomFocusStyleGroundspanMeters;
-(void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1 ;
-(double)userZoomFocusStyleMinGroundspanMeters;
-(void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1 ;
-(double)userZoomFocusStyleMaxGroundspanMeters;
-(void)setPuckHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3 ;
-(BOOL)updateCameraToPositionOrientationLimits;
-(float)currentMinimumNormalizedZoomLevel;
-(float)currentMaximumNormalizedZoomLevel;
-(void)stopRegionAnimation;
-(void)canvasFrameDidChange;
-(void)setMapModel:(id)arg1 ;
-(BOOL)clampZoomLevelIfNecessary;
-(void)stopCameraMotion;
-(void)startCameraMotionAnimated:(BOOL)arg1 pounceCompletionHandler:(/*^block*/ id)arg2 ;
-(float)currentNormalizedZoomLevel;
-(void)willAnimateInAnnotationMarkers:(id)arg1 ;
-(void)didAnimateInAnnotationMarkers:(id)arg1 ;
-(BOOL)isAtDefaultTrackingZoomScale;
-(CGPoint)_centerScreenPoint;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(void)cameraControllerWillStartRegionAnimation:(id)arg1 ;
-(void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)canvasDidLayout;
-(void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2 ;
-(void)updateCameraZBounds;
-(float)currentDisplayZoomLevel;
-(void)rotateToPitch:(double)arg1 withPoint:(const VKPoint*)arg2 preserveAltitude:(BOOL)arg3 animated:(BOOL)arg4 exaggerate:(BOOL)arg5 ;
-(void)zoomToLevel:(double)arg1 withPoint:(VKPoint)arg2 ;
-(BOOL)snapMapIfNecessary:(const VKPoint*)arg1 animated:(BOOL)arg2 ;
-(double)rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 ;
-(void)startPanning:(CGPoint)arg1 ;
-(void)stopPanning:(CGPoint)arg1 ;
-(void)zoom:(double)arg1 withPoint:(VKPoint)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)mapModel;
-(void)_snapPuckToHorizontalOffset;
-(float)minimumPitchForNormalizedZoomLevel:(float)arg1 ;
-(float)currentStyleZoomLevel;
-(void)rotateToYaw:(double)arg1 withPoint:(const VKPoint*)arg2 animated:(BOOL)arg3 ;
-(float)maxPitchForNormalizedZoomLevel:(float)arg1 ;
-(CGPoint)_scaledScreenPointForPoint:(CGPoint)arg1 ;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)startPinching:(CGPoint)arg1 ;
-(void)pinch:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinching:(CGPoint)arg1 ;
-(void)pan:(CGPoint)arg1 ;
-(void)startRotating:(CGPoint)arg1 ;
-(void)rotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)stopRotating:(CGPoint)arg1 ;
-(void)startPitching:(CGPoint)arg1 ;
-(void)pitch:(CGPoint)arg1 translation:(double)arg2 ;
-(void)stopPitching:(CGPoint)arg1 ;
-(float)idealPitchForNormalizedZoomLevel:(float)arg1 ;
-(int)maximumNormalizedZoomLevel;
-(int)minimumNormalizedZoomLevel;
-(SCD_Struct_VK53)_mercatorCenterCoordinateForMapRegion:(id)arg1 ;
-(void)_animateToPosition:(VKPoint)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(/*^block*/ id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)clampPitch:(double*)arg1 yaw:(double*)arg2 atTargetPositionZ:(double)arg3 ;
-(id)_mapRegionIgnoringFarAmount:(double)arg1 ;
-(void)trackingCameraController:(id)arg1 updatedStartAnimationTargetPosition:(VKPoint)arg2 orientation:(const SCD_Struct_VK42*)arg3 ;
-(double)canonicalSkyHeight;
-(double)tracePlaybackSpeedMultiplier;
-(BOOL)shouldLimitTrackingCameraHeight;
-(double)pitch;
-(double)yaw;
@end
