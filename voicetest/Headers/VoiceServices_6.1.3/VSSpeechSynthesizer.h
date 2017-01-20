/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import <Foundation/NSObject.h>
#import "VSSpeechConnectionDelegate.h"

@class VSKeepAlive, VSSpeechConnection, NSString;
@protocol VSSpeechSynthesizerDelegate, OS_dispatch_queue;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {
@private
	VSKeepAlive *_keepAlive;
	VSKeepAlive *_inactiveKeepAlive;
	int _footprint;
	BOOL _useCustomVoice;
	int _gender;
	BOOL _useSharedSession;
	BOOL _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSObject<OS_dispatch_queue> *_queue;
	VSSpeechConnection *_speechConnection;
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;
	id<VSSpeechSynthesizerDelegate> _delegate;
	float _rate;
	float _pitch;
	float _volume;
	NSString *_voice;
}
@property(assign, nonatomic) __weak id<VSSpeechSynthesizerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) float pitch;	// @synthesize=_pitch
@property(assign, nonatomic) float rate;	// @synthesize=_rate
@property(retain, nonatomic) NSString *voice;	// @synthesize=_voice
@property(assign, nonatomic) float volume;	// @synthesize=_volume
+(id)availableFootprintsForVoice:(id)voice languageCode:(id)code;
+(id)availableLanguageCodes;
+(id)availableVoices;
+(id)availableVoicesForLanguageCode:(id)languageCode;
+(void)downloadVoiceAsset:(id)asset progress:(id)progress completion:(id)completion;
+(void)getAllVoiceAssets:(id)assets;
+(void)getAutoDownloadedVoiceAssets:(id)assets;
+(void)getLocalVoiceAssets:(id)assets;
+(void)getVoiceInfoForLanguageCode:(id)languageCode footprint:(int)footprint gender:(int)gender custom:(BOOL)custom reply:(id)reply;
+(BOOL)isSystemSpeaking;
+(void)setAutoDownloadedVoiceAssets:(id)assets;
-(id)init;
-(id)initForInputFeedback;
//-(void).cxx_destruct;
-(BOOL)_continueSpeakingRequest:(id)request withError:(id *)error;
-(BOOL)_pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;
-(void)_setDelegate:(id)delegate;
-(BOOL)_startSpeakingString:(id)string orAttributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode request:(id *)request error:(id *)error;
-(BOOL)_stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;
-(void)connection:(id)connection speechRequest:(id)request didStopAtEnd:(BOOL)end phonemesSpoken:(id)spoken error:(id)error;
-(void)connection:(id)connection speechRequest:(id)request willSpeakMark:(int)mark inRange:(NSRange)range;
-(void)connection:(id)connection speechRequestDidContinue:(id)speechRequest;
-(void)connection:(id)connection speechRequestDidPause:(id)speechRequest;
-(void)connection:(id)connection speechRequestDidStart:(id)speechRequest;
-(BOOL)continueSpeakingRequest:(id)request withError:(id *)error;
-(BOOL)continueSpeakingWithError:(id *)error;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(int)footprint;
-(int)gender;
-(BOOL)isSpeaking;
-(float)maximumRate;
-(float)minimumRate;
-(BOOL)pauseSpeakingAtNextBoundary:(int)nextBoundary error:(id *)error;
-(BOOL)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;
-(BOOL)pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary error:(id *)error;
-(BOOL)pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;
// declared property getter: -(float)pitch;
// declared property getter: -(float)rate;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setFootprint:(int)footprint;
-(void)setGender:(int)gender;
-(void)setMaintainInactivePersistentConnection:(BOOL)connection;
-(void)setMaintainPersistentConnection:(BOOL)connection;
// declared property setter: -(void)setPitch:(float)pitch;
// declared property setter: -(void)setRate:(float)rate;
-(void)setUseCustomVoice:(BOOL)voice;
// declared property setter: -(void)setVoice:(id)voice;
// declared property setter: -(void)setVolume:(float)volume;
-(id)speechString;
-(BOOL)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode error:(id *)error;
-(BOOL)startSpeakingString:(id)string error:(id *)error;
-(BOOL)startSpeakingString:(id)string request:(id *)request error:(id *)error;
-(BOOL)startSpeakingString:(id)string toURL:(id)url error:(id *)error;
-(BOOL)startSpeakingString:(id)string toURL:(id)url request:(id *)request error:(id *)error;
-(BOOL)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode error:(id *)error;
-(BOOL)startSpeakingString:(id)string withLanguageCode:(id)languageCode error:(id *)error;
-(BOOL)startSpeakingString:(id)string withLanguageCode:(id)languageCode request:(id *)request error:(id *)error;
-(BOOL)stopSpeakingAtNextBoundary:(int)nextBoundary error:(id *)error;
-(BOOL)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;
-(BOOL)stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary error:(id *)error;
-(BOOL)stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;
-(void)useAudioQueueFlags:(unsigned)flags;
-(BOOL)useCustomVoice;
-(void)useSharedAudioSession:(BOOL)session;
-(void)useSpecificAudioSession:(unsigned)session;
// declared property getter: -(id)voice;
// declared property getter: -(float)volume;
@end
