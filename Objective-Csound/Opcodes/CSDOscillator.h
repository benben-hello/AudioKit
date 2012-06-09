//
//  Oscillator.h
//  CsdReinvention
//
//  Created by Aurelius Prochazka on 4/13/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "CSDOpcode.h"
#import "CSDFunctionTable.h"
#import "CSDParam.h"

@interface CSDOscillator : CSDOpcode 

@property (nonatomic, strong) CSDParam * xAmplitude;
@property (nonatomic, strong) CSDParam * kPitch;
@property (nonatomic, strong) CSDFunctionTable *functionTable;

-(NSString *) convertToCsd;

-(id) initWithAmplitude:(CSDParam *) amp 
                 kPitch:(CSDParam *) freq
          FunctionTable:(CSDFunctionTable *) f;

@end
