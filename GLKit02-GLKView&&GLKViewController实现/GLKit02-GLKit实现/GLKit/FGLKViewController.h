//
//  FGLKViewController.h
//  GLKit02-GLKit实现
//
//  Created by Fu,Sheng on 2018/11/20.
//  Copyright © 2018年 Fu,Sheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FGLKView.h"


@interface FGLKViewController : UIViewController<FGLKViewDelegate>


@property (nonatomic, getter=isPaused) BOOL paused;


@end
