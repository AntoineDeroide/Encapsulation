#include <stdio.h>
#include <iostream>
#include<string>
#include <sstream>

#include "test.h"

using namespace std;

Window::Window(std::string b_window_name, int b_window_width, int b_window_height) : window_name(b_window_name), window_width(b_window_width), window_height(b_window_height) {}

void Window::SetWindowName(std::string name) {

	window_name = name;

}

void Window::SetWindowWidth(int width) {

	window_width = width;

}

void Window::SetWindowHeight(int height) {

	window_height = height;

}

std::string Window::GetWindowName(void) {

	return window_name;

}

int Window::GetWindowWidth(void) {

	return window_width;

}

int Window::GetWindowHeight(void) {

	return window_height;

}

//

Sprite::Sprite(std::string b_name, int b_sprite_width, int b_sprite_height) : sprite_name(b_name), sprite_width(b_sprite_width), sprite_height(b_sprite_height){}

void Sprite::SetSpriteName(std::string name) {

	sprite_name = name;
	
}

void Sprite::SetSpriteWidth(int width) {

	sprite_width;

}

void Sprite::SetSpriteHeight(int height) {

	sprite_height = height;

}
