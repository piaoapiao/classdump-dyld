/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject {

	PKPass* _pass;
	UIImage* _icon;

}

@property (nonatomic,retain) PKPass * pass;               //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) UIImage * icon;              //@synthesize icon=_icon - In the implementation block
+(id)fallbackFilenamePrefix;
+(id)UTITypes;
+(BOOL)isPreviewable;
-(void)dealloc;
-(id)title;
-(void)setIcon:(id)arg1 ;
-(id)subtitle;
-(BOOL)shouldShowViewer;
-(BOOL)shouldBeQuickLooked;
-(id)generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)generateThumbnail;
-(BOOL)shouldShowDisclosure;
-(id)passView;
-(int)mediaType;
-(id)pass;
-(void)setPass:(id)arg1 ;
-(id)icon;
@end
