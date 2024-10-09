#pragma once
#include <stdlib.h>
#include <iostream>

#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <string>

class Vector2 {
    float x;
    float y;

public:
    Vector2(float b_x, float b_y);

    float GetX();
    float GetY();

    void SetX(float b_x);
    void SetX(std::string b_xStr);

    void SetY(float b_y);

    Vector2 operator+(const Vector2& vector);
};

#endif
