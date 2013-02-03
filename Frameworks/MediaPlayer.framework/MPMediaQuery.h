/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQueryInternal;

@interface MPMediaQuery : NSObject <NSCoding> {
    MPMediaQueryInternal *_internal;
}

@property(readonly) NSArray *collections;
@property(retain) NSSet *filterPredicates;
@property(readonly) NSArray *items;
@property NSInteger groupingType;

+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)genresQuery;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (id)songsQuery;
+ (id)videosQuery;

- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
- (id)collections;
- (NSUInteger)countOfCollections;
- (NSUInteger)countOfItems;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterPredicates;
- (NSInteger)groupingType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterPredicates:(id)arg1;
- (id)items;
- (void)removeFilterPredicate:(id)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(NSInteger)arg1;

@end