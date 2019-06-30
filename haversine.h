#ifndef HAVERSINE_H
#define HAVERSINE_H

#include <math.h>

#define pii 3.14159265358979323846264338327950288419717
#define rad 6371

// == Classes ==
class Point
{
public:
    double latitude, longitude;
};

// == Prototipo Funcoes
double distance(Point a, Point b);

// == Funcoes ==
double distance(Point a, Point b)
{
    // Distancia entre latitudes
    // e longitudes
    double dLat = (b.latitude - a.latitude) *
                  pii / 180.0;
    double dLon = (b.longitude - a.longitude) *
                  pii / 180.0;

    // Converte para Radianos
    double lat1 = (a.latitude) * pii / 180.0;
    double lat2 = (b.latitude) * pii / 180.0;

    // Formula
    double aa = pow(sin(dLat / 2), 2) +
                pow(sin(dLon / 2), 2) *
                    cos(lat1) * cos(lat2);
    double c = 2 * asin(sqrt(aa));
    return rad * c;
}
#endif