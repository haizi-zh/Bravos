//
//  DetailViewController.h
//  Bravos
//
//  Created by Ultimate on 6/19/15.
//  Copyright (c) 2015 Bravos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

