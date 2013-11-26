/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct {
	unsigned timestamp : 1;
	unsigned isVideo : 1;
} SCD_Struct_AW0;

typedef struct {
	unsigned timestamp : 1;
	unsigned cancelCode : 1;
	unsigned errorCode : 1;
	unsigned isVideo : 1;
	unsigned sendDuration : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned timestamp : 1;
	unsigned connectDuration : 1;
	unsigned connectionType : 1;
	unsigned currentNatType : 1;
	unsigned isVideo : 1;
	unsigned localNetworkConnection : 1;
	unsigned relayConnectDuration : 1;
	unsigned remoteNatType : 1;
	unsigned remoteNetworkConnection : 1;
	unsigned usesRelay : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned timestamp : 1;
	unsigned backCameraCaptureDuration : 1;
	unsigned callDuration : 1;
	unsigned conferenceMiscError : 1;
	unsigned connectDuration : 1;
	unsigned connectionType : 1;
	unsigned currentNatType : 1;
	unsigned dataRate : 1;
	unsigned diagnosticPingAvg : 1;
	unsigned diagnosticPingMax : 1;
	unsigned diagnosticPingMin : 1;
	unsigned diagnosticPingPacketLoss : 1;
	unsigned endedReason : 1;
	unsigned frontCameraCaptureDuration : 1;
	unsigned gameKitError : 1;
	unsigned genericError : 1;
	unsigned gksError : 1;
	unsigned gksReturnCode : 1;
	unsigned invitationServiceError : 1;
	unsigned isAudioInterrupted : 1;
	unsigned isCallUpgrade : 1;
	unsigned isInitiator : 1;
	unsigned isNetworkActive : 1;
	unsigned isNetworkEnabled : 1;
	unsigned isNetworkReachable : 1;
	unsigned isVideo : 1;
	unsigned isVideoInterrupted : 1;
	unsigned linkQuality : 1;
	unsigned localNetworkConnection : 1;
	unsigned messageDeliveryError : 1;
	unsigned networkCheckResult : 1;
	unsigned registrationError : 1;
	unsigned relayConnectDuration : 1;
	unsigned relayError : 1;
	unsigned remoteNatType : 1;
	unsigned remoteNetworkConnection : 1;
	unsigned usesRelay : 1;
	unsigned viceroyError : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned interruptionDuration : 1;
	unsigned isAudioResumed : 1;
	unsigned isVideo : 1;
	unsigned isVideoResumed : 1;
	unsigned linkQuality : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
	unsigned isVideo : 1;
	unsigned sendDuration : 1;
} SCD_Struct_AW5;

typedef struct {
	unsigned timestamp : 1;
	unsigned attachmentSize : 1;
	unsigned connectionType : 1;
	unsigned downloadDuration : 1;
	unsigned fzError : 1;
	unsigned genericError : 1;
	unsigned linkQuality : 1;
	unsigned messageError : 1;
	unsigned tokenError : 1;
} SCD_Struct_AW6;

typedef struct {
	unsigned timestamp : 1;
	unsigned durationBeforeDowngrade : 1;
	unsigned isManualDowngrade : 1;
} SCD_Struct_AW7;

typedef struct {
	unsigned timestamp : 1;
	unsigned fzError : 1;
	unsigned hasAttachments : 1;
	unsigned isFromEmail : 1;
	unsigned isFromPhoneNumber : 1;
	unsigned isGroupMessage : 1;
	unsigned isTypingIndicator : 1;
	unsigned messageError : 1;
} SCD_Struct_AW8;

typedef struct {
	unsigned timestamp : 1;
	unsigned ctError : 1;
	unsigned fzError : 1;
	unsigned hasAttachments : 1;
	unsigned isFromEmail : 1;
	unsigned isFromPhoneNumber : 1;
	unsigned isGroupMessage : 1;
} SCD_Struct_AW9;
