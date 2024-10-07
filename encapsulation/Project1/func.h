#pragma once
#include <iostream>
#ifndef FUNC_H__
#define FUNC_H__

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
public:
	float x;
	float y;
	float z;

	std::string ToString(void);
};

#endif
