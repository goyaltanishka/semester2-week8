
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    Point p2 =  makePoint(3.0, 4.0);
    Pont p3  = makePoint(6.0, 0,0);
    Point p4 = makePoint(0.0,0.0);

    printf("p1:(%.1f, %.1f)\n", p1.x, p1.y);
    printf("p2:(%.1f, %.1f)\n", p2.x, p2.y);

    printf("\nsamePoint(p1,p4): %s (expect true)\n", samePoint(p1,p4) ? "true":"false");
    printf("samePoint(p1,p2): %s (expect fasle)\n", samePoint(p1,p2)? "true":"false");

    Line 1 = makeLine(p1,p2);
    printf("\nlineLenght(p1->p2): %.4f (expect 5.0000)\n", lineLength(1));

    printf("\npointInLine(p1,1): %s (expect true)\n", pointInLine(p1,1)? "true":"false");
    printf("pointInLine(p3, l): %s (expect false)\n", pointInLine(p3, l) ? "true" : "false");
     Triangle t = makeTriangle(p1, p2, p3);
    printf("\ntriangleArea(p1,p2,p3): %.4f (expect 12.0000)\n", triangleArea(t));
 
    // --- pointInTriangle ---
    printf("\npointInTriangle(p2, t): %s (expect true)\n",  pointInTriangle(p2, t) ? "true" : "false");
    Point p5 = makePoint(1.0, 1.0);
    printf("pointInTriangle(p5, t): %s (expect false)\n", pointInTriangle(p5, t) ? "true" : "false");
    
    // test your code by calling the functions and printing the output 
    
    return 0;
}