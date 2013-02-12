/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackCollection *_currentFeedbackCollection;
    NSMutableSet *_routeIDs;
}

@property(retain) GEODirectionsFeedback * currentDirectionsFeedback;
@property(retain) GEODirectionsFeedbackCollection * currentFeedbackCollection;
@property(retain) NSMutableSet * routeIDs;

- (void)addRouteID:(id)arg1 stepID:(unsigned int)arg2;
- (id)currentDirectionsFeedback;
- (id)currentFeedbackCollection;
- (void)dealloc;
- (void)endFeedbackSession;
- (void)reset;
- (id)routeIDs;
- (void)setCurrentDirectionsFeedback:(id)arg1;
- (void)setCurrentFeedbackCollection:(id)arg1;
- (void)setRouteIDs:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1;

@end