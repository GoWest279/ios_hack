//
//  GKLocalPlayer.h
//  Game Center
//
//  Copyright 2010-2014 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GameKit/GKPlayer.h>
#import <GameKit/GKDefines.h>
#import <GameKit/GKEventListener.h>
#import <GameKit/GKTurnBasedMatch.h>
#import <GameKit/GKMatchmaker.h>
#import <GameKit/GKSavedGameListener.h>

#if TARGET_OS_IPHONE
@class UIViewController;
#else
@class NSViewController;
#endif


NS_CLASS_AVAILABLE(10_8, 4_1)
@interface GKLocalPlayer : GKPlayer

// Obtain the GKLocalPlayer object.
// The player is only available for offline play until logged in.
// A temporary player is created if no account is set up.
+ (GKLocalPlayer *)localPlayer;

@property(readonly, getter=isAuthenticated, NS_NONATOMIC_IOSONLY)  BOOL authenticated; // Authentication state
@property(readonly, getter=isUnderage, NS_NONATOMIC_IOSONLY)       BOOL underage;      // Underage state

// The authenticate handler will be called whenever the authentication process finishes or needs to show UI. The handler may be called multiple times. Authentication will happen automatically when the handler is first set and whenever the app returns to the foreground.
// If the authentication process needs to display UI the viewController property will be non-nil. Your application should present this view controller and continue to wait for another call of the authenticateHandler.  The view controller will be dismissed automatically.
// Possible reasons for error:
// 1. Communications problem
// 2. User credentials invalid
// 3. User cancelled
#if TARGET_OS_IPHONE
@property(nonatomic, copy) void(^authenticateHandler)(UIViewController *viewController, NSError *error) NS_AVAILABLE_IOS(6_0);
#else
@property(atomic, copy) void(^authenticateHandler)(NSViewController *viewController, NSError *error) NS_AVAILABLE_MAC(10_9);
#endif

// Asynchronously load the friends list as an array of GKPlayer. Calls completionHandler when finished. Error will be nil on success.
// Possible reasons for error:
// 1. Communications problem
// 2. Unauthenticated player
- (void)loadFriendPlayersWithCompletionHandler:(void(^)(NSArray *friendPlayers, NSError *error))completionHandler NS_AVAILABLE(10_10, 8_0);
;
// Set the default leaderboard for the current game
// Possible reasons for error:
// 1. Communications problem
// 2. Unauthenticated player
// 3. Leaderboard not present
- (void)setDefaultLeaderboardIdentifier:(NSString *)leaderboardIdentifier completionHandler:(void(^)(NSError *error))completionHandler NS_AVAILABLE(10_10, 7_0);


// Load the default leaderboard identifier for the local player
// Possible reasons for error:
// 1. Communications problem
// 2. Unauthenticated player
// 3. Leaderboard not present
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(void(^)(NSString *leaderboardIdentifier, NSError *error))completionHandler NS_AVAILABLE(10_10, 7_0);


// Generates a signature allowing 3rd party server to authenticate the GKLocalPlayer
//Possible reasons for error:
// 1. Communications problem
// 2. Unauthenticated player
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(void (^)(NSURL *publicKeyUrl, NSData *signature, NSData *salt, uint64_t timestamp, NSError *error))completionHandler NS_AVAILABLE(10_10, 7_0);

@end

@protocol GKLocalPlayerListener <GKChallengeListener, GKInviteEventListener, GKTurnBasedEventListener, GKSavedGameListener>
@end

@interface GKLocalPlayer (GKLocalPlayerEvents)

// A single listener may be registered once. Registering multiple times results in undefined behavior. The registered listener will receive callbacks for any selector it responds to.
- (void)registerListener:(id<GKLocalPlayerListener>)listener NS_AVAILABLE(10_10, 7_0);

- (void)unregisterListener:(id<GKLocalPlayerListener>)listener NS_AVAILABLE(10_10, 7_0);

- (void)unregisterAllListeners NS_AVAILABLE(10_10, 7_0);

@end

// Notification will be posted whenever authentication status changes.
GK_EXTERN NSString *GKPlayerAuthenticationDidChangeNotificationName NS_AVAILABLE(10_8, 4_1);

@interface GKLocalPlayer (Deprecated)

- (void)setDefaultLeaderboardCategoryID:(NSString *)categoryID completionHandler:(void(^)(NSError *error))completionHandler NS_DEPRECATED(10_8, 10_10, 6_0, 7_0,"Use setDefaultLeaderboardIdentifier:completionHandler: instead");
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(void(^)(NSString *categoryID, NSError *error))completionHandler NS_DEPRECATED(10_8, 10_10, 6_0, 7_0,"Use loadDefaultLeaderboardIdentifierWithCompletionHandler: instead");
- (void)loadFriendsWithCompletionHandler:(void(^)(NSArray *friendIDs, NSError *error))completionHandler NS_DEPRECATED(10_8, 10_10, 4_1, 8_0, "use loadFriendPlayersWithCompletionHandler: instead");
- (void)authenticateWithCompletionHandler:(void(^)(NSError *error))completionHandler NS_DEPRECATED(10_8, 10_8, 4_1, 6_0, "Set the authenticateHandler instead");

@property(nonatomic, readonly, retain) NSArray *friends NS_DEPRECATED(10_8, 10_10, 4_1, 8_0, "use loadFriendPlayersWithCompletionHandler: instead");  // Array of player identifiers of friends for the local player. Not valid until loadFriendsWithCompletionHandler: has completed.

@end

