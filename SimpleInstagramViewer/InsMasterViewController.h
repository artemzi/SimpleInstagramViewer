//
//  InsMasterViewController.h
//  SimpleInstagramViewer
//
//  Created by Artem Zinoviev on 3/29/13.
//  Copyright (c) 2013 iSolo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface InsMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
