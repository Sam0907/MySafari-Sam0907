//
//  ViewController.h
//  MySafari
//
//  Created by 沈新满 on 2019/3/22.
//  Copyright © 2019年 Sam. All rights reserved.
// 用于提供给外界一个加载网页地址的接口

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

-(void)loadURL:(NSString*)urlStr;
@end

