/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogger : NSObject <GEOExperimentConfigurationObserver> {
    GEOLogContext * _cachedLogContext;
    NSHashTable * _logContextDelegates;
    NSLock * _logContextDelegatesLock;
    NSObject<OS_dispatch_queue> * _loggerQueue;
    void * _loggerQueueIdentityKey;
    void * _loggerQueueIdentityValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)registerGEOLogFacility;
+ (id)sharedLogger;

- (id)_cachedStateOfType:(int)arg1;
- (void)_captureLogMsgEvent:(id)arg1 withMergedContext:(id)arg2;
- (void)cachedStateOfType:(int)arg1 getCachedStateOfTypeBlock:(id /* block */)arg2;
- (void)captureLogMsgEvent:(id)arg1;
- (void)captureLogMsgEvent:(id)arg1 withLogContext:(id)arg2;
- (void)dealloc;
- (void)experimentConfigurationDidChange:(id)arg1;
- (id)init;
- (void)registerLogContextDelegate:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)registerLogMsgStatesInContext:(id)arg1;
- (id)sharedLogManagerInstance;
- (id)sharedLogMessageFactoryInstance;
- (void)unregisterAllLogContextDelegates;
- (void)unregisterLogContextDelegate:(id)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)updateLogMsgStatesFromCachedContextInLogMessage:(id)arg1;

@end
