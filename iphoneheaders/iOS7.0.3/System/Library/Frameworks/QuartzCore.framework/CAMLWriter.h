/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (assign) id delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)beginPropertyElement:(id)arg1 ;
-(void)endElement;
-(void)beginElement:(unsigned)arg1 ;
-(void)setElementContent:(id)arg1 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(id)baseURL;
-(void)setBaseURL:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
@end
