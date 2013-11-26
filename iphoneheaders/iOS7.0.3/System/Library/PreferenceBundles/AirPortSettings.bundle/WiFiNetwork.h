/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSArray;

@interface WiFiNetwork : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _dict;
	NSMutableDictionary* _customizedSettings;
	BOOL _available;
	BOOL _dirty;
	BOOL _needsFavoritesCheck;
	NSDictionary* _lastProxyDict;
	NSArray* _certificateChain;
	NSDictionary* _eapolProfile;
	NSArray* _requestedInformation;
	id _tlsIdentity;
	id _wapiRoot;
	id _wapiIdentity;
	BOOL _usernameIsManaged;
	BOOL _hidden;
	BOOL _adhoc;
	WiFiNetworkRef _HS20Network;
	BOOL _isHS20;
	BOOL _needsHS20Query;

}
-(id)password;
-(void)setPassword:(id)arg1 ;
-(int)proxyType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isSecure;
-(id)strength;
-(id)scanResultDictionary;
-(int)configType;
-(void)setConfigType:(int)arg1 userEntered:(BOOL)arg2 ;
-(void)setIP:(id)arg1 userEntered:(BOOL)arg2 ;
-(id)ip;
-(void)setSubnetMask:(id)arg1 userEntered:(BOOL)arg2 ;
-(id)subnetMask;
-(void)setRouter:(id)arg1 userEntered:(BOOL)arg2 ;
-(id)router;
-(void)setDNSServers:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)removeCustomDNSServers;
-(id)DNSServers;
-(void)setSearchDomains:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)removeCustomSearchDomains;
-(id)searchDomains;
-(void)setDHCPClientID:(id)arg1 userEntered:(BOOL)arg2 ;
-(id)DHCPClientID;
-(void)setProxy:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyPort:(id)arg1 userEntered:(BOOL)arg2 ;
-(BOOL)proxyAuthenticated;
-(void)setProxyAuthenticated:(BOOL)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyUsername:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyPassword:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyType:(int)arg1 userEntered:(BOOL)arg2 ;
-(id)pacFile;
-(void)setPacFile:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)removeCustomIP;
-(void)removeCustomRouter;
-(void)removeCustomSubnet;
-(void)setIPv6Enabled:(BOOL)arg1 userEntered:(BOOL)arg2 ;
-(id)IPv6Enabled;
-(BOOL)isAdhoc;
-(id)BSSID;
-(BOOL)isEnterprise;
-(int)compareAscending:(id)arg1 ;
-(int)compareUnconfigAscending:(id)arg1 ;
-(BOOL)canAttemptJoin;
-(void)setCertificateChain:(id)arg1 ;
-(void)resignActiveNetwork;
-(id)certificateChain;
-(id)eapolProfile;
-(id)eapTypes;
-(BOOL)requiresTLSIdentityOnly;
-(id)TLSIdentity;
-(void)setEapolProfile:(id)arg1 ;
-(int)securityMode;
-(BOOL)isHostspot20;
-(BOOL)isHostspot20Provisioned;
-(WiFiNetworkRef)HS20Data;
-(id)WAPIRoot;
-(id)WAPIIdentityPEMBlob;
-(void)setTLSIdentity:(id)arg1 ;
-(void)setWAPIRoot:(id)arg1 ;
-(void)setWAPIIdentityPEMBlob:(id)arg1 ;
-(void)setRequestedInformation:(id)arg1 ;
-(void)resetCustomSettings;
-(int)proxyTypeForDict:(id)arg1 ;
-(void)loadIPv4Dict:(id)arg1 ;
-(void)loadIPv6Dict:(id)arg1 ;
-(void)loadProxyDict:(id)arg1 ;
-(void)loadDNSDict:(id)arg1 ;
-(BOOL)requiresSavedPassword;
-(void)setScanResultDictionary:(id)arg1 ;
-(BOOL)needsHotSpot20Query;
-(void)setHS20Data:(WiFiNetworkRef)arg1 ;
-(id)HS20Badge;
-(void)setSecurityMode:(int)arg1 ;
-(void)setUsername:(id)arg1 isManaged:(BOOL)arg2 ;
-(id)initWithWirelessDict:(id)arg1 ;
-(void)setIPv4Dict:(id)arg1 ;
-(void)setProxyDict:(id)arg1 ;
-(void)setDNSDict:(id)arg1 ;
-(id)customSettings;
-(id)_initWithDictionary:(id)arg1 available:(BOOL)arg2 ;
-(void)_setCustomValue:(id)arg1 forKey:(CFStringRef)arg2 protocol:(CFStringRef)arg3 ;
-(void)setBSSID:(id)arg1 ;
-(BOOL)profileContainsEAPSIM:(id)arg1 ;
-(BOOL)profileContainsEAPAKA:(id)arg1 ;
-(BOOL)profileContainsCarrierEAPType:(id)arg1 ;
-(BOOL)requiresPasswordOnly;
-(BOOL)requiresUsernameAndPassword;
-(void)setNeedsFavoritesCheck:(BOOL)arg1 ;
-(BOOL)needsFavoritesCheck;
-(void)setIsFavorite:(BOOL)arg1 ;
-(id)lastProxyDictionary;
-(BOOL)isWAPIEnterprise;
-(BOOL)usernameIsManaged;
-(id)requestedInformation;
-(int)compareDescending:(id)arg1 ;
-(BOOL)isPersonalHotspot;
-(BOOL)dirty;
-(BOOL)available;
-(void)setAvailable:(BOOL)arg1 ;
-(id)proxy;
-(id)proxyPort;
-(id)proxyUsername;
-(id)proxyPassword;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(BOOL)isFavorite;
-(int)age;
-(BOOL)hidden;
-(int)profile;
-(void)setProfile:(int)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
@end
