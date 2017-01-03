//
//  Ubertesters.h
//  Ubertesters
//
//  Created by Ubertesters on 9/7/13.
//  Copyright (c) 2014 Ubertesters. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GlobalDefines.h"

@class CustomViewUberTesters;
@class UserProfileViewController;



/*!
 * @typedef UTLog options.
 * @brief Three option for UTLog method.
 * @code [[Ubertesters shared] UTLog:@"Some text..."
                withLevel:UTLogLevelInfo];
 */
//typedef enum {
//    /*!Error level*/
//    UTLogLevelError,
//    /*!Warning level*/
//    UTLogLevelWarning,
//    /*!Information level*/
//    UTLogLevelInfo,
//    /*!Activity level*/
//    UTLogLevelActivity
//} UTLogLevel;

@interface Ubertesters : NSObject <UITextViewDelegate>

@property (nonatomic, retain) NSString* apiKey;

@property (nonatomic, assign) BOOL isOpenGL;
@property (nonatomic, assign) BOOL autoUpdate;
/*!
 *if there is no internet connection user can work in offline mode
 */

@property (nonatomic) BOOL isError;

/*!
 * if customer sends this property in dictionary properties as YES -> after app receive error code APPLICATION NO FOUND -> we will not close the app
 
 Default is LockingModeDisableUbertestersIfBuildNotExist
 */

/*!
 *  Main method for accessing Ubertesters singleton.
 *
 *  @return Ubertestrs singleton.
 */
+ (Ubertesters*)shared;

/*!
 Initialize Ubertesters framework with default properties:
 LockingMode = LockingModeDisableUbertestersIfBuildNotExist,
 ActivationMode = UTSlider
 @warning You should initialize Ubertesters after you initialize your view controlllers, just before return YES!
 */
- (void)initialize;

/*!
 This method is deprecated!
 @see initializeWithOptions:
 */
- (void)initialize:(LockingMode)mode __attribute__((deprecated(" use 'initializeWithOptions:' instead.")));

/*!
 Initialize Ubertesters framework with user`s options:
 UTOptionsSlider initialize Ubertesters with menu picker buttons.
 UTOptionsShake initialize Ubertesters with shake gesture.
 UTOptionsManual initialize Ubertesters with manual mode.
 @warning You should initialize Ubertesters after you initialize your view controlllers, just before return YES!
 */
- (void)initializeWithOptions:(UbertestersOptions)options;

//API
/*!
 *  Makes Screenshot of any view (openGL or UIKit).
 */
- (void)makeScreenshot;

/*!
 *  Shows Ubertesters menu.
 */
- (void)showMenu;

/*!
 *  Hides Ubertesters menu.
 */
- (void)hideMenu;

/*!
 This method is deprecated!
 @see UTLog:withLevel:
 */
- (void)UTLog:(NSString *)format level:(NSString *)level __attribute__((deprecated(" use 'UTLog:withLevel:' instead.")));

/*!
 *  Logs custom message into session.
 *
 *  @param format of type NSString
 *  @param level of type UTLogLevel
 */
- (void)UTLog:(NSString *)format withLevel:(UTLogLevel)level;

/*!
 *  Disables Ubertesters crash handler.
 */

- (void)disableCrashHandler;

/*!
 *  Disables Ubertesters crash handler.
 */

- (void) setIssueDelegate:(id)delegate;

// For Xamarin
- (void)sendCrash:(NSString*)crashDescription;

@end
