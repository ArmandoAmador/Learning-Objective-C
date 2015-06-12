#import "Sphere.h"

@implementation Sphere
-(void)setRadius:(float)radius {
    _radius = radius;
}

-(float)radius {
    return _radius;
}

-(void)setCenter:(NSArray *)center {
    _center = center;
}

-(NSArray *)center {
    return _center;
}

@end
