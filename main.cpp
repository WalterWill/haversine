#include <iostream>
#include "haversine.h"



// Teste
int main()
{
    Point a, b;

    a.latitude = -29.679512;
    a.longitude = -51.100952;

    b.latitude = -50;
    b.longitude = 12;

    printf("%.4f KM\n", distance(a,b));
    return 0;
}

