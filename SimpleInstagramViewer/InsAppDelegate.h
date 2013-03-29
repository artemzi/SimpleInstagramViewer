//
//  InsAppDelegate.h
//  SimpleInstagramViewer
//
//  Created by Artem Zinoviev on 3/29/13.
//  Copyright (c) 2013 iSolo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
