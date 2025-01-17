#include <iostream>
#include "Point.h"

Point::Point() {
	x = y = 0.0;
}

Point::Point(float x, float y) {
	this->x = x;
	this->y = y;
}

void Point::Print() {
	printf("(%.02f, %.02f)\n", x, y);
}

Point Point::operator+(Point b) {
	return Point(this->x + b.x, this->y + b.y);
}

Point Point::operator-(Point b) {
	return Point(this->x - b.x, this->y - b.y);
}

Point Point::operator+(float b) {
	return Point(x + b, y + b);
}

Point Point::operator-(float b) {
	return Point(x - b, y - b);
}

Point Point::operator*(Point b) {
	return Point(this->x * b.x, this->y * b.y);
}

Point Point::operator*(float b) {
	return Point(this->x * b, this->y * b);
}

Point& Point::operator++() {
	x += 1;
	y += 1;
	return *this;
}

Point& Point::operator--() {
	x -= 1;
	y -= 1;
	return *this;
}

Point Point::operator++(int) {
	Point tmp(this->x, this->y);
	x += 1;
	y += 1;
	return tmp;
}

Point Point::operator--(int) {
	Point tmp(this->x, this->y);
	x -= 1;
	y -= 1;
	return tmp;
}

bool Point::operator<(const Point& p) const { return std::sqrt(std::pow(x, 2) + std::pow(y, 2)) < std::sqrt(std::pow(p.x, 2) + std::pow(p.y, 2)); }

float Point::GetX() const { return x; }
float Point::GetY() const { return y; }

void Point::SetX(float x) { this->x = x; }
void Point::SetY(float y) { this->y = y; }

std::ostream& operator<<(std::ostream& o, const Point& p) {
	o << "(" << p.GetX() << ", " << p.GetY() << ")";
	return o;
}

std::istream& operator>>(std::istream& c, Point& p) {
	float x, y;
	std::cout << "Enter X >> ";
	c >> x;
	std::cout << "Enter Y >> ";
	c >> y;

	p.SetX(x);
	p.SetY(y);

	return c;
}