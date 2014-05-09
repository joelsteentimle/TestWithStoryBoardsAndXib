//
//  SBXibDetailViewController.m
//  TestWithStoryBoardsAndXib
//
//  Created by Joel Steen Timle on 2014-05-09.
//  Copyright (c) 2014 Joel Steen Timle. All rights reserved.
//

#import "SBXibDetailViewController.h"

@interface SBXibDetailViewController ()
- (void)configureView;
@end

@implementation SBXibDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
