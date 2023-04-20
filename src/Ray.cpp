/*
** EPITECH PROJECT, 2023
** raytracer_bootstrap
** File description:
** Ray
*/

#include "Ray.hpp"

RayTracer::Ray::Ray(const Math::Point3D &center, const Math::Vector3D &vector)
    : _center(center), _vector(vector)
{}

RayTracer::Ray::~Ray() {}

RayTracer::Ray::Ray(const RayTracer::Ray &ray)
{
    _center = ray._center;
    _vector = ray._vector;
}

RayTracer::Ray &RayTracer::Ray::operator=(RayTracer::Ray ray)
{
    _center = ray._center;
    _vector = ray._vector;
    return *this;
}

RayTracer::Sphere::Sphere(const Math::Point3D &center, double radius)
    : _center(center), _radius(radius)
{}

RayTracer::Sphere::~Sphere() {}

double pow(double x) {
    return x * x;
}

bool RayTracer::Sphere::hits(const RayTracer::Ray &ray) const
{
    double a = (Math::pow(ray._vector._x) + Math::pow(ray._vector._y) + Math::pow(ray._vector._z));
    double b = 2 * (ray._vector._x * ray._center._x + ray._vector._y * ray._center._y + ray._vector._z * ray._center._z);
    double c = (Math::pow(ray._center._x) + Math::pow(ray._center._y) + Math::pow(ray._center._z) - Math::pow(_radius));

    auto d = Math::pow(b) - 4 * a * c;
    return d < 0;
}

RayTracer::Rectangle3D::Rectangle3D()
    : _origin(), _bottom_side(), _left_side()
{}

RayTracer::Rectangle3D::~Rectangle3D() {}

Math::Point3D RayTracer::Rectangle3D::pointAt(double u, double v)
{
    return Math::Point3D(u, v, _origin._z);
}

RayTracer::Camera::Camera()
    : _origin(), _screen()
{}

RayTracer::Camera::~Camera() {}

RayTracer::Ray RayTracer::Camera::ray(double u, double v)
{
    return RayTracer::Ray(_origin, Math::Vector3D(u, v, _origin._z));
}
