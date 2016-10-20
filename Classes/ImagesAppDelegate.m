//
//  ImagesAppDelegate.m
//  Images
//
//  Created by Brennan Stehling on 12/10/09.
//  Copyright SmallSharpTools LLC 2009. All rights reserved.
//

#import "ImagesAppDelegate.h"
#import "ImagesViewController.h"

@implementation ImagesAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch
    window.rootViewController = viewController;
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
