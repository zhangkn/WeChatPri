//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IRadarSearchExt <NSObject>

@optional
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationTimeout;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)OnVerifyUsr:(NSString *)arg1 ErrCode:(int)arg2;
- (void)OnAddFriend:(NSString *)arg1 ErrCode:(int)arg2;
- (void)OnRadarSearch:(NSArray *)arg1 ErrCode:(int)arg2;
@end

