/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class VSRecognitionAction, NSArray;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : NSObject {
	id<VSRecognitionResultHandler> _handler;
	NSArray *_results;
	VSRecognitionAction *_action;
}
-(id)initWithHandler:(id)handler results:(id)results;
-(void)dealloc;
-(id)handler;
-(id)nextAction;
-(id)results;
-(void)setNextAction:(id)action;
@end

