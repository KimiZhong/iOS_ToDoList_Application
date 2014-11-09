//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Kimi Chung on 11/7/14.
//  Copyright (c) 2014 Kimi Chung. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSDate *creationDate;

@end
