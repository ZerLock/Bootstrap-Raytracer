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
    double a = (pow(ray._vector._x) + pow(ray._vector._y) + pow(ray._vector._z));
    double b = 2 * (ray._vector._x * ray._center._x + ray._vector._y * ray._center._y + ray._vector._z * ray._center._z);
    double c = (pow(ray._center._x) + pow(ray._center._y) + pow(ray._center._z) - pow(_radius));

    auto d = pow(b) - 4 * a * c;
    return d < 0;
}
