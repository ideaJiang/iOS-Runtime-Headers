/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface AXGestureOverrideHandler : NSObject {
    id _handler;
    NSString *_identifier;
    unsigned int _type;
}

@property(copy) id handler;
@property(retain) NSString * identifier;
@property unsigned int type;

- (void)dealloc;
- (id)handler;
- (id)identifier;
- (void)setHandler:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end