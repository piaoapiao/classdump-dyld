/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol XPCNSServiceListenerDelegate <NSObject>
@optional
-(BOOL)XPCNSServiceListener:(id)arg1 shouldReceiveNewConnection:(id)arg2;

@required
-(void)XPCNSServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
@end
