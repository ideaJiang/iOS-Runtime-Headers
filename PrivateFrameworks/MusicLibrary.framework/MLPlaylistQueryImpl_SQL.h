/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLPlaylistQueryImpl_SQL : MLQueryImpl_SQL {
}

- (struct __CFArray { }*)copyOfArrayByFilteringOutDistinguisedPlaylists:(struct __CFArray { }*)arg1;
- (id)entityAtIndex:(NSUInteger)arg1;
- (void)evaluate;
- (unsigned short)firstCharacterForStringProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (void)playlistsAvailableDidChangeNotification:(id)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;

@end