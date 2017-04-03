

typedef void (^OperationErrorHandler)(NSError* error);

#import <Foundation/Foundation.h>

@interface WebService : NSObject

+ (void) getNewsListOperationCompletion:(void (^)(id))completionHandler errorHandler:(OperationErrorHandler)errorHandler;

@end
