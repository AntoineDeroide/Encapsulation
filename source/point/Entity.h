//
//  Entity.h
//  point
//
//  Created by Maxine Constantinian on 08/10/2024.
//

#ifndef ENTITY_H__
#define ENTITY_H__

#include "Point.h"

class Entity {
protected:
    Point position;
    
public:
    Entity();
    virtual void sayHello() = 0;
};

#endif
