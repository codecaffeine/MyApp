//
//  CAFDetailViewController.h
//  MyApp
//
//  Created by Matthew Thomas on 3/14/13.
//  Copyright (c) 2013 Matthew Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAFDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
