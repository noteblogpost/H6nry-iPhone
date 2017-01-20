@class SBDataLookupResults, NSLock, NSMutableDictionary, NSMutableSet, SBApplication, NSDictionary, NSOperationQueue, BKSApplicationStateMonitor;

@interface SBApplicationController : NSObject {

	SBDataLookupResults* _pendingDataLookupResults;
	NSLock* _pendingDataLookupResultsLock;
	NSMutableDictionary* _applications;
	NSMutableDictionary* _applicationsByBundleIdentifer;
	NSMutableSet* _applicationsPlayingMutedAudioSinceLastLock;
	SBApplication* _applicationCurrentlyRecordingAudio;
	int _locationStatusBarIconType;
	NSDictionary* _backgroundDisplayDict;
	unsigned _ignoreUninstallationEventCount;
	NSOperationQueue* _backgroundOperationQueue;
	NSLock* _applicationsLock;
	NSMutableDictionary* _systemAppsVisibilityOverrides;
	char _visibilityOverridesAreDirty;
	BKSApplicationStateMonitor* _appStateMonitor;
	char _booting;
	NSMutableSet* _appsToAutoLaunchAfterBoot;

}
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
-(id)setupApplication;
-(void)buildLocationState;
-(void)autoLaunchAppsIfNecessaryAfterBoot;
-(id)dataActivation;
-(id)allApplications;
-(id)applicationWithPid:(int)arg1 ;
-(void)uninstallApplication:(id)arg1 ;
-(id)applicationsWithBundleIdentifier:(id)arg1 ;
-(id)iPod;
-(id)applicationCurrentlyRecordingAudio;
-(void)waitForOperationsToComplete;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(id)applicationsWithPid:(int)arg1 ;
-(id)newsstandApps;
-(void)loadWebclipAndIcon:(id)arg1 ;
-(void)loadApplicationsAndIcons:(id)arg1 reveal:(char)arg2 popIn:(char)arg3 ;
-(void)_lockStateChanged:(id)arg1 ;
-(char)updateAppIconVisibilityOverridesShowing:(id*)arg1 hiding:(id*)arg2 ;
-(int)appVisibilityOverrideForBundleIdentifier:(id)arg1 ;
-(id)allDisplayIdentifiers;
-(char)loadApplication:(id)arg1 ;
-(id)loadApplications;
-(id)_loadApplications:(char)arg1 applicationDictionaries:(id)arg2 ;
-(void)_memoryWarningReceived;
-(void)_recordingStateChanged:(id)arg1 ;
-(void)_mediaServerConnectionDied:(id)arg1 ;
-(void)_unusuallyMutedAudioPlaying:(id)arg1 ;
-(void)_updateLocationState;
-(void)_reloadBackgroundIDsDict;
-(void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3 ;
-(void)_loadApplication:(id)arg1 dictionary:(id)arg2 allowDemoOnly:(char)arg3 ;
-(void)loadApplicationsWithBundle:(id)arg1 bundlePath:(id)arg2 isSystemApplication:(char)arg3 defaultTags:(id)arg4 signerIdentity:(id)arg5 provisioningProfileValidated:(char)arg6 seatbeltEnvironmentVariables:(id)arg7 ;
-(char)_applicationHasBeenModified:(id)arg1 applicationDictionary:(id)arg2 ;
-(void)_preLoadApplications;
-(void)_calculateApplicationDiff:(id*)arg1 removed:(id*)arg2 applicationDictionaries:(id)arg3 ;
-(id)_modifiedApplications:(id)arg1 applicationDictionaries:(id)arg2 ;
-(void)removeApplicationsFromModelWithBundleIdentifier:(id)arg1 ;
-(void)_postLoadApplications:(id)arg1 removed:(id)arg2 modified:(id)arg3 updateRestrictions:(char)arg4 ;
-(id)_loadApplications:(id)arg1 removed:(id)arg2 applicationDictionaries:(id)arg3 updateRestrictions:(char)arg4 ;
-(id)dequeuePendingDataLookupResults;
-(void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(char)arg2 popIn:(char)arg3 reloadAllIcons:(char)arg4 ;
-(void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 applicationDictionaries:(id)arg3 reveal:(char)arg4 popIn:(char)arg5 reloadAllIcons:(char)arg6 ;
-(Class)applicationClassForInfoDictionary:(id)arg1 ;
-(void)_applicationsRegistered:(id)arg1 unregistered:(id)arg2 ;
-(void)_applicationsRegistered:(id)arg1 ;
-(void)_applicationsUnregistered:(id)arg1 ;
-(char)hasPendingDataLookupResults;
-(void)_handleDataLookupResultsIfReceived;
-(void)queuePendingDataLookupResults:(id)arg1 ;
-(int)locationStatusBarIconType;
-(id)webApplications;
-(void)_loadApplication:(id)arg1 dictionary:(id)arg2 ;
-(void)_decrementUninstallationEventCount;
-(char)_hasRequiredCapabilities:(id)arg1 ;
-(void)_applicationRegistrationChangedCallback:(id)arg1 info:(id)arg2 ;
-(void)processPendingInstalls;
-(void)_setVisibilityOverridesAreDirty:(char)arg1 ;
-(id)mobilePhone;
-(id)applicationWithDisplayIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
