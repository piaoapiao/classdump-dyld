/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKTrackableAnnotationPresentation <NSObject>
@property (assign,nonatomic) SCD_Struct_MK1 presentationCoordinate; 
@property (assign,getter=isTracking,nonatomic) BOOL tracking; 
@required
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1;
-(SCD_Struct_MK1*)presentationCoordinate;
-(void)setPresentationCoordinate:(SCD_Struct_MK1)arg1;
@end
