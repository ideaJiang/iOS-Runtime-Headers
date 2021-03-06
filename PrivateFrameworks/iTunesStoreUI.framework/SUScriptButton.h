/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptCanvasContext, UIImage, WebScriptObject;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {
    id _action;
    SUScriptCanvasContext *_canvas;
    BOOL _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

@property(retain) id action;
@property(retain) SUScriptCanvasContext * canvas;
@property BOOL enabled;
@property(retain) UIImage * image;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageEdgeInsets;
@property BOOL loading;
@property BOOL shouldPerformDefaultAction;
@property(readonly) id showingConfirmation;
@property(retain) NSString * style;
@property(retain) NSString * subtitle;
@property int tag;
@property(retain) WebScriptObject * target;
@property(retain) NSString * title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_action;
- (id)_boxedNativeButton;
- (id)_className;
- (id)_initSUScriptButton;
- (id)_nativeButton;
- (id)_systemItemString;
- (id)action;
- (id)attributeKeys;
- (id)buttonItem;
- (id)canvas;
- (void)dealloc;
- (BOOL)enabled;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageEdgeInsets;
- (id)init;
- (id)initWithSystemItemString:(id)arg1;
- (BOOL)loading;
- (id)nativeButtonOfType:(int)arg1;
- (void)performActionWithArguments:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setAction:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)setImageWithURLString:(id)arg1 scale:(id)arg2;
- (void)setLoading:(BOOL)arg1;
- (void)setNativeButton:(id)arg1;
- (void)setShouldPerformDefaultAction:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTag:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (id)showingConfirmation;
- (id)style;
- (id)subtitle;
- (int)tag;
- (id)target;
- (id)title;

@end
