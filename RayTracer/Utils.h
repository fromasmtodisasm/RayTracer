#pragma once
#include <glm/glm.hpp>
////////////////////////////////////////////
using vec3 = glm::dvec3;
using color = vec3;
using point3 = vec3;
////////////////////////////////////////////
inline std::ostream& operator<<(std::ostream &out, const vec3 &v) {
    return out << v[0] << ' ' << v[1] << ' ' << v[2];
}
inline vec3 unit_vector(vec3 v) {
    return v / glm::length(v);
}
