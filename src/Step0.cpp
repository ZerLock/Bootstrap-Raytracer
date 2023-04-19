/*
** EPITECH PROJECT, 2023
** raytracer_bootstrap
** File description:
** Step0
*/

#include "Step0.hpp"

Math::Vector3D::Vector3D(double x, double y, double z)
    : _x(x), _y(y), _z(z)
{}

Math::Vector3D::~Vector3D() {}

Math::Vector3D::Vector3D(const Math::Vector3D &vector)
    : _x(vector._x), _y(vector._y), _z(vector._z)
{}

Math::Vector3D &Math::Vector3D::operator=(Math::Vector3D vector)
{
    _x = vector._x;
    _y = vector._y;
    _z = vector._z;
    return *this;
}

double Math::Vector3D::length() const
{
    auto total = _x * _x + _y * _y + _z * _z;
    return sqrt(total);
}

double Math::Vector3D::dot(const Math::Vector3D &vector) const
{
    auto a = _x * vector._x;
    auto b = _y * vector._y;
    auto c = _z * vector._z;
    return a + b + c;
}

Math::Vector3D Math::Vector3D::operator+(const Math::Vector3D &vector) const
{
    Math::Vector3D a;

    a._x = _x + vector._x;
    a._y = _y + vector._y;
    a._z = _z + vector._z;
    return a;
}

Math::Vector3D &Math::Vector3D::operator+=(const Math::Vector3D &vector)
{
    _x += vector._x;
    _y += vector._y;
    _z += vector._z;
    return *this;
}

Math::Vector3D Math::Vector3D::operator-(const Math::Vector3D &vector) const
{
    Math::Vector3D a;

    a._x = _x - vector._x;
    a._y = _y - vector._y;
    a._z = _z - vector._z;
    return a;
}

Math::Vector3D &Math::Vector3D::operator-=(const Math::Vector3D &vector)
{
    _x -= vector._x;
    _y -= vector._y;
    _y -= vector._z;
    return *this;
}

Math::Vector3D Math::Vector3D::operator*(const Math::Vector3D &vector) const
{
    Math::Vector3D a;

    a._x = _x * vector._x;
    a._y = _y * vector._y;
    a._z = _z * vector._z;
    return a;
}

Math::Vector3D Math::Vector3D::operator*(const double mult) const
{
    Math::Vector3D a;

    a._x = _x * mult;
    a._y = _y * mult;
    a._z = _z * mult;
    return a;
}

Math::Vector3D &Math::Vector3D::operator*=(const Math::Vector3D &vector)
{
    _x *= vector._x;
    _y *= vector._y;
    _y *= vector._z;
    return *this;
}

Math::Vector3D &Math::Vector3D::operator*=(const double mult)
{
    _x *= mult;
    _y *= mult;
    _y *= mult;
    return *this;
}

Math::Vector3D Math::Vector3D::operator/(const Math::Vector3D &vector) const
{
    Math::Vector3D a;

    a._x = _x / vector._x;
    a._y = _y / vector._y;
    a._z = _z / vector._z;
    return a;
}

Math::Vector3D Math::Vector3D::operator/(const double div) const
{
    Math::Vector3D a;

    a._x = _x / div;
    a._y = _y / div;
    a._z = _z / div;
    return a;
}

Math::Vector3D &Math::Vector3D::operator/=(const Math::Vector3D &vector)
{
    if (vector._x == 0 || vector._y == 0 || vector._z == 0) {
        throw Math::Error("Math: division by zero");
    }
    _x /= vector._x;
    _y /= vector._y;
    _y /= vector._z;
    return *this;
}

Math::Vector3D &Math::Vector3D::operator/=(const double div)
{
    if (div == 0) {
        throw Math::Error("Math: division by zero");
    }
    _x /= div;
    _y /= div;
    _y /= div;
    return *this;
}

Math::Point3D::Point3D(double x, double y, double z)
    : _x(x), _y(y), _z(z)
{}

Math::Point3D::~Point3D() {}

Math::Point3D::Point3D(const Math::Point3D &point)
{
    _x = point._x;
    _y = point._y;
    _z = point._z;
}

Math::Point3D &Math::Point3D::operator=(Math::Point3D point)
{
    _x = point._x;
    _y = point._y;
    _z = point._z;
    return *this;
}

Math::Point3D Math::Point3D::operator+(const Math::Vector3D &vector) const
{
    Math::Point3D a;

    a._x = _x + vector._x;
    a._y = _y + vector._y;
    a._z = _z + vector._z;
    return a;
}

Math::Error::Error(const std::string &msg)
    : _msg(msg)
{}

Math::Error::~Error() {}

const char *Math::Error::what() const
{
    return _msg.c_str();
}
