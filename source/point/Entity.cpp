//
//  Entity.cpp
//  point
//
//  Created by Maxine Constantinian on 08/10/2024.
//

#include <iostream>
#include "Entity.h"

Entity::Entity() : position(0.f, 0.f, 0.f) {
    
}

void Entity::sayHello() {
    std::cout << "Hello from Entity" << std::endl;
}
