/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 7, 2014, 2:26:44 AM Eastern European Standard Time
* Operating System: Version 6.1.6 (Build 10B500)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionResultHandlingThreadDelegate;
#import "VoiceServices-Structs.h"
@class NSMutableArray, NSConditionLock;

@interface VSRecognitionResultHandlingThread : NSObject {

	id<VSRecognitionResultHandlingThreadDelegate> _delegate;
	NSMutableArray* _requests;
	NSConditionLock* _lock;
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	}  _resultHandlingFlags;

}
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)invalidate;
-(void)handleResults:(id)arg1 withHandler:(id)arg2 ;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg1 ;
@end
