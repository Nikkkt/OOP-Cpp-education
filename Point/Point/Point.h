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

    bool operator < (const Point& p) const;

    float GetX() const;
    float GetY() const;

    void SetX(float x);
    void SetY(float y);
};

std::ostream& operator << (std::ostream& o, const Point& p);
std::istream& operator >> (std::istream& c, Point& p);