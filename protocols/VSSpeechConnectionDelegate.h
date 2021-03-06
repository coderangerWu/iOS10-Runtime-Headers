/* Generated by RuntimeBrowser.
 */

@protocol VSSpeechConnectionDelegate

@required

- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didStopAtEnd:(bool)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 successWithInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidContinue:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidPause:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidStart:(VSSpeechRequest *)arg2;

@end
