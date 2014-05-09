//
//  SBXibAppDelegate.h
//  TestWithStoryBoardsAndXib
//
//  Created by Joel Steen Timle on 2014-05-09.
//  Copyright (c) 2014 Joel Steen Timle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBXibAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
