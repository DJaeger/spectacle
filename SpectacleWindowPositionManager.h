#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>

typedef enum {
    SpectacleWindowActionUndo = -3,
    SpectacleWindowActionRedo,
    SpectacleWindowActionNone,
    SpectacleWindowActionCenter,
    SpectacleWindowActionFullscreen,
    SpectacleWindowActionLeftHalf,
    SpectacleWindowActionUpperLeft,
    SpectacleWindowActionLowerLeft,
    SpectacleWindowActionRightHalf,
    SpectacleWindowActionUpperRight,
    SpectacleWindowActionLowerRight,
    SpectacleWindowActionTopHalf,
    SpectacleWindowActionBottomHalf,
    SpectacleWindowActionLeftDisplay,
    SpectacleWindowActionRightDisplay,
    SpectacleWindowActionTopDisplay,
    SpectacleWindowActionBottomDisplay
} SpectacleWindowAction;

#pragma mark -

@interface SpectacleWindowPositionManager : NSObject {
    ZeroKitAccessibilityElement *myFrontMostWindowElement;
    NSMutableDictionary *myUndoHistory;
    NSMutableDictionary *myRedoHistory;
}

+ (SpectacleWindowPositionManager *)sharedManager;

#pragma mark -

- (void)moveFrontMostWindowWithAction: (SpectacleWindowAction)action;

#pragma mark -

- (void)undoLastWindowAction;

- (void)redoLastWindowAction;

@end
