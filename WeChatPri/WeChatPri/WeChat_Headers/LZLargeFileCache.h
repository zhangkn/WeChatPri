//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LZFileCacheRef.h"

@class NSMutableData;

@interface LZLargeFileCache : LZFileCacheRef
{
    long long _curFileOffset;
    NSMutableData *_readBufData;
}

@property(retain, nonatomic) NSMutableData *readBufData; // @synthesize readBufData=_readBufData;
@property(nonatomic) long long curFileOffset; // @synthesize curFileOffset=_curFileOffset;
- (void).cxx_destruct;
- (void)loadfilecfg;
- (void)savefileCfg;
- (void)fileCacheSuccess;
- (void)mergeRanges:(id)arg1;
- (void)refreshReadRanges;
- (_Bool)readFileInner:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (_Bool)openFileAndSetupMapInner:(id)arg1;
- (_Bool)loadCacheInfoInner;
- (struct _LzRange)calcDownloadRangeInner:(struct _LzRange)arg1;
- (id)mergeInfo;
- (void)releaseFile;
- (unsigned long long)fileRealSize;
- (_Bool)isFileCacheFinished;
- (_Bool)loadCacheInfo;
- (struct _LzRange)calcDownloadRange:(struct _LzRange)arg1;
- (_Bool)stopCaching:(_Bool)arg1;
- (long long)fileContinuousCachedLengthWithPosition:(long long)arg1;
- (long long)fileCachedLength:(long long *)arg1 lastOffset:(long long *)arg2;
- (long long)fileCachedLength:(long long *)arg1;
- (void)close:(_Bool)arg1;
- (_Bool)readFile:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (void)endRead:(id)arg1;
- (void)finishWirte:(id)arg1;
- (void)cleanFileCaching;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isFinish:(_Bool *)arg3;
- (_Bool)openFileAndSetupMap:(id)arg1;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
- (id)init;

@end

