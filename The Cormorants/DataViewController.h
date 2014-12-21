//
//  DataViewController.h
//  The Cormorants
//
//  Created by Tyler Shewbert on 12/21/14.
//  Copyright (c) 2014 Tyler Shewbert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

