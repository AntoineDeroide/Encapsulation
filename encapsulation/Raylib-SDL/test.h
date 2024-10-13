#pragma once

#include <string>
#include <sstream>
#include <string.h>

#ifndef TEST_H__
#define TEST_H__

class Window{ // abstraite : au moins une fonction virtuelle pure

	std::string window_name;

	int window_width;
	int window_height;

public:
	Window(std::string, int, int);

	void SetWindowName(std::string name);
	void SetWindowWidth(int width);
	void SetWindowHeight(int height);

	std::string GetWindowName();
	int GetWindowWidth();
	int GetWindowHeight();

	

};

class Sprite{ // abstraite : au moins une fonction virtuelle pure

	std::string sprite_name;

	int sprite_width;
	int sprite_height;

public:
	Sprite(std::string, int, int);

	void SetSpriteName(std::string name);
	void SetSpriteWidth(int width);
	void SetSpriteHeight(int height);

	std::string GetSpriteName();
	int GetSpriteWidth(int width);
	int GetSpriteHeight(int height);




};






#endif 