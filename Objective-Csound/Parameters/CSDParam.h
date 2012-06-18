//
//  CSDParam.h
//
//  Created by Adam Boulanger on 6/5/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//
//  These params are at a-rate.

#import <Foundation/Foundation.h>

#import "CSDContinuous.h"

@interface CSDParam : NSObject
{
    NSString * type; 
    NSString * parameterString;
}
@property (nonatomic, strong) NSString *parameterString;

-(id)initWithString:(NSString *)aString;
+(id)paramWithString:(NSString *)aString;

-(id)initWithExpression:(NSString *)aExpression;
+(id)paramWithFormat:(NSString *)format, ...;

-(id)initWithContinuous:(CSDContinuous *)continuous;
+(id)paramWithContinuous:(CSDContinuous *)continuous;
@end
