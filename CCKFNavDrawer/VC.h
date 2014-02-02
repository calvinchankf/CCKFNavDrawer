//
//  ViewController.h
//  CCKFNavDrawer
//
//  Created by calvin on 23/1/14.
//  Copyright (c) 2014年 com.calvin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCKFNavDrawer.h"

@interface VC : UIViewController<CCKFNavDrawerDelegate>

- (IBAction)drawerToggle:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *selectionIdx;

@end
