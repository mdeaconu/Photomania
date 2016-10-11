//
//  Photographer.m
//  Photomania
//
//  Created by Mihai Deaconu on 11/10/16.
//  Copyright © 2016 Mihai Deaconu. All rights reserved.
//

#import "Photographer.h"
#import "Photo.h"

@implementation Photographer

// Insert code here to add functionality to your managed object subclass
+ (Photographer *)photographerWithName:(NSString *)name
               inManagedObjectsContext:(NSManagedObjectContext *)context
{
    Photographer *photographer = nil;
    
    if ([name length]) {
        NSFetchRequest *request = [NSFetchRequest fetchRequestWithEntityName:@"Photographer"];
        request.predicate = [NSPredicate predicateWithFormat:@"name = %@", name];
        
        NSError *error;
        NSArray *matches = [context executeFetchRequest:request
                                                  error:&error];
        if (!matches || ([matches count] > 1)) {
            // handle error
        } else if (![matches count]) {
            photographer = [NSEntityDescription insertNewObjectForEntityForName:@"Photographer"
                                                         inManagedObjectContext:context];
            photographer.name = name;
        } else {
            photographer = [matches lastObject];
        }
    }

    return photographer;
}

@end
