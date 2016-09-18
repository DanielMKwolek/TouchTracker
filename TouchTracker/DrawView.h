//
//  DrawView.h
//  TouchTracker
//
//  Created by Daniel Kwolek on 9/18/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Line.h"

@interface DrawView : UIView

@property (nonatomic) NSMutableDictionary *currentLines;
@property (nonatomic) NSMutableArray *finishedLines;

@end
