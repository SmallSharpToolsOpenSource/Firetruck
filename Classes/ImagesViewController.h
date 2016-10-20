//
//  ImagesViewController.h
//  Images
//
//  Created by Brennan Stehling on 12/10/09.
//  Copyright SmallSharpTools LLC 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TapDetectingImageView.h"

@interface ImagesViewController : UIViewController <UIScrollViewDelegate, TapDetectingImageViewDelegate> {
	UIScrollView *imageScrollView;
}

@end

