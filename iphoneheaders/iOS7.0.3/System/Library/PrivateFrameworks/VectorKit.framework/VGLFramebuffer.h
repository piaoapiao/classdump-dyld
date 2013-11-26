/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class VGLContext, VGLScreenCanvas, VGLTexture;

@interface VGLFramebuffer : NSObject {

	VGLContext* _context;
	VGLScreenCanvas* _canvas;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	unsigned _depthbuffer;
	unsigned _multisampleFramebuffer;
	unsigned _multisampleRenderbuffer;
	unsigned _multisampleDepthbuffer;
	int _width;
	int _height;
	BOOL _createdWithDepth;
	BOOL _createdWithStencil;
	BOOL _isPresentable;
	BOOL _multisampleModeCurrent;
	BOOL _multisampleModeNext;
	VGLTexture* _texture;
	BOOL _usingMagicFramebuffer;
	int _magicFramebufferToken;

}

@property (nonatomic,readonly) BOOL isPresentable;                  //@synthesize isPresentable=_isPresentable - In the implementation block
@property (nonatomic,readonly) int width;                           //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                          //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL useMultisampling; 
@property (assign,nonatomic) VGLContext * context;                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) VGLScreenCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer;                //@synthesize framebuffer=_framebuffer - In the implementation block
-(void)dealloc;
-(id)context;
-(int)width;
-(void)setContext:(id)arg1 ;
-(int)height;
-(id)canvas;
-(void)setUseMultisampling:(BOOL)arg1 ;
-(void)deleteUnusedFramebuffers;
-(void)preloadMultisampleFramebuffer;
-(id)initWithContext:(id)arg1 canvas:(id)arg2 depth:(BOOL)arg3 stencil:(BOOL)arg4 multisampling:(BOOL)arg5 ;
-(void)setCanvas:(id)arg1 ;
-(void)deleteResolveFramebuffers;
-(BOOL)useMultisampling;
-(BOOL)isPresentable;
-(void)makeTarget;
-(BOOL)_createResolveFramebuffer;
-(BOOL)_createSecondaryFramebufferWithDepth:(BOOL)arg1 stencil:(BOOL)arg2 ;
-(id)initWithContext:(id)arg1 canvas:(id)arg2 ;
-(void)_deallocResolveFramebuffer;
-(void)_deallocSecondaryFramebuffer;
-(void)_deallocMultisampleFramebuffer;
-(BOOL)_createMultisampleFramebufferWithDepth:(BOOL)arg1 stencil:(BOOL)arg2 ;
-(void)_bindFramebuffers;
-(id)initWithContext:(id)arg1 texture:(id)arg2 depth:(BOOL)arg3 stencil:(BOOL)arg4 ;
-(void)deleteFramebuffers;
-(unsigned)framebuffer;
-(void)finalize;
@end
