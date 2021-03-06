#import <Foundation/Foundation.h>
#import "SWGOrder.h"
#import "SWGApi.h"

/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at <a href=\"http://swagger.io\">http://swagger.io</a> or on irc.freenode.net, #swagger.  For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@wordnik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGStoreApi: NSObject <SWGApi>

extern NSString* kSWGStoreApiErrorDomain;
extern NSInteger kSWGStoreApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Delete purchase order by ID
/// For valid response try integer IDs with value < 1000. Anything above 1000 or nonintegers will generate API errors
///
/// @param orderId ID of the order that needs to be deleted
/// 
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Order not found"
///
/// @return void
-(NSURLSessionTask*) deleteOrderWithOrderId: (NSString*) orderId
    completionHandler: (void (^)(NSError* error)) handler;


/// Returns pet inventories by status
/// Returns a map of status codes to quantities
///
/// 
///  code:200 message:"successful operation"
///
/// @return NSDictionary<NSString*, NSNumber*>*
-(NSURLSessionTask*) getInventoryWithCompletionHandler: 
    (void (^)(NSDictionary<NSString*, NSNumber*>* output, NSError* error)) handler;


/// Find purchase order by ID
/// For valid response try integer IDs with value <= 5 or > 10. Other values will generated exceptions
///
/// @param orderId ID of pet that needs to be fetched
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Order not found"
///
/// @return SWGOrder*
-(NSURLSessionTask*) getOrderByIdWithOrderId: (NSString*) orderId
    completionHandler: (void (^)(SWGOrder* output, NSError* error)) handler;


/// Place an order for a pet
/// 
///
/// @param body order placed for purchasing the pet (optional)
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid Order"
///
/// @return SWGOrder*
-(NSURLSessionTask*) placeOrderWithBody: (SWGOrder*) body
    completionHandler: (void (^)(SWGOrder* output, NSError* error)) handler;



@end
