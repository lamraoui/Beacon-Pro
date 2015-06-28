//
//  DetailViewController.h
//  Beacon Pro
//
//  Created by David Helms on 6/21/15.
//  Copyright (c) 2015 Dojbol LLC. All rights reserved.
//

@import UIKit;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

