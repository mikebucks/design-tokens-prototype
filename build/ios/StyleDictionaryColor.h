
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 29 Jun 2021 22:22:32 GMT
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
