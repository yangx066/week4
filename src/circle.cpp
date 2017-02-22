//
//  circle.cpp
//  week 4 homework1
//
//  Created by yang on 2/22/17.
//
//

#include "circle.h"

circle::circle(){
    catchUpSpeed = 0.01f;
}

//------------------------------------------------------------------
void circle::draw(){
    

}

//------------------------------------------------------------------
void circle::zenoToPoint(float catchX, float catchY){
    x = catchUpSpeed * catchX + (1-catchUpSpeed) * x;
    y = catchUpSpeed * catchY + (1-catchUpSpeed) * y;
}
