#include <iostream>
#include "vector2.h"
#include <string>

Vector2::Vector2(float b_x, float b_y) : x(b_x), y(b_y) {}

float Vector2::GetX() { 
	return x;
}

float Vector2::GetY() { 
	return y;
}

void Vector2::SetX(float b_x) {
	x = b_x;
}
void Vector2::SetX(std::string b_xStr) { 
	x = std::stof(b_xStr);
}

void Vector2::SetY(float b_y) {
	y = b_y;
}

Vector2 Vector2::operator+(const Vector2& vector){
	Vector2 new_vector(x + vector.x, y + vector.y);
	return new_vector;
}