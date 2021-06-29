
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Tue, 29 Jun 2021 22:18:01 GMT
//

#import "StyleDictionaryColor.h"


@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
rgba(164, 255, 15, 1),
rgba(255, 217, 15, 1)
    ];
  });

  return colorArray;
}

@end
