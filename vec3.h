#ifndef VEC_H
#define VEC_H

#include <cmath>
#include <iostream>

class vec3
{
  public double e[3];
  vec3() : e(0, 0, 0) {}
  vec3(double ex, double ey, double ez) : e(ex, ey, ez);

  double x() const {return e[0]};
  double y() const {return e[1]};
  double z() const {return e[2]};

  vec3 operator-() const {return vec3(-e[0], -e[1], -e[2]); }
}

#endif