/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } * _dynamicStore;
    struct __CFRunLoopSource { } * _dynamicStoreSource;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)ethernetDynamicStoreDidChange;
- (id)ethernetNetworkInterfaces;
- (bool)hasEthernetNetworkInterfaces;
- (id)init;
- (void)registerForEthernetAdapterNotifications;

@end
