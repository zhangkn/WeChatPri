//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, MsgImgFullScreenViewController, MsgImgPreviewData, NSString;

@protocol MsgImgFullScreenViewControllerDelegate <NSObject>

@optional
- (void)onMsgImgPreviewDataRequired:(MsgImgPreviewData *)arg1;
- (void)onCurrentPageMsgReMoved:(CMessageWrap *)arg1;
- (void)onMsgImgWindowWillHideToMsg:(CMessageWrap *)arg1;
- (void)onSightViewDetail:(NSString *)arg1 vc:(MsgImgFullScreenViewController *)arg2;
- (void)onImgMsgLocate:(CMessageWrap *)arg1 vc:(MsgImgFullScreenViewController *)arg2;
- (void)onPlayAttachVideo:(CMessageWrap *)arg1 vc:(MsgImgFullScreenViewController *)arg2;
@end
