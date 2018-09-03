//
//  PersonVO.h
//  FMDBdemo
//
//  Created by Alonso on 2018/9/3.
//  Copyright © 2018 Alonso. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PersonVO : NSObject
@property (nonatomic, assign) int ID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, assign) int score;

@end
