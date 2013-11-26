/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/XMLHTTPRequest.h>

@protocol StockUpdaterDelegate;
@class NSArray, NSMutableDictionary, , QuoteParserData, NSError;

@interface StockUpdater : XMLHTTPRequest {

	NSArray* _requestStocks;
	BOOL _ignoreNewRequests;
	BOOL _isComprehensive;
	NSMutableDictionary* _cacheDurationForParts;
	<StockUpdaterDelegate>* _delegate;
	QuoteParserData* _quoteParserData;
	NSError* _lastError;
	/*^block*/ id _updateCompletionHandler;

}

@property (nonatomic,retain) NSArray * requestStocks;                               //@synthesize requestStocks=_requestStocks - In the implementation block
@property (assign,nonatomic) BOOL isComprehensive;                                  //@synthesize isComprehensive=_isComprehensive - In the implementation block
@property (assign,nonatomic,__weak) <StockUpdaterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                   //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                              //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
-(int)parseData:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cancel;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(id)requestStocks;
-(void)setRequestStocks:(id)arg1 ;
-(BOOL)hadError;
-(void)_updateWithPartsTag:(id)arg1 forStocks:(id)arg2 ;
-(void)setUpdateCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setLastError:(id)arg1 ;
-(id)_symbolTagsForRequestStocks;
-(void)_updateWithPostBody:(id)arg1 ;
-(void)setCacheTimeInterval:(double)arg1 forPartsTag:(id)arg2 ;
-(BOOL)isComprehensive;
-(void)setIsComprehensive:(BOOL)arg1 ;
-(id)lastError;
-(/*^block*/ id)updateCompletionHandler;
-(id)aggregateDictionaryDomain;
-(void).cxx_destruct;
@end
