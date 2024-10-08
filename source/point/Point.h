//
//  Point.h
//  point
//
//  Created by Maxine Constantinian on 07/10/2024.
//

#ifndef POINT_H__
#define POINT_H__

#include <string>

class Point {
public:
    float x;
    float y;
    float z;
    
    Point(float, float, float);
    
    std::string ToString();
};

#endif
