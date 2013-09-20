/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASettingEntity;

@interface SASettingGetFloatResponse : SASettingGetNumberResponse {
}

@property(retain) SASettingEntity * setting;

+ (id)getFloatResponse;
+ (id)getFloatResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getFloatResponseWithSetting:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithSetting:(id)arg1;
- (void)setSetting:(id)arg1;
- (id)setting;

@end