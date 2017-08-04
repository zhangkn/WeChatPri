//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "WCActionSheetDelegate-Protocol.h"

@class NSString;
@protocol WCPayFacingQRCodeImageViewDelegate;

@interface WCPayFacingQRCodeImageView : UIImageView <WCActionSheetDelegate>
{
    id <WCPayFacingQRCodeImageViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCPayFacingQRCodeImageViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)LongPressEvents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
