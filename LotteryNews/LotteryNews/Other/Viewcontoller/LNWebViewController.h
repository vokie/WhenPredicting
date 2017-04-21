//
//  LNWebViewController.h
//  LotteryNews
//
//  Created by 邹壮壮 on 2016/12/22.
//  Copyright © 2016年 邹壮壮. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LNWebViewController : UIViewController
- (instancetype)initWithURL:(NSURL *)url;
@property (nonatomic, assign) BOOL isPreset;
@property (nonatomic,assign) BOOL fromTrion;
@property (nonatomic, copy) NSString *triolionTitle;
@property (nonatomic, copy) NSString *triolionDescription;
@end
