//
//  SBXibDetailViewController.h
//  TestWithStoryBoardsAndXib
//
//  Created by Joel Steen Timle on 2014-05-09.
//  Copyright (c) 2014 Joel Steen Timle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBXibDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
