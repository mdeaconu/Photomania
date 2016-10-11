//
//  PhotographersCDTVC.h
//  Photomania
//
//  Created by Mihai Deaconu on 11/10/16.
//  Copyright © 2016 Mihai Deaconu. All rights reserved.
//

#import "CoreDataTableViewController.h"

@interface PhotographersCDTVC : CoreDataTableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
