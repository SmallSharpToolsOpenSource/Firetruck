//
//  ImagesAppDelegate.h
//  Images
//
//  Created by Brennan Stehling on 12/10/09.
//  Copyright SmallSharpTools LLC 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImagesViewController;

@interface ImagesAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ImagesViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ImagesViewController *viewController;

@end

