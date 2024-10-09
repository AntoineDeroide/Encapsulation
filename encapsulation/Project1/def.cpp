#include "func.h"
#include <iostream>
#include <sstream>

using namespace std;
/*
void test::DoStuff() {

	std::cout << "Bonjour";

}

Point::Point() : x(0.f), y(0.f), z(0.f) {

	x = 0.f;
	y = 0.f;
	z = 0.f;

}

std::string Point::ToString() {



	std::stringstream sstring;

	sstring << "Point " << "x: " << x << "; y: " << y << "; z: " << z << '.';

	string returned = sstring.str();

	std::cout << returned << endl;

	return returned;
}
*/

MyVector2::MyVector2(float b_x, float b_y) : x(b_x), y(b_y){}

float MyVector2::GetPosX(void) {

	return x;

}

void MyVector2::SetPosX(float X) {

	x = X;

}


float MyVector2::GetPosY(void) {

	return y;

}

void MyVector2::SetPosY(float Y) {

	y = Y;

}

//

Entity::Entity(float b_x, float b_y) : position(0.f, 0.f){}


MyVector2 Entity::GetEntityPos(void) {

	return position;

}

void Entity::SetEntityPos(MyVector2 vector) {

	position = vector;

}


AMovable::AMovable(MyVector2 b_vector, float b_speed) : direction(b_vector), speed(b_speed){}

void AMovable::SetDirection(MyVector2 vector) {

	direction = vector;

}

void AMovable::SetSpeed(float f) {

	speed = f;

}

MyVector2 AMovable::MoveEntity(void) {

	float x = direction.GetPosX();
	x += speed;

	float y = direction.GetPosY();
	y += speed;

	MyVector2 new_pos(x, y);

	return new_pos;

}

//

Alive::Alive(float b_full_life) : full_life(b_full_life), current_life(b_full_life){}

float Alive::GetMaxLife() {

	return full_life;

}

float Alive::GetCurrentLife() {

	return current_life;

}

void Alive::ModifyLife(float modify) {

	current_life += modify;

}

//


StaticObject::StaticObject(MyVector2 b_position) : Entity(b_position.GetPosX(), b_position.GetPosY()){

	SetEntityPos(b_position);

	std::cout << "StaticObject just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " .\n";

}

//

BreakableObject::BreakableObject(MyVector2 b_position, float b_full_HP) : Entity(b_position.GetPosX(), b_position.GetPosY()), Alive(b_full_HP) {

	SetEntityPos(b_position);

	std::cout << "Breakable Object just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " with " << b_full_HP << " HP.\n";
}

void BreakableObject::ModifyLife(float modify) {
	Alive::ModifyLife(modify);

	std::cout << "BreakableObject just broke. \n";

}

//

Mob::Mob(MyVector2 b_position, float b_full_hp, MyVector2 b_direction, float b_speed) : Entity(b_position.GetPosX(), b_position.GetPosY()), Alive(b_full_hp), AMovable(b_direction, b_speed){

	std::cout << "Mob just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " with " << b_full_hp << " HP with direction x = " << b_direction.GetPosX() << " and direction y = " << b_direction.GetPosY() << " .\n";

}

void Mob::ModifyLife(float modify) {

	Alive::ModifyLife(modify);

	std::cout << "Mob just died. RIP \n";

}

MyVector2 Mob::MoveEntity() {

	MyVector2 new_pos = AMovable::MoveEntity();

	std::cout << "Mob move to x = " << new_pos.GetPosX() << " and y = " << new_pos.GetPosY() << " .\n";

	return new_pos;
}

Player::Player(MyVector2 b_position, float b_full_HP, MyVector2 b_direction, float b_speed, float base_damage) : Entity(b_position.GetPosX(), b_position.GetPosY()), AMovable(b_direction, b_speed), Alive(b_full_HP){

	std::cout << "Player just created at x = " << b_position.GetPosX() << " and y = " << b_position.GetPosY() << " with " << b_full_HP << " HP and with direction x = " << b_direction.GetPosX() << " and y = " << b_direction.GetPosY() << " .\n";

}

void Player::ModifyLife(float modify) {

	Alive::ModifyLife(modify);

	std::cout << "Player just died. RIP \n";

}

MyVector2 Player::MoveEntity() {

	MyVector2 move = AMovable::MoveEntity();

	std::cout << "Player moved to x = " << move.GetPosX() << " and y = " << move.GetPosY() << ".\n";

	return move;
}

void Player::Attack(Alive* alive, float damage) {

	damage = 10;

	IAttacker::Attack(alive, damage);

	std::cout << "Player just attacked.\n";

}