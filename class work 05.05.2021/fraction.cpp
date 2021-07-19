#include "fraction.h"
using namespace std;
fraction::operator float()
{
	return numerator/denominator;
}

void fraction::show()
{
	cout << this->numerator << "/" << this->denominator << endl;
}

fraction::fraction()
{
	numerator = 0;
	denominator = 0;
}

fraction::fraction(const unsigned int num, const unsigned int den)
{
	this->numerator = num;
	this->denominator = den;
}

fraction fraction::operator+(const fraction& obj)
{
	return fraction(obj.denominator *this->numerator+this->denominator*obj.numerator, obj.denominator*this->denominator);
}

fraction fraction::operator-(const fraction& obj)
{
	return fraction(obj.denominator * this->numerator - this->denominator * obj.numerator, obj.denominator * this->denominator);
}

fraction fraction::operator*(const fraction& obj)
{
	return fraction(obj.numerator* this->numerator, obj.denominator * this-> denominator);
}

fraction fraction::operator/(const fraction& obj)
{
	return fraction(this-> numerator*obj.denominator, this->denominator * obj.numerator );
}

fraction fraction::operator+(const int& value)
{
	return fraction(this->numerator+this->denominator*value,this->denominator);
}

fraction fraction::operator-(const int& value)
{
	return fraction(this->numerator - this->denominator * value, this->denominator);
}
