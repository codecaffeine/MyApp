//
//  CAFMasterViewController.h
//  MyApp
//
//  Created by Matthew Thomas on 3/14/13.
//  Copyright (c) 2013 Matthew Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CAFDetailViewController;

@interface CAFMasterViewController : UITableViewController

@property (strong, nonatomic) CAFDetailViewController *detailViewController;

@end
