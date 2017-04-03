

#import <Foundation/Foundation.h>

@interface News : NSObject

@property (nonatomic, retain) NSString * headline;
@property (nonatomic, retain) NSString * slugLine;
@property (nonatomic, retain) NSString * thumbnailImageHref;
@property (nonatomic, retain) NSString * tinyUrl;

+ (NSArray*) arrayFromJSONArray:(NSArray*)inArrayOfJSONObjects;

@end
