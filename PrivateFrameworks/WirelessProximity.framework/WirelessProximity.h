/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <WirelessProximityDelegate>, NSObject<OS_dispatch_queue>, XPCClient;

@interface WirelessProximity : NSObject <XPCClientDelegate> {
    XPCClient *_connection;
    <WirelessProximityDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    int _state;
}

@property(retain) XPCClient * connection;
@property <WirelessProximityDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property int state;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)messageArrived:(id)arg1;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)updateState:(int)arg1;

@end
