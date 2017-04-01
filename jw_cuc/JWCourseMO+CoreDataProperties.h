//
//  JWCourseMO+CoreDataProperties.h
//  jw_cuc
//
//  Created by  Phil Guo on 17/2/9.
//  Copyright © 2017年  Phil Guo. All rights reserved.
//

#import "JWCourseMO+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface JWCourseMO (CoreDataProperties)

+ (NSFetchRequest<JWCourseMO *> *)fetchRequest;
+ (NSFetchRequest<JWCourseMO *> *)fetchRequestWithPredicate:(NSPredicate *)predicate;
@property (nullable, nonatomic, copy) NSString *building;
@property (nullable, nonatomic, copy) NSString *classroom;
@property (nullable, nonatomic, copy) NSString *courseName;

@property (nullable, nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic) int16_t year;
@property (nonatomic) int16_t term;
@property (nonatomic) int16_t week;
@property (nonatomic) int16_t dayNum;

@property (nonatomic) int16_t start;
@property (nonatomic) int16_t end;
//- (void)fillPropertyWithDictionary:(NSDictionary *)dic;
@end
const NSComparator JWCourseMO_Comparator = ^NSComparisonResult(JWCourseMO *course1,JWCourseMO *course2) {
    if (course1.start < course2.start) {
        return NSOrderedAscending;
    }else {
        return NSOrderedDescending;
    }
};
NS_ASSUME_NONNULL_END
