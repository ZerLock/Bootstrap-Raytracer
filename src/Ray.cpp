/*
** EPITECH PROJECT, 2023
** raytracer_bootstrap
** File description:
** Ray
*/

#include "Ray.hpp"

RayTracer::Ray::Ray(const Math::Point3D &point, const Math::Vector3D &vector)
    : _point(point), _vector(vector)
{}

RayTracer::Ray::~Ray() {}

RayTracer::Ray::Ray(const RayTracer::Ray &ray)
{
    _point = ray._point;
    _vector = ray._vector;
}

RayTracer::Ray &RayTracer::Ray::operator=(RayTracer::Ray ray)
{
    _point = ray._point;
    _vector = ray._vector;
    return *this;
}

RayTracer::Sphere::Sphere(const Math::Point3D &center, double radius)
    : _center(center), _radius(radius)
{}

RayTracer::Sphere::~Sphere() {}

bool RayTracer::Sphere::hits(const RayTracer::Ray &ray) const
{
    return true;
}
