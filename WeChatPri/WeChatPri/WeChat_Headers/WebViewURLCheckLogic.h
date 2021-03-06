//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSArray;
@protocol WebViewURLCheckLogicDelegate;

@interface WebViewURLCheckLogic : MMObject <PBMessageObserverDelegate>
{
    id <WebViewURLCheckLogicDelegate> _delegate;
    NSArray *_needCheckURLHostList;
}

@property(retain, nonatomic) NSArray *needCheckURLHostList; // @synthesize needCheckURLHostList=_needCheckURLHostList;
@property(nonatomic) id <WebViewURLCheckLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isUrlNeedCheck:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryAsyncCheckUrl:(id)arg1;
- (void)dealloc;
- (id)init;

@end

