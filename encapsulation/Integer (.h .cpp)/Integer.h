#pragma once

#ifndef Integer_H__
#define Integer_H__

class Integer {

	int number;

public:

	Integer();
	Integer(int b_int);

	int operator+(const Integer& to_add);
	int operator+=(const Integer& to_add);
	int operator-(const Integer& to_substract);
	int operator-=(const Integer& to_substract);
	int operator*(const Integer& to_multiply);
	int operator*=(const Integer& to_multiply);
	int operator/(const Integer& to_divide);
	int operator/=(const Integer& to_divide);
	int operator%(const Integer& to_modulo);
	int operator%=(const Integer& to_modulo);
	int operator<<(const Integer& to_leftshift);

	int Pow(const Integer& exponent);

};



#endif
