//
//  ViewController.m
//  Fraction_Calculator
//
//  Created by 韩劲驰 on 15/6/9.
//  Copyright (c) 2015年 韩劲驰. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
{
    char op;
    int currentNumber;
    BOOL firstOperand, isNumberator;
    Calculator *myCalculator;
    NSMutableString *displayString;
}

@synthesize display;

- (void)viewDidLoad {
    // [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    firstOperand = YES;
    isNumberator = YES;
    displayString = [NSMutableString stringWithCapacity: 40];
    myCalculator = [[Calculator alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
