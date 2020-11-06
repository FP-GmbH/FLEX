//
//  FLEX-Runtime.h
//  FLEX
//
//  Created by Tanner on 3/11/20.
//  Copyright © 2020 FLEX Team. All rights reserved.
//

#if SWIFT_PACKAGE

#import "FLEXObjcInternal.h"
#import "FLEXRuntimeSafety.h"
#import "FLEXBlockDescription.h"
#import "FLEXTypeEncodingParser.h"

#import "FLEXMirror.h"
#import "FLEXProtocol.h"
#import "FLEXProperty.h"
#import "FLEXIvar.h"
#import "FLEXMethodBase.h"
#import "FLEXMethod.h"
#import "FLEXPropertyAttributes.h"
#import "FLEXRuntime+Compare.h"
#import "FLEXRuntime+UIKitHelpers.h"

#import "FLEXProtocolBuilder.h"
#import "FLEXClassBuilder.h"

#else

#import <FLEX/FLEXObjcInternal.h>
#import <FLEX/FLEXRuntimeSafety.h>
#import <FLEX/FLEXBlockDescription.h>
#import <FLEX/FLEXTypeEncodingParser.h>

#import <FLEX/FLEXMirror.h>
#import <FLEX/FLEXProtocol.h>
#import <FLEX/FLEXProperty.h>
#import <FLEX/FLEXIvar.h>
#import <FLEX/FLEXMethodBase.h>
#import <FLEX/FLEXMethod.h>
#import <FLEX/FLEXPropertyAttributes.h>
#import <FLEX/FLEXRuntime+Compare.h>
#import <FLEX/FLEXRuntime+UIKitHelpers.h>

#import <FLEX/FLEXProtocolBuilder.h>
#import <FLEX/FLEXClassBuilder.h>

#endif
