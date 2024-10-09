#include <stdio.h>
#include <iostream>

#include "Integer.h"

Integer::Integer(){}

Integer::Integer(int b_int) : number(b_int) {}

int Integer::operator+(const Integer& to_add) {
	int new_int = (number + to_add.number);
	return new_int;
}

int Integer::operator+=(const Integer& to_add) {
	number += to_add.number;
	return number;
}

int Integer::operator-(const Integer& to_substract) {
	int new_int = (number - to_substract.number);
	return new_int;
}

int Integer::operator-=(const Integer& to_substract) {
	number -= to_substract.number;
	return number;
}

int Integer::operator*(const Integer& to_multiply) {
	int new_int = (number * to_multiply.number);
	return new_int;
}

int Integer::operator*=(const Integer& to_multiply) {
	number *= to_multiply.number;
	return number;
}

int Integer::operator/(const Integer& to_divide) {
	int new_int = (number / to_divide.number);
	return new_int;
}

int Integer::operator/=(const Integer& to_divide) {
	number /= to_divide.number;
	return number;
}

int Integer::operator%(const Integer& to_divide) {
	int new_int = number % to_divide.number;
	return new_int;
}

int Integer::operator%=(const Integer& to_modulo) {
	number % to_modulo.number;
	return number;
}

int Integer::operator<<(const Integer& to_leftshift) {
	number << to_leftshift.number;
	return number;
}

int Integer::Pow(const Integer& exponent) {
	int new_int = number;

	for (int i = 0; i < exponent.number - 1; i++) {
		new_int += number;
	}

	return new_int;
}
