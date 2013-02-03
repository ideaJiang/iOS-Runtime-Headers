/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSMutableOrderedSet, NSString, AXDialectMap;

@interface AXLanguageTag : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSMutableOrderedSet *_ambiguousDialects;
    NSString *_content;
    } _range;
    AXDialectMap *_unambiguousDialect;
    BOOL _wasPredicted;
}

@property(retain) NSMutableOrderedSet * ambiguousDialects;
@property NSString * content;
@property(readonly) NSString * contentSubstring;
@property(readonly) AXDialectMap * dialect;
@property(readonly) AXDialectMap * preferredAmbiguousDialect;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(retain) AXDialectMap * unambiguousDialect;
@property BOOL wasPredicted;

+ (id)tagWithDialect:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4;

- (void)addAmbiguousDialect:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (id)ambiguousDialects;
- (BOOL)canBeSpokenByDialect:(id)arg1;
- (BOOL)canBeSpokenByLanguage:(id)arg1;
- (id)content;
- (id)contentSubstring;
- (void)dealloc;
- (id)description;
- (id)dialect;
- (id)preferredAmbiguousDialect;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setAmbiguousDialects:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setUnambiguousDialect:(id)arg1;
- (void)setWasPredicted:(BOOL)arg1;
- (id)unambiguousDialect;
- (BOOL)wasPredicted;

@end