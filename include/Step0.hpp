/*
** EPITECH PROJECT, 2023
** raytracer_bootstrap
** File description:
** Step0
*/

#ifndef STEP0_HPP_
#define STEP0_HPP_

#include <cmath>
#include <exception>
#include <string>

namespace Math {

    class Error: public std::exception {
                public:
                    Error(const std::string &msg);
                    ~Error();

                    const char *what() const noexcept;

                protected:
                private:
                    std::string _msg;
            };

    class Vector3D {
        public:
            Vector3D(double x = 0, double y = 0, double z = 0);
            Vector3D(const Vector3D &vector);
            Vector3D &operator=(Vector3D vector);
            ~Vector3D();

            double length() const;
            double dot(const Vector3D &vector) const;

            Vector3D operator+(const Vector3D &vector) const;
            Vector3D &operator+=(const Vector3D &vector);

            Vector3D operator-(const Vector3D &vector) const;
            Vector3D &operator-=(const Vector3D &vector);

            Vector3D operator*(const Vector3D &vector) const;
            Vector3D operator*(const double mult) const;
            Vector3D &operator*=(const Vector3D &vector);
            Vector3D &operator*=(const double mult);

            Vector3D operator/(const Vector3D &vector) const;
            Vector3D operator/(const double div) const;
            Vector3D &operator/=(const Vector3D &vector);
            Vector3D &operator/=(const double div);

            double _x;
            double _y;
            double _z;

        protected:
        private:
    };

    class Point3D {
        public:
            Point3D(double x = 0, double y = 0, double z = 0);
            Point3D(const Point3D &point);
            Point3D &operator=(Point3D point);
            ~Point3D();

            Point3D operator+(const Vector3D &vector) const;

            double _x;
            double _y;
            double _z;

        protected:
        private:
    };

}

#endif /* !STEP0_HPP_ */
