
/*Q1. 1.	Write a program to generate 20 points of the ellipse, (x-2)2/4 + (y+3)2/9 = 25, with horizontal inclination ? = 45o.*/
#include <stdio.h>
#include <math.h>

int main() {
    // Define ellipse parameters
    double a = 2 * sqrt(25);
    double b = 3 * sqrt(25);
    double h = 2;
    double k = -3;
    double theta = M_PI / 4;

    // Generate points
    int num_points = 20;
    double delta = 2 * M_PI / num_points;
    for (int i = 0; i < num_points; i++) {
        double t = i * delta;
        double x = a * cos(t) * cos(theta) - b * sin(t) * sin(theta) + h;
        double y = a * cos(t) * sin(theta) + b * sin(t) * cos(theta) + k;
        printf("(%lf, %lf)\n", x, y);
    }

    return 0;
}