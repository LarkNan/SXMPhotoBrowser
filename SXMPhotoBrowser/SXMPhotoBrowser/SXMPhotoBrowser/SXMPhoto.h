//
//  SXMPhoto.h
//  SXMPhotoBrowser
//
//  Created by syn on 2017/12/12.
//  Copyright © 2017年 sxm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define kSXMScreenWidth [UIScreen mainScreen].bounds.size.width
#define kSXMScreenHeight [UIScreen mainScreen].bounds.size.height

@interface SXMPhoto : NSObject

@property (nonatomic, strong) UIImage *image;
@end
