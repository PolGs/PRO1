#include <iostream>
#include <cmath>

using namespace std;
struct Point{
    double x, y;
};

double dist(const Point& a, const Point& b){
    int dx, dy;
    dx = a.x - b.x;
    dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}
