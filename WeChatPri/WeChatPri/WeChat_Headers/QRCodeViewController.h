//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FoldableTipViewDelegate-Protocol.h"
#import "IMMQRCodeExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, FoldableTipView, MMAnimationTipView, NSString, QRCodeCardView;

@interface QRCodeViewController : MMUIViewController <FoldableTipViewDelegate, IMMQRCodeExt, WCActionSheetDelegate>
{
    struct stWeixinEntryRow *m_aryEntryRow;
    unsigned int m_arrEntryRowSize;
    unsigned int m_curOperateType;
    CContact *m_contact;
    MMAnimationTipView *m_tipView;
    QRCodeCardView *m_qrcodeCard;
    _Bool m_bIsNotAllowAddMeByQRCode;
    _Bool _isOpenedByScanQR;
    FoldableTipView *m_abandonTipView;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)Operate:(id)arg1;
- (void)scanQRCode;
- (void)shareQRCode:(id)arg1;
- (void)shareChatRoomQRCode;
- (void)initRow;
- (void)onFoldableTipViewClickConfirm:(id)arg1;
- (void)onFoldableTipViewClickCancel:(id)arg1;
- (void)onRevokeQRCode;
- (void)revokeQRCode;
- (void)saveToAlbum;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)onShowAbandonTip:(id)arg1 TipID:(id)arg2 Wording:(id)arg3;
- (void)setHasShowTip:(id)arg1;
- (void)getNextQRCode;
- (void)willAppear;
- (void)adjustSubviewRects;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
