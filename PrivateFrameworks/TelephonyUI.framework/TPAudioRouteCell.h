/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UILabel;

@interface TPAudioRouteCell : UITableViewCell {
    UILabel *_audioRouteNameLabel;
    BOOL _isActiveRoute;
}

@property UILabel * audioRouteNameLabel;
@property BOOL isActiveRoute;

- (id)audioRouteNameLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isActiveRoute;
- (void)layoutSubviews;
- (void)setAudioRouteNameLabel:(id)arg1;
- (void)setIsActiveRoute:(BOOL)arg1;
- (void)setIsMuteButtonWithImage:(id)arg1;

@end
