//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KFContact, NSMutableDictionary, NSString, WCDataBase, WCDataBaseTable;
@protocol KFContactCacherDelegate;

@interface KFContactCacher : NSObject
{
    WCDataBaseTable *_table;
    NSString *_brandUsrName;
    NSMutableDictionary *_dictOpenId2KFContact;
    WCDataBase *_db;
    KFContact *_bindKF;
    id <KFContactCacherDelegate> delegate;
}

@property(nonatomic) __weak id <KFContactCacherDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isNeedUpdateKFContactInfo:(id)arg1;
- (void)setHeadImgUpdateFlag:(id)arg1 oldContact:(id)arg2;
- (id)tableName;
- (id)pathForBindKFContact;
- (void)updateBindKFContact:(id)arg1;
- (id)getBindKFContact;
- (void)modifyHeadImgUpdateFlag:(id)arg1 isNeedUpdate:(_Bool)arg2;
- (id)getKFContactList:(id)arg1;
- (id)getKFContact:(id)arg1;
- (void)deleteAllKFContacts;
- (void)deleteKFContact:(id)arg1;
- (void)addOrUpdateKFContactList:(id)arg1;
- (void)addOrUpdateKFContact:(id)arg1;
- (id)initWithBrandUsrName:(id)arg1 withDB:(id)arg2;

@end

