/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySession : NSObject {
    NSDate * _startDate;
}

@property (nonatomic, readonly) bool isCurrentSession;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)currentSession;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSessionStartDate:(id)arg1;
- (bool)isCurrentSession;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
