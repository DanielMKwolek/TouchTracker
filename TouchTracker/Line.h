//
//  Line.h
//  TouchTracker
//
//  Created by Daniel Kwolek on 9/18/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Line : NSObject

@property (nonatomic) CGPoint begin;
@property (nonatomic) CGPoint end;
- (instancetype)initWithBegin:(CGPoint)begin end:(CGPoint)end;

@end
