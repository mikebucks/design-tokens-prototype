
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Thu, 24 Jun 2021 15:36:15 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
Red,
Yellow
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
