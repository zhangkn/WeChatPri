//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYWKWebView.h"

#import "WebSearchInterface-Protocol.h"
#import "YYWebViewInterface-Protocol.h"

@class NSMutableArray, NSString, NSURLRequest, UIScrollView;
@protocol YYWebViewDelegate;

@interface WKWebSearchView : YYWKWebView <YYWebViewInterface, WebSearchInterface>
{
    int _context;
    unsigned long long _bizType;
    NSString *_keyword;
    NSMutableArray *_keywordStack;
}

@property(nonatomic) int context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *keywordStack; // @synthesize keywordStack=_keywordStack;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)transferUrlRequest:(id)arg1;
- (void)loadRequest:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool scalesPageToFit;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;

@end

