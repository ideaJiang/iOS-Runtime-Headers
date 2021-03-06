/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem {
    id _internal;
}

@property(readonly) int confidence;
@property(readonly) BOOL hasExitedVehicle;
@property(readonly) BOOL isDriving;
@property(readonly) BOOL isMoving;
@property(readonly) BOOL isRunning;
@property(readonly) BOOL isWalking;
@property(readonly) BOOL maybeExitingVehicle;

- (struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })activity;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasExitedVehicle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })arg1 andTimestamp:(double)arg2;
- (BOOL)isDriving;
- (BOOL)isMoving;
- (BOOL)isRunning;
- (BOOL)isWalking;
- (BOOL)maybeExitingVehicle;

@end
