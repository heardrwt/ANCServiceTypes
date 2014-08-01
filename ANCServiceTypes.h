//
//  ANCServiceTypes.h
//  Recon
//
//  Created by Richard Heard on 1/08/2014.
//  Copyright (c) 2014 Richard Heard. All rights reserved.
//
//  Apple Notification Center Service Types (iOS 8, Beta 4)
//
//  Source: https://developer.apple.com/library/prerelease/ios/documentation/CoreBluetooth/Reference/AppleNotificationCenterServiceSpecification/Appendix/Appendix.html#//apple_ref/doc/uid/TP40013460-CH3-SW1
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions
//  are met:
//  1. Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright
//  notice, this list of conditions and the following disclaimer in the
//  documentation and/or other materials provided with the distribution.
//  3. The name of the author may not be used to endorse or promote products
//  derived from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
//  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
//  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
//  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//


#ifndef ANCServiceTypes_h
#define ANCServiceTypes_h

typedef uint32_t NotificationUID;


typedef NS_ENUM(uint8_t, CategoryID) {
    CategoryIDOther                 = 0,
    CategoryIDIncomingCall          = 1,
    CategoryIDMissedCall            = 2,
    CategoryIDVoicemail             = 3,
    CategoryIDSocial                = 4,
    CategoryIDSchedule              = 5,
    CategoryIDEmail                 = 6,
    CategoryIDNews                  = 7,
    CategoryIDHealthAndFitness      = 8,
    CategoryIDBusinessAndFinance    = 9,
    CategoryIDLocation              = 10,
    CategoryIDEntertainment         = 11
    /* 12-255 reserved */
};


typedef NS_ENUM(uint8_t, EventID) {
    EventIDNotificationAdded    = 0,
    EventIDNotificationModified = 1,
    EventIDNotificationRemoved  = 2
    /* 3-255 reserved */
};


typedef NS_OPTIONS(uint8_t, EventFlags) {
    EventFlagSilent         = (1 << 0),
    EventFlagImportant      = (1 << 1),
    EventFlagPreExisting    = (1 << 2),
    EventFlagPositiveAction = (1 << 3),
    EventFlagNegativeAction = (1 << 4)
    /* (1 << 5)–(1 << 7) reserved */
};


typedef NS_ENUM(uint8_t, CommandID) {
    CommandIDGetNotificationAttributes  = 0,
    CommandIDGetAppAttributes           = 1,
    CommandIDPerformNotificationAction  = 2
    /* 3-255 reserved */
};


// format:  Default is UTF-8 strings.
typedef NS_ENUM(uint8_t, NotificationAttributeID) {
    NotificationAttributeIDAppIdentifier        = 0,
    NotificationAttributeIDTitle                = 1, // Needs to be followed by a 2-bytes max length parameter
    NotificationAttributeIDSubtitle             = 2, // Needs to be followed by a 2-bytes max length parameter
    NotificationAttributeIDMessage              = 3, // Needs to be followed by a 2-bytes max length parameter
    NotificationAttributeIDMessageSize          = 4, // Note: The format of the NotificationAttributeIDMessageSize constant is a string that represents the integral value of the message size.
    NotificationAttributeIDDate                 = 5, // Note: The format of the NotificationAttributeIDDate constant is a string that uses the Unicode Technical Standard (UTS) #35 date format pattern yyyyMMdd'T'HHmmSS.
    NotificationAttributeIDPositiveActionLabel  = 6,
    NotificationAttributeIDNegativeActionLabel  = 7
    /* 8-255 reserved */
};


typedef NS_ENUM(uint8_t, ActionID) {
    ActionIDPositive = 0,
    ActionIDNegative = 1
    /* 2-255 reserved */
};


typedef NS_ENUM(uint8_t, AppAttributeID) {
    AppAttributeIDDisplayName = 0
    /* 1-255 reserved */
};


#endif
