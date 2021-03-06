/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUIColorScheme, SKUIRoundedRectButton, UIButton, UILabel;

@interface SKUIAccountButtonsView : UIView {
    UILabel *_accountCreditsLabel;
    SKUIRoundedRectButton *_appleIDButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    SKUIRoundedRectButton *_giftingButton;
    int _interfaceOrientation;
    UIButton *_redeemButton;
    UIButton *_termsAndConditionsButton;
    SKUIRoundedRectButton *_usernameButton;
}

@property(copy) NSString * accountCredits;
@property(readonly) UIButton * appleIDButton;
@property(copy) SKUIColorScheme * colorScheme;
@property(readonly) UIButton * giftingButton;
@property(getter=isGiftingHidden) BOOL giftingHidden;
@property int interfaceOrientation;
@property(readonly) UIButton * redeemButton;
@property(readonly) UIButton * termsAndConditionsButton;
@property(getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;

- (void).cxx_destruct;
- (void)_layoutForIPad;
- (void)_layoutForIPhone;
- (id)_termsChevronImage;
- (id)accountCredits;
- (id)appleIDButton;
- (id)colorScheme;
- (id)giftingButton;
- (id)initWithClientContext:(id)arg1;
- (int)interfaceOrientation;
- (BOOL)isGiftingHidden;
- (BOOL)isTermsAndConditionsHidden;
- (void)layoutSubviews;
- (id)redeemButton;
- (void)setAccountCredits:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setGiftingHidden:(BOOL)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setTermsAndConditionsHidden:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)termsAndConditionsButton;

@end
