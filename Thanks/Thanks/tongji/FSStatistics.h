//
//  FSStatistics.h
//  GoodBoy
//
//  Created by fudon on 16/8/11.
//  Copyright © 2016年 guazi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSStatisticsKeys.h"

@interface FSStatistics : NSObject

+ (void)startStatisticFunction;

+ (void)addActionLog:(NSString *)acLog;

+ (void)addActionLog:(NSString *)acLog attributes:(NSDictionary *)attributes;

+ (void)startPage:(NSString *)pageName;

+ (void)endPage:(NSString *)pageName;

@end
