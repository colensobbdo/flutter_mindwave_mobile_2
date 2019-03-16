/*
 *  MWMDelegate.h
 *
 *  Copyright 2016 NeuroSky, Inc.. All rights reserved.
 *
 *  All methods are required.
 */

#import <Foundation/Foundation.h>
#import "MWMEnum.h"

// Modified from original delegate
@protocol MWMDelegate <NSObject>

-(void)didConnect;
-(void)didDisconnect;

-(void)eegSample:(int) sample;

-(void)eSense:(int)poorSignal Attention:(int)attention Meditation:(int)meditation;

-(void)eegPowerDelta:(int)delta Theta:(int)theta LowAlpha:(int)lowAlpha HighAlpha:(int)highAlpha;

-(void)eegPowerLowBeta:(int)lowBeta HighBeta:(int)highBeta LowGamma:(int)lowGamma MidGamma:(int)midGamma;

-(void)eegBlink:(int) blinkValue;

//baudRate 0:57600 1:115200      notchFilter 0:50Hz 1:60Hz
-(void)mwmBaudRate:(int)baudRate NotchFilter:(int)notchFilter;

//Ble exception event;
-(void)exceptionMessage:(TGBleExceptionEvent)eventType;

@end
