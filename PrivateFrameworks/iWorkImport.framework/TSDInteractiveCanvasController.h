/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <TSDAnnotationHosting>, <TSDAnnotationPopoverController>, <TSDCanvasLayerHosting>, <TSDEditor>, <TSDInteractiveCanvasControllerDelegate>, <TSKDocumentRootProvider>, CALayer, NSArray, NSFormatter, NSMutableArray, NSMutableSet, NSObject<TSDImageHUDController>, NSObject<TSDRulerController>, NSString, TSDBackgroundLayoutAndRenderState, TSDCanvas, TSDCanvasAnimation, TSDCanvasLayer, TSDCanvasView, TSDContainerRep, TSDDynamicOperationController, TSDEditorController, TSDGuideController, TSDLayoutController, TSDTileStorage, TSDTrackerManipulatorCoordinator, TSDUserDefinedGuideController, TSKAccessController, TSKChangeNotifier, TSKCommandController, TSKDocumentRoot, TSPObjectContext;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation> {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGPoint { 
        double x; 
        double y; 
    boolmAnimatingScroll;
    boolmAnimatingViewScale;
    boolmCreateRepsForOffscreenLayouts;
    boolmCurrentlyScrolling;
    boolmCurrentlyWaitingOnThreadedLayoutAndRender;
    boolmDynamicallyZooming;
    boolmHadLayerHost;
    boolmHasBeenTornDown;
    boolmInDynamicOperation;
    boolmInReadMode;
    boolmInVersionBrowsingMode;
    boolmInspectorModeEnabled;
    boolmLayerHostHasBeenTornDown;
    boolmLayoutAndRenderOnThreadDuringScroll;
    boolmOverlayLayerSuppressed;
    boolmPreventSettingNilEditorOnTextResponder;
    boolmResizeCanvasOnLayout;
    boolmShouldAnimateAutoscroll;
    boolmShouldAutoscrollToSelectionAfterGestures;
    boolmShouldAutoscrollToSelectionAfterLayout;
    boolmShouldCenterSelectionWhenAutoscrolling;
    boolmShouldClipThemeContentToCanvas;
    boolmShouldSuppressRendering;
    boolmShowGrayOverlay;
    boolmShowInvisibleObjects;
    boolmShowUserDefinedGuides;
    boolmSupportsBackgroundTileRendering;
    boolmSuppressAutozoomToSelectionAfterLayout;
    boolmSuppressedAutozoom;
    boolmSuppressingKeyboard;
    boolmSuspendedLowPriorityThreadDispatcher;
    boolmTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
    boolmTextGesturesInFlight;
    boolmUsesAlternateDrawableSelectionHighlight;
    <TSDAnnotationPopoverController> *mAnnotationPopoverController;
    TSDBackgroundLayoutAndRenderState *mBackgroundLayoutAndRenderState;
    NSMutableArray *mBackgroundRenderingObjects;
    TSDCanvas *mCanvas;
    struct __CFDictionary { } *mContainerLayersByRep;
    TSDCanvasAnimation *mCurrentAnimation;
    NSMutableArray *mDecorators;
    <TSDInteractiveCanvasControllerDelegate> *mDelegate;
    int mDisableThreadedLayoutAndRender;
    <TSDAnnotationHosting> *mDisplayedAnnotation;
    TSDDynamicOperationController *mDynOpController;
    int mDynamicOperationCounter;
    double mDynamicViewScale;
    TSDEditorController *mEditorController;
    TSDGuideController *mGuideController;
    NSMutableArray *mHiddenTopLevelLayers;
    NSObject<TSDImageHUDController> *mIAHUDController;
    long long mIAHUDLock;
    NSObject<TSDImageHUDController> *mImageHUDController;
    long long mImageHUDLock;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    id mInspectorSingleTapBlock;
    } mLastTapPoint;
    <TSDCanvasLayerHosting> *mLayerHost;
    NSArray *mLayersWithZoomFadeAnimation;
    NSMutableSet *mNotificationsToPostWithValidLayouts;
    CALayer *mOverlayLayer;
    CALayer *mPopoutLayer;
    CALayer *mRepContainerLayer;
    struct __CFDictionary { } *mRepLayersByRep;
    struct __CFDictionary { } *mRepsByContainerLayer;
    struct __CFDictionary { } *mRepsByRepLayer;
    NSObject<TSDRulerController> *mRulerController;
    <TSDEditor> *mSelectionChangeNotificationDeferredEditor;
    struct CGColor { } *mSelectionHighlightColor;
    TSDTrackerManipulatorCoordinator *mTMCoordinator;
    double mTargetPointSize;
    TSDTileStorage *mTileStorage;
    NSFormatter *mUnitFormatter;
    } mUnobscuredScrollViewFrame;
    TSDUserDefinedGuideController *mUserDefinedGuideController;
    } mVisibleBoundsRectForTiling;
    } mVisibleUnscaledRect;
    } mZoomCenterInBounds;
}

@property(readonly) TSKAccessController * accessController;
@property(readonly) NSArray * additionalLayersUnderRepLayers;
@property(readonly) bool animatingViewScale;
@property(readonly) struct CGSize { double x1; double x2; } annotationPopoverSize;
@property(readonly) unsigned int annotationPreferredRectEdge;
@property(readonly) TSDCanvas * canvas;
@property(readonly) TSDCanvasLayer * canvasLayer;
@property(readonly) id canvasReferenceController;
@property(readonly) struct CGSize { double x1; double x2; } canvasScrollingOutset;
@property(readonly) TSDCanvasView * canvasView;
@property(readonly) TSKChangeNotifier * changeNotifier;
@property(readonly) TSKCommandController * commandController;
@property bool createRepsForOffscreenLayouts;
@property(readonly) double currentViewScale;
@property(readonly) bool currentlyScrolling;
@property(readonly) bool currentlyWaitingOnThreadedLayoutAndRender;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct CGSize { double x1; double x2; } defaultMinimumUnscaledCanvasSize;
@property <TSDInteractiveCanvasControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) <TSDAnnotationHosting> * displayedAnnotation;
@property(readonly) bool displayedAnnotationPresentedPinned;
@property(readonly) TSKDocumentRoot * documentRoot;
@property(readonly) <TSKDocumentRootProvider> * documentRootProvider;
@property(retain,readonly) TSDDynamicOperationController * dynamicOperationController;
@property(readonly) TSDEditorController * editorController;
@property(readonly) double fitWidthViewScale;
@property(readonly) TSDGuideController * guideController;
@property(readonly) unsigned long long hash;
@property bool inReadMode;
@property bool inVersionBrowsingMode;
@property(copy) NSArray * infosToDisplay;
@property(readonly) bool inspectorModeEnabled;
@property struct CGPoint { double x1; double x2; } lastTapPoint;
@property <TSDCanvasLayerHosting> * layerHost;
@property bool layoutAndRenderOnThreadDuringScroll;
@property(readonly) TSDLayoutController * layoutController;
@property(readonly) TSPObjectContext * objectContext;
@property(readonly) CALayer * overlayLayer;
@property bool overlayLayerSuppressed;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } p_visibleBoundsRectForTiling;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } p_visibleUnscaledRect;
@property bool preventSettingNilEditorOnTextResponder;
@property(readonly) CALayer * repContainerLayer;
@property bool resizeCanvasOnLayout;
@property NSObject<TSDRulerController> * rulerController;
@property struct CGColor { }* selectionHighlightColor;
@property bool shouldAutoscrollToSelectionAfterLayout;
@property bool shouldClipThemeContentToCanvas;
@property bool shouldShowUserDefinedGuides;
@property bool shouldSuppressRendering;
@property bool showGrayOverlay;
@property bool showInvisibleObjects;
@property bool showsComments;
@property(readonly) struct CGSize { double x1; double x2; } sizeOfScrollViewEnclosingCanvas;
@property(readonly) Class superclass;
@property bool supportsBackgroundTileRendering;
@property bool suppressAutozoomToSelectionAfterLayout;
@property bool textGesturesInFlight;
@property(retain,readonly) TSDTrackerManipulatorCoordinator * tmCoordinator;
@property(readonly) TSDContainerRep * topLevelContainerRepForEditing;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unobscuredScrollViewFrame;
@property(readonly) TSDUserDefinedGuideController * userDefinedGuideController;
@property bool usesAlternateDrawableSelectionHighlight;
@property double viewScale;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBoundsRect;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBoundsRectForTiling;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBoundsRectUsingSizeOfEnclosingScrollView;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleUnscaledRect;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleUnscaledRectForAutoscroll;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleUnscaledRectForCanvasUI;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleUnscaledRectForScrollingAutomatically;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleUnscaledRectValidWhileZooming;

+ (id)keyPathsForValuesAffectingCurrentViewScale;
+ (id)keyPathsForValuesAffectingDocumentRoot;
+ (id)keyPathsForValuesAffectingEditorController;
+ (id)keyPathsForValuesAffectingViewScale;
+ (bool)selectorIsActionMethod:(SEL)arg1;
+ (double)smallRepOutsetForHitTesting;

- (id)accessController;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)actionGhostKnobForRep:(id)arg1;
- (void)actionGhostKnobHitForRep:(id)arg1;
- (void)addBackgroundRenderingObject:(id)arg1;
- (void)addCommonObservers;
- (void)addDecorator:(id)arg1;
- (void)addOrShowComment:(id)arg1;
- (id)additionalLayersUnderRepLayers;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (bool)allowAutoscroll;
- (bool)allowNegativeAutoscroll;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 orientation:(long long)arg4;
- (bool)animatingViewScale;
- (id)annotationController;
- (struct CGSize { double x1; double x2; })annotationPopoverSize;
- (unsigned int)annotationPreferredRectEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })annotationRectInParentView;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (bool)attachedCommentsAllowedForDrawable:(id)arg1;
- (void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(bool)arg2;
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1;
- (void)beginAnimations:(id)arg1 context:(void*)arg2;
- (void)beginDynamicOperation;
- (id)beginEditingRep:(id)arg1 clearingSelection:(bool)arg2 withEditorProvider:(id)arg3;
- (id)beginEditingRep:(id)arg1;
- (id)beginEditingRepForInfo:(id)arg1;
- (void)beginPossiblyParallelInspectorDynamicOperation;
- (void)beginScrollingOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForActiveGuidesForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canDrawTilingLayerInBackground:(id)arg1;
- (bool)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canZoomToCurrentSelection;
- (void)canvas:(id)arg1 createdRep:(id)arg2;
- (id)canvas;
- (void)canvasDidLayout:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(id)arg1;
- (void)canvasDidUpdateVisibleBounds:(id)arg1;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
- (id)canvasEditor;
- (id)canvasLayer;
- (void)canvasLayoutInvalidated:(id)arg1;
- (id)canvasReferenceController;
- (struct CGSize { double x1; double x2; })canvasScrollingOutset;
- (id)canvasView;
- (void)canvasWillLayout:(id)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(id)arg1;
- (id)changeNotifier;
- (struct CGPoint { double x1; double x2; })clampedUnscaledContentOffset:(struct CGPoint { double x1; double x2; })arg1 forViewScale:(double)arg2;
- (void)clipGuideToContainer:(id)arg1 atUnscaledPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)closeOverlays;
- (id)commandController;
- (void)commitAnimations;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGPoint { double x1; double x2; })convertBoundsToUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertBoundsToUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertBoundsToUnscaledSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertUnscaledToBoundsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertUnscaledToBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)createRepsForOffscreenLayouts;
- (double)currentViewScale;
- (bool)currentlyScrolling;
- (bool)currentlyWaitingOnThreadedLayoutAndRender;
- (void)dealloc;
- (int)defaultKnobTypeForRep:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultMinimumUnscaledCanvasSize;
- (id)delegate;
- (void)deselectAll:(id)arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (void)disableThreadedLayoutAndRender;
- (void)discardRepForClassChange:(id)arg1;
- (void)displayRulerForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)displayRulerWithSlowFade:(bool)arg1;
- (id)displayedAnnotation;
- (bool)displayedAnnotationPresentedPinned;
- (id)documentRoot;
- (id)documentRootProvider;
- (void)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)dynamicOperationController;
- (id)editorController;
- (void)enableThreadedLayoutAndRender;
- (void)encodeWithCoder:(id)arg1;
- (void)endDynamicOperation;
- (void)endEditing;
- (void)endPossiblyParallelInspectorDynamicOperation;
- (void)endScrollingOperation;
- (double)fitWidthViewScale;
- (void)getCurrentAnnotationAuthor:(id*)arg1 commandToCreateIfNecessary:(id*)arg2;
- (void)getCurrentAnnotationAuthorCreatingIfNecessaryWithCompletionHandler:(id)arg1;
- (struct CGSize { double x1; double x2; })growUnscaledCanvasLayerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)guideController;
- (id)guideStorageAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handleDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handleMultipleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasAnnotations;
- (void)hideAnnotationUIWithPinned:(bool)arg1;
- (void)hideDisplayedAnnotation;
- (void)hideRuler;
- (id)hitKnobAtPoint:(struct CGPoint { double x1; double x2; })arg1 returningRep:(id*)arg2;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChromeAtUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepIgnoringClickThrough:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepsAtPoint:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })i_canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)i_canvasContentsScaleDidChange;
- (id)i_currentAnimation;
- (id)i_descriptionForViewScale:(double)arg1;
- (void)i_drawRepWithReadLock:(id)arg1 inContext:(struct CGContext { }*)arg2 forLayer:(id)arg3;
- (bool)i_inPrintPreviewMode;
- (void)i_invalidateSelectionHighlightLayers;
- (void)i_layerHostHasBeenTornDown;
- (void)i_layout;
- (void)i_layoutRegistered:(id)arg1;
- (void)i_layoutUnregistered:(id)arg1;
- (double)i_nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(bool)arg2;
- (void)i_recordUserViewScale;
- (void)i_repNeedsDisplay:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)i_repNeedsDisplay:(id)arg1;
- (bool)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
- (id)i_tileStorage;
- (void)i_viewDidZoomToViewScale:(double)arg1;
- (void)i_viewIsZoomingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)i_viewScaleDidChange;
- (double)i_viewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)i_viewScrollDidChange;
- (void)i_viewScrollingEnded;
- (void)i_viewWillBeginZooming;
- (id)iaHUDController;
- (id)imageHUDController;
- (bool)inReadMode;
- (bool)inVersionBrowsingMode;
- (id)infoForModel:(id)arg1 withSelection:(id)arg2;
- (id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2;
- (id)infosForGuides;
- (id)infosToDisplay;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)inspectorModeEnabled;
- (void)invalidateComments;
- (void)invalidateLayers;
- (void)invalidateReps;
- (void)invalidateVisibleBounds;
- (bool)isCanvasInteractive;
- (bool)isInDynamicOperation;
- (bool)isInInspectorDynamicOperation;
- (bool)isPrinting;
- (bool)isPrintingCanvas;
- (struct CGPoint { double x1; double x2; })lastTapPoint;
- (id)layerForRep:(id)arg1;
- (id)layerHost;
- (bool)layoutAndRenderOnThreadDuringScroll;
- (id)layoutController;
- (id)layoutForInfo:(id)arg1;
- (id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutForInfoNearestVisibleRect:(id)arg1;
- (id)layoutForModel:(id)arg1 withSelection:(id)arg2;
- (void)layoutIfNeeded;
- (void)layoutInvalidated;
- (id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutsForModel:(id)arg1 withSelection:(id)arg2;
- (id)localizedPercentStringForAlignmentGuide:(id)arg1;
- (void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)makeUserDefinedGuidesVisible;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)newCanvasEditor;
- (struct CGColor { }*)newDefaultSelectionHighlightColor;
- (void)nextAnnotation:(id)arg1;
- (void)nextAnnotationAfterVisibleAnnotation:(id)arg1;
- (id)objectContext;
- (double)offsetForTranslatingGuidesInStorage:(id)arg1 guideType:(int)arg2;
- (double)offsetForTranslatingToCenterRulerForGuidesInStorage:(id)arg1 guideType:(int)arg2;
- (id)overlayLayer;
- (bool)overlayLayerSuppressed;
- (void)p_acquireLockAndPerformAction:(id)arg1;
- (void)p_addOrShowComment:(id)arg1 selector:(SEL)arg2;
- (void)p_annotationAuthorNameDidChange:(id)arg1;
- (bool)p_annotationShouldShowUI:(id)arg1;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(bool)arg3 focusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 scrollImmediately:(bool)arg5 skipZoom:(bool)arg6;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(bool)arg3 focusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)p_backgroundLayoutAndRenderState;
- (void)p_beginZoomingOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_calculateVisibleBoundsRectForTiling;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_calculateVisibleUnscaledRect;
- (bool)p_centerOnInitialSelection;
- (void)p_commonInit;
- (id)p_decorators;
- (void)p_discardLayer:(id)arg1 forRep:(id)arg2;
- (void)p_drawLayerWithReadLock:(id)arg1;
- (void)p_editorControllerDidChangeCurrentEditors:(id)arg1;
- (void)p_editorControllerDidChangeTextInputEditor:(id)arg1;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1;
- (void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)p_editorDoneChangingSelection:(id)arg1;
- (bool)p_endEditingToBeginEditingRep:(id)arg1;
- (void)p_endZoomingOperation;
- (void)p_guideColorChanged:(id)arg1;
- (void)p_layoutWithReadLock;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_outsetSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)p_overlayLayerForReps:(id)arg1;
- (void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg1;
- (void)p_recursiveHitKnobAtPoint:(struct CGPoint { double x1; double x2; })arg1 inRep:(id)arg2 minDistance:(double*)arg3 hitKnob:(id*)arg4 hitRep:(id*)arg5;
- (void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg1;
- (void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3;
- (id)p_repForLayout:(id)arg1 createIfNeeded:(bool)arg2;
- (void)p_rulerUnitsDidChangeNotification:(id)arg1;
- (void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2;
- (void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(bool)arg2;
- (id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)p_setTargetPointSize:(double)arg1;
- (void)p_setupPopoutLayerForReps:(id)arg1;
- (bool)p_shouldLayoutAndRenderOnThread;
- (bool)p_shouldSuppressAutozoomForEditor:(id)arg1;
- (void)p_syncWithLayoutThread;
- (double)p_targetPointSize;
- (void)p_textGesturesDidEndNotification:(id)arg1;
- (void)p_textGesturesWillBeginNotification:(id)arg1;
- (void)p_updateCanvasSizeFromLayouts;
- (void)p_updateLayersFromReps;
- (void)p_viewScrollingEnded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_visibleBoundsRectForTiling;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_visibleUnscaledRect;
- (void)p_willEnterForeground:(id)arg1;
- (void)presentAnnotationUI:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(bool)arg4 pinned:(bool)arg5 viaKnob:(bool)arg6;
- (void)presentError:(id)arg1 completionHandler:(id)arg2;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(id)arg3;
- (bool)preventSettingNilEditorOnTextResponder;
- (void)previousAnnotation:(id)arg1;
- (void)previousAnnotationBeforeVisibleAnnotation:(id)arg1;
- (id)provideDynamicGuidesForLayout:(id)arg1;
- (id)provideUserDefinedGuides;
- (id)queueForDrawingTilingLayerInBackground:(id)arg1;
- (void)recreateAllLayoutsAndReps;
- (void)removeBackgroundRenderingObject:(id)arg1;
- (void)removeCommonObservers;
- (void)removeDecorator:(id)arg1;
- (id)repContainerLayer;
- (id)repForInfo:(id)arg1 createIfNeeded:(bool)arg2;
- (id)repForInfo:(id)arg1;
- (id)repForLayout:(id)arg1;
- (id)replaceImageController;
- (id)repsForInfo:(id)arg1;
- (bool)resizeCanvasOnLayout;
- (void)resumeEditing;
- (struct CGSize { double x1; double x2; })rulerCenterOffsetSizeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)rulerController;
- (void)scrollCurrentSelectionToVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)scrollRectToVisibleCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 onlyScrollNecessaryAxes:(bool)arg3;
- (void)scrollRectToVisibleWithSelectionOutset:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)scrollSearchReferenceToVisible:(id)arg1;
- (void)scrollToPrimarySelection;
- (void)scrollToPrimarySelectionForEditor:(id)arg1;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(bool)arg3;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (bool)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2;
- (struct CGColor { }*)selectionHighlightColor;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)setAnimationCompletionBlock:(id)arg1;
- (void)setAnimationDelay:(double)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setAnimationDidStopSelector:(SEL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationRepeatAutoreverses:(bool)arg1;
- (void)setAnimationRepeatCount:(float)arg1;
- (void)setAnimationStartDate:(id)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setAnimationWillStartSelector:(SEL)arg1;
- (void)setAnnotationAuthorColor:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setCreateRepsForOffscreenLayouts:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInReadMode:(bool)arg1;
- (void)setInVersionBrowsingMode:(bool)arg1;
- (void)setInfosToDisplay:(id)arg1;
- (void)setLastTapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayerHost:(id)arg1;
- (void)setLayoutAndRenderOnThreadDuringScroll:(bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onLayer:(id)arg2;
- (void)setNeedsDisplayOnLayer:(id)arg1;
- (void)setOverlayLayerSuppressed:(bool)arg1;
- (void)setP_visibleBoundsRectForTiling:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setP_visibleUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreventSettingNilEditorOnTextResponder:(bool)arg1;
- (void)setResizeCanvasOnLayout:(bool)arg1;
- (void)setRulerController:(id)arg1;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)setSelectionHighlightColor:(struct CGColor { }*)arg1;
- (void)setShouldAutoscrollToSelectionAfterLayout:(bool)arg1;
- (void)setShouldClipThemeContentToCanvas:(bool)arg1;
- (void)setShouldShowUserDefinedGuides:(bool)arg1;
- (void)setShouldSuppressRendering:(bool)arg1;
- (void)setShowGrayOverlay:(bool)arg1;
- (void)setShowInvisibleObjects:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setSupportsBackgroundTileRendering:(bool)arg1;
- (void)setSuppressAutozoomToSelectionAfterLayout:(bool)arg1;
- (void)setTextGesturesInFlight:(bool)arg1;
- (void)setUnobscuredScrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesAlternateDrawableSelectionHighlight:(bool)arg1;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maintainPosition:(bool)arg3 animated:(bool)arg4;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)setViewScale:(double)arg1;
- (bool)shouldAutoscrollToSelectionAfterLayout;
- (bool)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
- (bool)shouldClipThemeContentToCanvas;
- (bool)shouldDisplayCommentUIForAuthor:(id)arg1 info:(id)arg2;
- (bool)shouldDisplayCommentUIForInfo:(id)arg1;
- (bool)shouldEverShowPathHighlightOnInvisibleShapes;
- (bool)shouldLayoutTilingLayer:(id)arg1;
- (bool)shouldPopKnobsOutsideEnclosingScrollView;
- (bool)shouldResizeCanvasToScrollView;
- (bool)shouldShowInstructionalText;
- (bool)shouldShowOnRepHyperlinkUI;
- (bool)shouldShowPathHighlightOnUnselectedInvisibleShapes;
- (bool)shouldShowTextOverflowGlyphs;
- (bool)shouldShowUserDefinedGuides;
- (bool)shouldSuppressRendering;
- (bool)shouldZoomOnSelectionChange;
- (void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(bool)arg4 pinned:(bool)arg5 shouldSetSelection:(bool)arg6 viaKnob:(bool)arg7;
- (void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(bool)arg4 pinned:(bool)arg5 shouldSetSelection:(bool)arg6;
- (bool)showGrayOverlay;
- (bool)showInvisibleObjects;
- (void)showOrHideComments:(id)arg1;
- (bool)showsComments;
- (struct CGSize { double x1; double x2; })sizeOfScrollViewEnclosingCanvas;
- (struct CGPoint { double x1; double x2; })smartZoomCenterForNoSelection;
- (bool)spellCheckingSupported;
- (bool)spellCheckingSuppressed;
- (bool)supportsBackgroundTileRendering;
- (bool)suppressAutozoomToSelectionAfterLayout;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)tappedCanvasBackgroundAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)teardown;
- (void)teardownBackgroundRendering;
- (void)teardownCanvasEditor;
- (bool)textGesturesInFlight;
- (id)tmCoordinator;
- (void)toggleAnnotationVisibility:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(bool)arg4 shouldSetSelection:(bool)arg5;
- (void)toggleHyperlinkUIForRep:(id)arg1;
- (void)toggleShouldShowUserDefinedGuides;
- (id)topLevelContainerRepForEditing;
- (id)topLevelRepsForDragSelecting;
- (id)topLevelRepsForHitTesting;
- (id)topLevelZOrderedSiblingsOfInfos:(id)arg1;
- (void)translateGuide:(id)arg1 toContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)translateGuides:(id)arg1 toContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)unitFormatter;
- (id)unitStringForAngle:(double)arg1 andLength:(double)arg2;
- (id)unitStringForAngle:(double)arg1;
- (id)unitStringForNumber:(double)arg1;
- (id)unitStringForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)unitStringForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)unobscuredFrameDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredFrameOfView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredScrollViewFrame;
- (void)updateSelectionForTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 extendingSelection:(bool)arg2;
- (void)updateSelectionForTapOnSelectedRep:(id)arg1;
- (id)userDefinedGuideController;
- (Class)userDefinedGuideControllerClass;
- (bool)usesAlternateDrawableSelectionHighlight;
- (id)validatedLayoutForInfo:(id)arg1;
- (void)viewDidEndZooming;
- (double)viewScale;
- (id)viewWithTransferredLayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsForTilingLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsRectForTiling;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsRectUsingSizeOfEnclosingScrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledRectForAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledRectForCanvasUI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledRectForScrollingAutomatically;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleUnscaledRectValidWhileZooming;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visualContainerRectForGuideStorage:(id)arg1;
- (void)zoomToCurrentSelection;
- (void)zoomWithAnimationToUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end