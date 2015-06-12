#import <Foundation/Foundation.h>

@interface Sphere : NSObject {
    NSArray *_center;
    float _radius;
}

-(void)setRadius:(float)radius;
-(float)radius;

-(void)setCenter:(NSArray *)center;
-(NSArray *)center;

@end
