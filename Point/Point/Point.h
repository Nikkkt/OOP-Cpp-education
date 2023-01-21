#pragma once
class Point {
private:
    float x;
    float y;

public:
    Point();
    Point(float x, float y);

    void Print();

    Point operator+(Point b);
    Point operator-(Point b);

    Point operator+(float b);
    Point operator-(float b);

    Point operator*(Point b);
    Point operator*(float b);

    Point& operator++();
    Point& operator--();

    Point operator++(int);
    Point operator--(int);

    float GetX();
    float GetY();

    void SetX(float x);
    void SetY(float y);
};