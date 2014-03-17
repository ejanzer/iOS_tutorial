//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Emily Janzer on 3/16/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
