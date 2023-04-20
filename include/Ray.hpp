/*
** EPITECH PROJECT, 2023
** raytracer_bootstrap
** File description:
** Ray
*/

#ifndef RAY_HPP_
#define RAY_HPP_

#include "Step0.hpp"

namespace RayTracer {

    class Ray {
        public:
            Ray() = default;
            Ray(const Math::Point3D &center, const Math::Vector3D &vector);
            Ray(const Ray &ray);
            Ray &operator=(Ray ray);
            ~Ray();

            Math::Point3D _center;
            Math::Vector3D _vector;

        protected:
        private:
    };

    class Sphere {
        public:
            Sphere(const Math::Point3D &center, double radius);
            ~Sphere();

            bool hits(const RayTracer::Ray &ray) const;

        protected:
        private:
            Math::Point3D _center;
            double _radius;
    };

    class Rectangle3D {
        public:
            Rectangle3D();
            ~Rectangle3D();

            Math::Point3D _origin;
            Math::Vector3D _bottom_side;
            Math::Vector3D _left_side;

            Math::Point3D pointAt(double u, double v);

        protected:
        private:
    };

    class Camera {
        public:
            Camera();
            ~Camera();

            Math::Point3D _origin;
            Rectangle3D _screen;

            Ray ray(double u, double v);

        protected:
        private:
    }
}

#endif /* !RAY_HPP_ */
