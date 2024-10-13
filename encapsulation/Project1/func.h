#pragma once
#include <iostream>



#ifndef FUNC_H__
#define FUNC_H__
/*
class test {
private:
	int a;

protected:
	int b;

public:
	int c;

	void DoStuff();
};

class Point {
	float x;
	float y;
	float z;
	Point();

public:
	std::string ToString();
};
*/

class MyVector2 {

	float x;
	float y;

public:
	MyVector2(float, float); // constructeur

	float GetPosX();
	void SetPosX(float X);

	float GetPosY();
	void SetPosY(float Y);

};

class Entity {

	MyVector2 position;  

public:
	Entity(float, float);

	virtual MyVector2 GetEntityPos();
	virtual void SetEntityPos(MyVector2 vector);

};

class AMovable {

	MyVector2 direction;
	float speed;

public:
	AMovable(MyVector2, float);

	virtual void SetDirection(MyVector2 vector);
	virtual void SetSpeed(float f);

	virtual MyVector2 MoveEntity();
};

class Alive {

	float full_life;
	float current_life;

public:
	Alive(float);

	virtual float GetMaxLife();
	virtual float GetCurrentLife();
	virtual void ModifyLife(float modify);

};

class IAttacker {

public:
	virtual void Attack(Alive* HP, float attack_damage) = 0;

};

class StaticObject : public Entity {

public:
	StaticObject(MyVector2);

};

class BreakableObject : public Entity, public Alive {

public:
	BreakableObject(MyVector2, float);
	void ModifyLife(float modify) override;

};

class Mob : public Entity, public Alive, public AMovable {

public:
	Mob(MyVector2, float, MyVector2, float);

	void ModifyLife(float modify) override;

	MyVector2 MoveEntity() override;
};

class Player : public Entity, public Alive, public AMovable, public IAttacker {

public:
	Player(MyVector2, float, MyVector2, float, float);

	void ModifyLife(float modify) override;

	MyVector2 MoveEntity() override;

	void Attack(Alive* alive, float damage) override;
};


#endif
