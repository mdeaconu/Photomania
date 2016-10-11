//
//  Photo.h
//  Photomania
//
//  Created by Mihai Deaconu on 11/10/16.
//  Copyright © 2016 Mihai Deaconu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photographer;

NS_ASSUME_NONNULL_BEGIN

@interface Photo : NSManagedObject

// Insert code here to declare functionality of your managed object subclass
+ (Photo *)photoWithFlickrInfo:(NSDictionary *)photoDictionary
        inManagedObjectContext:(NSManagedObjectContext *)context;

+ (void)loadPhotosFromFlickrArray:(NSArray *)photos
         intoManagedObjectContext:(NSManagedObjectContext *)context;
@end

NS_ASSUME_NONNULL_END

#import "Photo+CoreDataProperties.h"
