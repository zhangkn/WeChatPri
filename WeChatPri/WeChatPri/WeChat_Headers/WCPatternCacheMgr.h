//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCPatternCacheMgr : NSObject
{
    NSMutableDictionary *m_cache;
    _Bool m_needWriteBack;
    _Bool m_needLoadData;
}

- (void).cxx_destruct;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (id)init;
- (void)trySaveData;
- (void)tryLoadData;
- (id)pathForData;

@end

