//
//  ModelController.h
//  The Cormorants
//
//  Created by Tyler Shewbert on 12/21/14.
//  Copyright (c) 2014 Tyler Shewbert. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

