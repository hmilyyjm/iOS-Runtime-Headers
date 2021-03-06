/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCircleView : UIView {
    BOOL  _backgroundColorFollowsTintColor;
    BOOL  _borderColorFollowsTintColor;
}

@property (nonatomic) BOOL backgroundColorFollowsTintColor;
@property (nonatomic) BOOL borderColorFollowsTintColor;

+ (BOOL)requiresConstraintBasedLayout;

- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)backgroundColorFollowsTintColor;
- (BOOL)borderColorFollowsTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColorFollowsTintColor:(BOOL)arg1;
- (void)setBorderColorFollowsTintColor:(BOOL)arg1;
- (void)tintColorDidChange;

@end
