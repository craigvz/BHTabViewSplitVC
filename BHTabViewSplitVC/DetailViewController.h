//
//  DetailViewController.h
//  BHTabViewSplitVC
//
//  Created by Craig Vanderzwaag on 9/21/14.
//  Copyright (c) 2014 blueHula Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

