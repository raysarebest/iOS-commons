//
//  MHCoreDataStack.h
//
//  Created by Michael Hulet on 8/26/14.
//

@import Foundation;

@interface MHCoreDataStack : NSObject
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
+(instancetype)defaultStack;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
@end
