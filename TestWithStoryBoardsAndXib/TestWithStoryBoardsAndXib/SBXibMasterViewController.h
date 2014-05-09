//
//  SBXibMasterViewController.h
//  TestWithStoryBoardsAndXib
//
//  Created by Joel Steen Timle on 2014-05-09.
//  Copyright (c) 2014 Joel Steen Timle. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface SBXibMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
