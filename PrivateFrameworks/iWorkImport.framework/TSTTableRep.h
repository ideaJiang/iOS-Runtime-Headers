/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSTCanvasReferenceController>, <TSTTableAnimationController>, <TSTTableChromeProvider>, <TSTTableRepDelegate>, CALayer, CAShapeLayer, NSMutableArray, NSSet, TSDCanvasView, TSDEditorController, TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol>, TSDTilingLayer, TSTAnimation, TSTCellRegion, TSTEditingState, TSTLayout, TSTMasterLayout, TSTSearchReference, TSTSelectionDragController, TSTTableCellTextEditingRep, TSTTableInfo, TSTTableModel, TSTTableReferences, TSTTableSelection, TSWPHyperlinkField, TSWPStorage, TSWPTextEditing;

@interface TSTTableRep : TSWPTextHostRep <UITextFieldDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    BOOL _settingSelection;
    <TSTTableAnimationController> *mAnimationController;
    NSMutableArray *mAnimationStack;
    <TSTCanvasReferenceController> *mCanvasReferenceController;
    } mCanvasVisibleRect;
    TSTSelectionDragController *mCellDragController;
    CAShapeLayer *mCellEditingMaskLayer;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    } mControlCellID;
    float mCurrentScreenScale;
    <TSTTableRepDelegate> *mDelegate;
    } mDirtyCellRange;
    BOOL mDragByHandleOnly;
    } mEditingHyperlinkCellID;
    CAShapeLayer *mFindSelectionHighlightLayer;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    TSWPHyperlinkField *mHyperlinkField;
    BOOL mHyperlinkModified;
    TSWPStorage *mHyperlinkParentStorage;
    BOOL mInspectingHyperlinkInEditingStorage;
    BOOL mIsAspectOperationInProgress;
    BOOL mIsZoomOperationInProgress;
    BOOL mIsZoomToEditOperationInProgress;
    TSDTilingLayer *mOverlayFrozenHeaderColumns;
    CALayer *mOverlayFrozenHeaderColumnsMask;
    TSDTilingLayer *mOverlayFrozenHeaderCorner;
    TSDTilingLayer *mOverlayFrozenHeaderRows;
    CALayer *mOverlayFrozenHeaderRowsMask;
    CALayer *mOverlayFrozenHeaderTableBodyMask;
    CALayer *mOverlayFrozenHeaderTableNameMask;
    TSDTilingLayer *mOverlayTableName;
    } mRatingsDragCellID;
    BOOL mRecursivelyDrawingInContext;
    TSTTableReferences *mReferences;
    } mSearchSelectionBounds;
    BOOL mSelectionUsesBezierPath;
    BOOL mSelectsCellOnInitialTap;
    TSTTableSelection *mSourceFillSelection;
    <TSTTableChromeProvider> *mTableChrome;
    TSWPTextEditing *mTableNameTextEditing;
    TSTTableSelection *mTargetFillSelection;
    BOOL mUsesWholeChromeResizer;
    NSSet *mVisibleFillKnobs;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *mVisitorKnobTracker;
    BOOL mWPEndedTableNameEditing;
    } mZoomToEditVisibleCellRange;
}

@property(retain) TSTSearchReference * activeSearchReference;
@property <TSTTableAnimationController> * animationController;
@property(readonly) <TSTCanvasReferenceController> * canvasReferenceController;
@property(readonly) TSDCanvasView * canvasView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } canvasVisibleRect;
@property TSTSelectionDragController * cellDragController;
@property(readonly) TSTAnimation * currentAnimation;
@property(readonly) <TSTTableRepDelegate> * delegate;
@property(readonly) TSTEditingState * editingState;
@property(readonly) TSDEditorController * editorController;
@property(readonly) CALayer * layerForRep;
@property(readonly) TSTMasterLayout * masterLayout;
@property struct { unsigned short x1; unsigned char x2; unsigned char x3; } ratingsDragCellID;
@property(readonly) TSTCellRegion * selectionRegion;
@property(readonly) <TSTTableChromeProvider> * tableChrome;
@property(readonly) TSTTableInfo * tableInfo;
@property(readonly) TSTLayout * tableLayout;
@property(readonly) TSTTableModel * tableModel;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformFromCanvas;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToCanvas;
@property(readonly) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> * visitorKnobTracker;

+ (Class)tableRepDelegateClass;

- (id).cxx_construct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (id)animationController;
- (void)beginDragInsertFromPalette;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForCellSelection:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)canDrawInBackgroundDuringScroll;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawTilingLayerInBackground:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasBoundsForCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)canvasReferenceController;
- (id)canvasView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasVisibleRect;
- (id)cellDragController;
- (void)contentsRectForCellRangeAcrossSpaces:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 contentsCenterInfo:(struct { BOOL x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2 canvasFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)currentAnimation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deviceBoundsForCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (void)dirtyCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)editingState;
- (id)editorController;
- (id)editorSelection;
- (void)endDragInsertFromPalette;
- (BOOL)handlesEditMenu;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateAnnotationColor;
- (void)invalidateCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 fittingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 invalidateSize:(BOOL)arg3;
- (void)invalidateCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)invalidateComments;
- (void)invalidateEditingCell;
- (void)invalidateFrozenHeaders;
- (void)invalidateSelection;
- (void)invalidateTableName;
- (BOOL)isDraggable;
- (BOOL)isFullyVisibleWithBorder:(int)arg1;
- (id)itemsToAddToEditMenu;
- (id)layerForRep;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (id)masterLayout;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (void)orientationDidChange:(id)arg1;
- (id)overlayLayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)p_frozenHeaderOverlayLayers;
- (void)p_invalidateCellCommentBadges;
- (id)p_tableNameOverlayLayers;
- (id)p_textImageForPath:(struct CGPath { }*)arg1 shouldPulsate:(BOOL)arg2;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })ratingsDragCellID;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (id)repForDragging;
- (void)screenScaleDidChange;
- (id)selectionRegion;
- (void)setAnimationController:(id)arg1;
- (void)setCellDragController:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRatingsDragCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
- (BOOL)shouldCommitPendingTextEdit;
- (BOOL)shouldLayoutTilingLayer:(id)arg1;
- (BOOL)shouldRestartTextEditing;
- (id)tableChrome;
- (id)tableInfo;
- (id)tableLayout;
- (id)tableModel;
- (int)tilingMode;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromCanvas;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToCanvas;
- (void)updateChildrenFromLayout;
- (void)updateDynamicModeForEditingSpillText;
- (void)updateFromLayout;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderCorner;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderTableBodyMask;
- (void)validateTableName;
- (void)validateVisibleRect;
- (void)viewScaleDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsForTilingLayer:(id)arg1;
- (id)visitorKnobTracker;
- (void)willBeRemoved;

@end
