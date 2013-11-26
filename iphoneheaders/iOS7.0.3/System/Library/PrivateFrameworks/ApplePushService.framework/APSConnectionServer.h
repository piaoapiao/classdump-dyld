/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol APSConnectionServerDelegate, OS_xpc_object;
@class , NSString, NSData, NSSet, NSObject, NSOperationQueue;

@interface APSConnectionServer : NSObject {

	<APSConnectionServerDelegate>* _delegate;
	NSString* _environmentName;
	NSData* _publicToken;
	unsigned _connectionMachPort;
	NSString* _connectionPortName;
	NSSet* _enabledTopics;
	NSSet* _ignoredTopics;
	NSSet* _opportunisticTopics;
	unsigned _messageSize;
	BOOL _enableCriticalReliability;
	BOOL _usesAppLaunchStats;
	BOOL _enableStatusChangeNotifications;
	int _clientPID;
	NSObject<OS_xpc_object>* _connection;
	NSOperationQueue* _queue;

}

@property (assign,nonatomic) <APSConnectionServerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * enabledTopics;                               //@synthesize enabledTopics=_enabledTopics - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredTopics;                               //@synthesize ignoredTopics=_ignoredTopics - In the implementation block
@property (nonatomic,readonly) NSSet * opportunisticTopics;                         //@synthesize opportunisticTopics=_opportunisticTopics - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL hasIdentity; 
@property (nonatomic,@dynamic,readonly) BOOL isConnected; 
@property (assign,nonatomic) NSObject<OS_xpc_object> * connection;                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * environmentName;                          //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,retain) NSData * publicToken;                                  //@synthesize publicToken=_publicToken - In the implementation block
@property (assign,nonatomic) unsigned messageSize;                                  //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL enableCriticalReliability;                        //@synthesize enableCriticalReliability=_enableCriticalReliability - In the implementation block
@property (assign,nonatomic) BOOL enableStatusChangeNotifications;                  //@synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications - In the implementation block
@property (assign,nonatomic) BOOL usesAppLaunchStats;                               //@synthesize usesAppLaunchStats=_usesAppLaunchStats - In the implementation block
+(id)serverEnvironmentNames;
+(id)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2 ;
-(void)setPublicToken:(id)arg1 ;
-(id)enabledTopics;
-(id)opportunisticTopics;
-(void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned)arg2 ;
-(void)handleReceivedPublicToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(id)ignoredTopics;
-(id)connectionPortName;
-(void)handleConnectionStatusChanged:(BOOL)arg1 ;
-(void)handleReceivedMessage:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 environmentName:(id)arg2 connectionPortName:(id)arg3 connection:(id)arg4 ;
-(void)setEnableStatusChangeNotifications:(BOOL)arg1 ;
-(void)_initiateConnectionIfNecessary;
-(void)_lookUpMachPort;
-(void)_suspendQueue;
-(id)processNameWithLabels:(BOOL)arg1 ;
-(void)_resumeQueue;
-(void)_enqueueXPCMessage:(/*^block*/ id)arg1 wakingClient:(BOOL)arg2 highPriority:(BOOL)arg3 ;
-(void)saveAndUpdateDelegate;
-(void)_savePersistentConnectionTopics;
-(void)connectionHandshakeDidComplete;
-(void)connectionInvalidated;
-(void)handleSendOutgoingMessage:(id)arg1 ;
-(void)handleCancelOutgoingMessageWithID:(unsigned)arg1 ;
-(void)handleFakeMessage:(id)arg1 ;
-(void)handleRequestPublicTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)handleInvalidatePublicTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)handleAckIncomingMessageWithGuid:(id)arg1 ;
-(BOOL)enableStatusChangeNotifications;
-(BOOL)isConnected;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)debugDescription;
-(id)delegate;
-(id)processName;
-(void)close;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)setUsesAppLaunchStats:(BOOL)arg1 ;
-(BOOL)usesAppLaunchStats;
-(BOOL)hasIdentity;
-(id)publicToken;
-(BOOL)enableCriticalReliability;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 ;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(unsigned)messageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(id)environmentName;
@end
