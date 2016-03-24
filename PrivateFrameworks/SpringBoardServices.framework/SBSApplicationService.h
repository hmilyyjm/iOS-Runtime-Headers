/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationService : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    SBSApplicationClient *_client;
    BOOL _wasInvalidated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRemovabilityForBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)setRemovalAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateDynamicApplicationShortcutItems:(id)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;

@end