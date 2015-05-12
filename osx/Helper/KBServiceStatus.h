//
//  KBServiceStatus.h
//  Keybase
//
//  Created by Gabriel on 5/11/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KBServiceStatus : NSObject

@property (readonly) NSString *label;
@property (readonly) NSNumber *pid;
@property (readonly) NSNumber *exitStatus;
@property (readonly) NSError *error;

+ (instancetype)error:(NSError *)error;
+ (instancetype)serviceStatusWithPid:(NSNumber *)pid exitStatus:(NSNumber *)exitStatus label:(NSString *)label;

- (NSString *)info;

- (BOOL)isRunning;

@end
