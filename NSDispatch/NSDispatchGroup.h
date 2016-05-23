//
//  NSDispatchGroup.h
//  NSDispatch
//

#import <Foundation/Foundation.h>

@interface NSDispatchGroup : NSObject

/**
 *  Returns the underlying dispatch group object.
 *
 *  @return The dispatch group object.
 */
@property (strong, readonly, nonatomic) dispatch_group_t dispatchGroup;

/**
 *  Initializes a new group.
 *
 *  @return The initialized instance.
 *  @see dispatch_group_create()
 */
- (instancetype)init;

/**
 *  The NSDispatchGroup designated initializer.
 *
 *  @param dispatchGroup A dispatch_group_t object.
 *  @return The initialized instance.
 */
- (instancetype)initWithDispatchGroup:(dispatch_group_t)dispatchGroup;

/**
 *  Explicitly indicates that a block has entered the group.
 *
 *  @see dispatch_group_enter()
 */
- (void)enter;

/**
 *  Explicitly indicates that a block in the group has completed.
 *
 *  @see dispatch_group_leave()
 */
- (void)leave;

/**
 *  Waits forever for the previously submitted blocks in the group to complete.
 *
 *  @see dispatch_group_wait()
 */
- (void)wait;

/**
 *  Waits for the previously submitted blocks in the group to complete.
 *
 *  @param seconds The time to wait in seconds.
 *  @return YES if all blocks completed, NO if the timeout occurred.
 *  @see dispatch_group_wait()
 */
- (BOOL)wait:(double)seconds;

@end
