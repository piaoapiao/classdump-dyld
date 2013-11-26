/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,readonly) UIView * view; 
@required
-(void)setItem:(id)arg1;
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)setOrientation:(int)arg1 animate:(BOOL)arg2;
-(void)noteIgnoredChangeTypes:(unsigned)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(id)view;
-(int)orientation;
-(id)item;
-(void)setOrientation:(int)arg1;
-(id)player;
-(void)setPlayer:(id)arg1;
@end
