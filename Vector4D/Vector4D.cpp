#include <iostream>
#include "Vector4D.hpp"

using namespace std;

double Vector4D::getA() const
{
    return a;
}
double Vector4D::getB() const
{
    return b;
}
double Vector4D::getC() const
{
    return c;
}
double Vector4D::getD() const
{
    return d;
}

void Vector4D::setA(double a)
{
    this->a = a;
}
void Vector4D::setB(double b)
{
    this->b = b;
}
void Vector4D::setC(double c)
{
    this->c = c;
}
void Vector4D::setD(double d)
{
    this->d = d;
}


Vector4D::Vector4D(double a, double b, double c, double d)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

const double Vector4D::operator[](const int selection) const
{
    if (selection == 0) return a;
    else if (selection == 1) return b;
    else if (selection == 2) return c;
    else if (selection == 3) return d;
}

double& Vector4D::operator[](const int selection)
{
    if (selection == 0) return a;   
    else if (selection == 1) return b;
    else if (selection == 2) return c;
    else if (selection == 3) return d;
}

Vector4D Vector4D::operator+(const Vector4D& vector) const  
{
    return Vector4D(a + vector.a, b + vector.b, c + vector.c, d + vector.d);
}

Vector4D& Vector4D::operator+=(const Vector4D& vector)
{
    this->a += vector.a;
    this->b += vector.b;
    this->c += vector.c;
    this->d += vector.d;

    return *this;
}

Vector4D Vector4D::operator-(const Vector4D& vector) const
{
    return Vector4D(a - vector.a, b - vector.b, c - vector.c, d - vector.d);
}

Vector4D& Vector4D::operator-=(const Vector4D& vector)
{
    this->a -= vector.a;
    this->b -= vector.b;
    this->c -= vector.c;
    this->d -= vector.d;

    return *this;
}

Vector4D Vector4D::operator*(const Vector4D& vector) const
{
    return Vector4D(a * vector.a, b * vector.b, c * vector.c, d * vector.d);
}

Vector4D& Vector4D::operator*=(const Vector4D& vector)
{
    this->a *= vector.a;
    this->b *= vector.b;
    this->c *= vector.c;
    this->d *= vector.d;

    return *this;
}

Vector4D Vector4D::operator*(const double p) const
{
    return Vector4D(p * a, p * b, p * c, p * d);
}

Vector4D& Vector4D::operator*=(const double p)
{
    this->a *= a*p;
    this->b *= b*p;
    this->c *= c*p;
    this->d *= d*p;

    return *this;
}

Vector4D Vector4D::operator/(const Vector4D& vector) const
{
    return Vector4D(a / vector.a, b / vector.b, c / vector.c, d / vector.d);
}

Vector4D& Vector4D::operator/=(const Vector4D& vector)
{
    this->a /= vector.a;
    this->b /= vector.b;
    this->c /= vector.c;
    this->d /= vector.d;

    return *this;
}

bool Vector4D::operator==(const Vector4D& vector) const
{
    return a == vector.a && b == vector.b && c == vector.c && d == vector.d;
}

bool Vector4D::operator!=(const Vector4D& vector) const
{
    return !(*this == vector);
}

bool Vector4D::operator!() const
{
    return a == 0 && b == 0 && c == 0 && d == 0;
}

Vector4D Vector4D::operator-() const
{
    return Vector4D(-a, -b, -c, -d);
}

bool Vector4D::operator<(const Vector4D& vector) const
{
    if (a < vector.a || b < vector.b || c < vector.c || d < vector.d)return true;
    else return false;
}


bool Vector4D::operator>(const Vector4D& vector) const
{
    if (a > vector.a || b > vector.b || c > vector.c || d > vector.d)return true;
    else return false;
}

bool Vector4D::operator<=(const Vector4D& vector) const
{
    if (a >= vector.a || b >= vector.b || c >= vector.c || d >= vector.d)return false;
    else return true;
}

bool Vector4D::operator>=(const Vector4D& vector) const
{
    if (a <= vector.a || b <= vector.b || c <= vector.c || d <= vector.d)return true;
    else return false;;
}