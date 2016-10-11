//
//  Photographer.h
//  Photomania
//
//  Created by Mihai Deaconu on 11/10/16.
//  Copyright © 2016 Mihai Deaconu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photo;

NS_ASSUME_NONNULL_BEGIN

@interface Photographer : NSManagedObject

+ (Photographer *)photographerWithName:(NSString *)name
               inManagedObjectsContext:(NSManagedObjectContext *)context;

@end

NS_ASSUME_NONNULL_END

#import "Photographer+CoreDataProperties.h"
