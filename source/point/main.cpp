//
//  main.cpp
//  point
//
//  Created by Maxine Constantinian on 07/10/2024.
//

#include <iostream>
#include "Entity.h"
#include "Player.h"

void hello(Entity* e) {
    e->sayHello();
}

void applyDamage(IAlive* alive) {
    alive->TakeDamage(10);
}

int main(int argc, const char * argv[]) {
    Player* p = new Player();

    hello(p);
    applyDamage(p);
    std::cout << p->IsAlive();
    return 0;
}
