//
//  ViewController.h
//  Fraction_Calculator
//
//  Created by 韩劲驰 on 15/6/9.
//  Copyright (c) 2015年 韩劲驰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBAction UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

//数字键

-(IBAction) clickDigit: (UIButton *) sender;

//算数操作键

-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

//Misc键

-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;

@end

