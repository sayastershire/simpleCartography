namespace constants {
    constexpr double EARTH_EQUATOR_RADIUS = 6378.137; // km
    constexpr double EARTH_POLAR_RADIUS = 6356.7523; // km
    constexpr double EARTH_RADIUS = (1/3) * ((2*EARTH_EQUATOR_RADIUS) + EARTH_POLAR_RADIUS);
}

// courtesy of orthodromic distance
double coordinatesToMetres(double, double);