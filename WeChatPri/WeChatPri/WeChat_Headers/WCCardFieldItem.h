//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, WCGiftCardInfo;

@interface WCCardFieldItem : MMObject <PBCoding>
{
    unsigned int showflag;
    NSString *title;
    NSString *subTitle;
    NSString *auxTitle;
    NSString *url;
    NSString *primaryColor;
    NSString *secondaryColor;
    NSString *_iconUrl;
    WCGiftCardInfo *_giftCardInfo;
    NSString *_appBrandUserName;
    NSString *_appBrandPass;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *appBrandPass; // @synthesize appBrandPass=_appBrandPass;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
@property(retain, nonatomic) WCGiftCardInfo *giftCardInfo; // @synthesize giftCardInfo=_giftCardInfo;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor;
@property(retain, nonatomic) NSString *primaryColor; // @synthesize primaryColor;
@property(nonatomic) unsigned int showflag; // @synthesize showflag;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *auxTitle; // @synthesize auxTitle;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)genDic;
- (void)genSelfByDic:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
