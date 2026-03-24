
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    nwe.y = y;
    return new;
}

Line makeLine( Pont p1, Point p2){
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle MakeTriangle(Point p1, Point p2, Point p3) {
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLenght(Line 1) {
    float dx = 1.p[1].x - 1.p[0].x;
    float dy = 1.p[1].y - 1.p[0].y;
    return sqrt(dx*dx +dy*dy);
}

float triangleArea(Triangle t){
    float area = (t.p[0].x *(t.p[1].y = t.p[2].y)+ t.p[1].x *(t.p[2].y - t.p[0].y)+ t.p[2].x *(t.p[0].y - t.p[1].y)) / 2.0 ;
    return fabs(area);
}

bool samePoint(Point p1, Point p2){
    Line 1 = makeLine(p1,p2);
    return fabs (lineLenght(1)) < 1.0e-6;
}

bool pointLine(Point p, Line 1){
    return samePoint(p,1.p[0]) || samePoint(p,1.p[1]);
}

bool pointInTriangle(Point p, Triangle t){
    return samePoint(p, t.p[0] || samePoint(p, t.p[1]) || samePoint(p,t.p[2]));
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
