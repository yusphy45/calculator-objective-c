//
//  Calculator.h
//  Fraction_Calculator
//
//  Created by 韩劲驰 on 15/6/9.
//  Copyright (c) 2015年 韩劲驰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1;
@property (strong, nonatomic) Fraction *operand2;
@property (strong, nonatomic) Fraction *accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
