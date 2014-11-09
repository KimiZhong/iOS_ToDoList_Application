//
//  XYZToDoListTableViewController.h
//  ToDoList
//
//  Created by Kimi Chung on 11/6/14.
//  Copyright (c) 2014 Kimi Chung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"

@interface XYZToDoListTableViewController : UITableViewController
//- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@property XYZToDoItem *toDoItem;

@end
