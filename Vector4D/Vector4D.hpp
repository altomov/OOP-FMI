#pragma once

class Vector4D {

private:
    double a, b, c, d;

public:

    double getA() const;
    double getB() const;
    double getC() const;
    double getD() const;

    void setA(double);
    void setB(double);
    void setC(double);
    void setD(double);

    Vector4D(double a, double b, double c, double d = 0);

    const double operator[](const int) const;

    double& operator[](const int);

    Vector4D operator+(const Vector4D&) const;

    Vector4D& operator+=(const Vector4D&);

    Vector4D operator-(const Vector4D&) const;

    Vector4D& operator-=(const Vector4D&);

    Vector4D operator*(const Vector4D&) const;

    Vector4D& operator*=(const Vector4D&);

    Vector4D operator*(const double) const;

    Vector4D& operator*=(const double);

    Vector4D operator/(const Vector4D&) const;

    Vector4D& operator/=(const Vector4D&);

    bool operator==(const Vector4D&) const;

    bool operator!=(const Vector4D&) const;

    bool operator!() const;

    Vector4D operator-() const;

    bool operator<(const Vector4D&) const;

    bool operator>(const Vector4D&) const;

    bool operator<=(const Vector4D&) const;

    bool operator>=(const Vector4D&) const;

};