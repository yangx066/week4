//
//  circle.hpp
//  week 4 homework1
//
//  Created by yang on 2/22/17.
//
//

#ifndef circle_h
#define circle_h

#include <stdio.h>
class circle {
    
    public:
    
    circle();
    
    void draw();
    void zenoToPoint(float catchX, float catchY);
    
    float catchUpSpeed;
    float x;
    float y;
    
};



#endif /* circle_h */
