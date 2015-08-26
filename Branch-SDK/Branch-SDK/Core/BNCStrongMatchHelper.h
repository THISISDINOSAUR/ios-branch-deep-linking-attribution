//
//  BNCStrongMatchHelper.h
//  Branch-TestBed
//
//  Created by Derrick Staten on 8/26/15.
//  Copyright © 2015 Branch Metrics. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNCStrongMatchHelper : NSObject

+ (BNCStrongMatchHelper *)strongMatchHelper;
- (void)createStrongMatchWithBranchKey:(NSString *)branchKey;

@end
