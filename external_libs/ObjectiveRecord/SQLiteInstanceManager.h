//
//  SQLiteInstanceManager.h
// ----------------------------------------------------------------------
// Part of the SQLite Persistent Objects for Cocoa and Cocoa Touch
//
// (c) 2008 Jeff LaMarche (jeff_Lamarche@mac.com)
// ----------------------------------------------------------------------
// This code may be used without restriction in any software, commercial,
// free, or otherwise. There are no attribution requirements, and no
// requirement that you distribute your changes, although bugfixes and 
// enhancements are welcome.
// 
// If you do choose to re-distribute the source code, you must retain the
// copyright notice and this license information. I also request that you
// place comments in to identify your changes.
//
// For information on how to use these classes, take a look at the 
// included eadme.txt file
// ----------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import "/usr/include/sqlite3.h"
#import <objc/runtime.h>

@interface SQLiteInstanceManager : NSObject {

	@private
	SQLiteInstanceManager *singleton;
	NSString *databaseFilepath;
	sqlite3 *database;
}
+ (id)sharedManager;

- (NSArray *)executeQuery:(NSString *)sql;
- (NSArray *)executeQuery:(NSString *)sql substitutions:(NSDictionary *)substitutions;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)rollbackTransaction;

@end
