#import <Cocoa/Cocoa.h>
#import "Sphere.h"

int main()
{   Sphere *ball = [[Sphere alloc] init];
    
    [ball setRadius:25];
    NSLog(@"ball radius %f", [ball radius]);
    
    return 0;
}
