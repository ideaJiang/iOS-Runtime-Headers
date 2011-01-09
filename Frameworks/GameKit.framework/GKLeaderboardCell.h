/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, NSArray;



@interface GKLeaderboardCell : GKMultiColumnTableViewCell 
{
    NSMutableArray *_dividerArray;
    NSInteger _topEdgeStyle;
    NSInteger _bottomEdgeStyle;
    NSArray *_leaderboardCellStyles;
    NSArray *_leaderboardSectionLocations;
}

@property(readonly) GKLeaderboardCellBackgroundView *leaderboardBackgroundView;
@property(readonly) GKLeaderboardCellBackgroundView *selectedLeaderboardBackgroundView;
@property(retain) NSArray *leaderboardSectionLocations;
@property(retain) NSArray *leaderboardCellStyles;
@property NSInteger bottomEdgeStyle;
@property NSInteger topEdgeStyle;
@property(retain) NSMutableArray *dividerArray;


- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (id)description;
- (void)dealloc;
- (void)layoutSubviews;
- (id)createDividerView;
- (id)leaderboardBackgroundView;
- (id)selectedLeaderboardBackgroundView;
- (void)setLeaderboardSectionLocations:(id)arg1;
- (float)contentsMargin;
- (id)leaderboardSectionLocations;
- (id)dividerArray;
- (void)setDividerArray:(id)arg1;
- (id)leaderboardCellStyles;
- (void)updateBackgroundViews;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(NSInteger)arg3 backgroundStyle:(NSInteger)arg4;
- (void)configureBackgroundView;
- (NSInteger)topEdgeStyle;
- (NSInteger)bottomEdgeStyle;
- (void)setContentsArray:(id)arg1;
- (void)setTopEdgeStyle:(NSInteger)arg1;
- (void)setBottomEdgeStyle:(NSInteger)arg1;
- (void)setLeaderboardCellStyles:(id)arg1;

@end