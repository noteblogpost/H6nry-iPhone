/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "NSXPCListenerDelegate.h"
#import <Foundation/Foundation.h>

@class NSXPCListenerEndpoint, NSXPCListener;
@protocol OS_dispatch_queue;

@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding> {
@private
	NSXPCListenerEndpoint *_endpoint;
	NSObject<OS_dispatch_queue> *_queue;
	NSXPCListener *_listener;
	id _handler;
}
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint;	// @synthesize=_endpoint
@property(copy, nonatomic) id handler;	// @synthesize=_handler
@property(retain, nonatomic) NSXPCListener *listener;	// @synthesize=_listener
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;	// @synthesize=_queue
+(id)configuredEndpointWithUpdateHandler:(id)updateHandler withConnection:(id)connection;
+(id)remoteUpdateHanderForEndpoint:(id)endpoint;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)coder;
//-(void).cxx_destruct;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)endpoint;
// declared property getter: -(id)handler;
-(void)invalidate;
// declared property getter: -(id)listener;
-(BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
// declared property getter: -(id)queue;
// declared property setter: -(void)setEndpoint:(id)endpoint;
// declared property setter: -(void)setHandler:(id)handler;
// declared property setter: -(void)setListener:(id)listener;
// declared property setter: -(void)setQueue:(id)queue;
@end
