//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSStreamDelegate-Protocol.h"

@class NSData, NSInputStream, NSObject, NSString;
@protocol QBPostDataProtocol;

@protocol QBPostDataProtocol <NSStreamDelegate>
@property long long randomString;
@property _Bool dataReady;
@property(nonatomic) int dataPostType;
- (unsigned long long)dataSize;
- (_Bool)shouldUseStreamToSendData;
- (NSInputStream *)createInputStreamForPost;
- (NSData *)finalPostData;

@optional
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
- (void)fillDataFromAnotherInstance:(NSObject<QBPostDataProtocol> *)arg1;
- (NSString *)contentInfoString;
- (NSString *)contentBoundaryString;
- (NSData *)contentData;
@end
