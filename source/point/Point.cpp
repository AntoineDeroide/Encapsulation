//
//  Point.cpp
//  point
//
//  Created by Maxine Constantinian on 07/10/2024.
//

#include <sstream>
#include "Point.h"

Point::Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {

}

std::string Point::ToString() {
    std::stringstream stream;
    
    stream << "Point: x: " << x << ", y: " << y << ", z: " << z;
    
    return stream.str();
}
