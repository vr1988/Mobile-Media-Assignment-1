//
//  Restaurant.h
//  Restaurants
//

#import <Foundation/Foundation.h>

@interface Restaurant : NSObject
{
    NSString* name;
    NSString* address;
    NSString* review;
    NSString* year;
    
}
@property(readwrite, strong) NSString* name; 
@property(readwrite, strong) NSString* address; 
@property(readwrite, strong) NSString* review;
@property(readwrite, strong) NSString* year; 





@end
