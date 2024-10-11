#include "func.h"
#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

//

MyVector2::MyVector2(float b_x, float b_y) : x(b_x), y(b_y){} // erreur 6 LNK 2005

float MyVector2::GetPosX(void) { // erreur 13 LNK 2005

	return x;

}

void MyVector2::SetPosX(float X) {

	x = X;

}


float MyVector2::GetPosY(void) { // erreur 14 LNK 2005

	return y;

}

void MyVector2::SetPosY(float Y) {

	y = Y;

}

//

Entity::Entity(float b_x, float b_y) : position(b_x, b_y){} // erreur 4 LNK 2005

MyVector2 Entity::GetEntityPos(void) { // erreur 11 LNK 2005

	return position;

}

void Entity::SetEntityPos(MyVector2 vector) {

	position = vector;

}

//

AMovable::AMovable(MyVector2 b_vector, float b_speed) : direction(b_vector), speed(b_speed){} // erreur 1 LNK 2005

void AMovable::SetDirection(MyVector2 vector) { // erreur 22 LNK 2005

	direction = vector;

}

void AMovable::SetSpeed(float f) {

	speed = f;

}

MyVector2 AMovable::MoveEntity(void) { // erreur 19 LNK 2005

	float x = direction.GetPosX();
	x *= speed;

	float y = direction.GetPosY();
	y *= speed;

	MyVector2 new_pos(x, y);

	return new_pos;

}

//

Alive::Alive(float b_full_life) : full_life(b_full_life), current_life(b_full_life){} // erreur 2 LNK 2005

float Alive::GetMaxLife() { // erreur 12 LNK 2005

	return full_life;

}

float Alive::GetCurrentLife() { // erreur 10 LNK 2005

	return current_life;

}

void Alive::ModifyLife(float modify) { // erreur 15 LNK 2005

	current_life += modify;

}

//


StaticObject::StaticObject(MyVector2 b_position) : Entity(b_position.GetPosX(), b_position.GetPosY()){ // erreur 8 LNK 2005

	SetEntityPos(b_position);

	std::cout << "StaticObject just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " .\n";

}

//

BreakableObject::BreakableObject(MyVector2 b_position, float b_full_HP) : Entity(b_position.GetPosX(), b_position.GetPosY()), Alive(b_full_HP) { // erreur 3 LNK 2005

	SetEntityPos(b_position);

	std::cout << "Breakable Object just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " with " << b_full_HP << " HP.\n";
}

void BreakableObject::ModifyLife(float modify) { // erreur 16 LNK 2005
	Alive::ModifyLife(modify);

	std::cout << "BreakableObject just broke. \n";

}

//

Mob::Mob(MyVector2 b_position, float b_full_hp, MyVector2 b_direction, float b_speed) : Entity(b_position.GetPosX(), b_position.GetPosY()), Alive(b_full_hp), AMovable(b_direction, b_speed){ // erreur 5 LNK 2005

	std::cout << "Mob just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " with " << b_full_hp << " HP with direction x = " << b_direction.GetPosX() << " and direction y = " << b_direction.GetPosY() << " .\n";

}

void Mob::ModifyLife(float modify) { // erreur 17 LNK 2005

	Alive::ModifyLife(modify);

	std::cout << "Mob just died. RIP \n";

}

MyVector2 Mob::MoveEntity() { // erreur 20 LNK 2005

	MyVector2 new_pos = AMovable::MoveEntity();

	std::cout << "Mob move to x = " << new_pos.GetPosX() << " and y = " << new_pos.GetPosY() << " .\n";

	return new_pos;
}

Player::Player(MyVector2 b_position, float b_full_HP, MyVector2 b_direction, float b_speed, float base_damage) : Entity(b_position.GetPosX(), b_position.GetPosY()), AMovable(b_direction, b_speed), Alive(b_full_HP){ // erreur 7 LNK 2005

	std::cout << "Player just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " with " << b_full_HP << " HP and with direction x = " << b_direction.GetPosX() << " and y = " << b_direction.GetPosY() << " .\n";

}

void Player::ModifyLife(float modify) { // erreur 18 LNK 2005

	Alive::ModifyLife(modify);

	std::cout << "Player just died. RIP \n";

}

MyVector2 Player::MoveEntity() { // erreur 21 LNK 2005

	MyVector2 move = AMovable::MoveEntity();

	std::cout << "Player moved to x = " << move.GetPosX() << " and y = " << move.GetPosY() << ".\n";

	return move;
}

void Player::Attack(Alive* alive, float damage) { // erreur 9 LNK 2005
	alive->ModifyLife(-damage);
	std::cout << "Player just attacked.\n";

}