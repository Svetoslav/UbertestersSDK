//
//  GlobalDefines.h
//  Ubertesters
//
//  Created by Viacheslav Obremsky on 9/1/16.
//  Copyright © 2016 Anton Chuev. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    /*!Error level*/
    UTLogLevelError,
    /*!Warning level*/
    UTLogLevelWarning,
    /*!Information level*/
    UTLogLevelInfo,
    /*!Activity level*/
    UTLogLevelActivity
} UTLogLevel;


typedef enum {
    /*!Default options (Slider and UTOptionsLockingModeDisableUbertestersIfBuildNotExist).*/
    UbertestersOptionsDefault __attribute__((deprecated)) = 0,
    
    /*!Option for using Slider mode.*/
    UbertestersOptionsSlider __attribute__((deprecated(" use 'UbertestersActivationModeWidget:' instead."))) = 1 << 0,
    UbertestersActivationModeWidget = 1 << 0,
    
    /*!Option for using Shake mode.*/
    UbertestersOptionsShake __attribute__((deprecated(" use 'UbertestersActivationModeShake:' instead."))) = 1 << 1,
    UbertestersActivationModeShake = 1 << 1,
    
    /*!Option for Manual mode.*/
    UbertestersOptionsManual __attribute__((deprecated(" use 'UbertestersActivationModeManual:' instead."))) = 1 << 2,
    UbertestersActivationModeManual = 1 << 2,
    
    /*!Option for Locking mode (default).*/
    UbertestersOptionsLockingModeDisableUbertestersIfBuildNotExist __attribute__((deprecated(" use 'UbertestersLockingModeDisableUbertesters:' instead."))) = 1 << 3,
    UbertestersLockingModeDisableUbertesters = 1 << 3,
    
    /*!Option for Locking mode.*/
    UbertestersOptionsLockingModeAppIfBuildNotExist __attribute__((deprecated(" use 'UbertestersLockingModeLockApplication:' instead."))) = 1 << 4,
    UbertestersLockingModeLockApplication = 1 << 4
} UbertestersOptions;

typedef enum
{
    NoneLockingMode = -1,
    LockingModeDisableUbertestersIfBuildNotExist,
    LockingModeLockAppIfBuildNotExist,
} LockingMode;
