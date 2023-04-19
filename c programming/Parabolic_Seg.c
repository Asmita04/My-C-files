/*2.	Write a program to generate 12 points on parabolic segment y2 = 8x in the first quadrant 1 = x = 4.*/
#include <stdio.h>
#include <math.h>

int main() {
    // Define segment boundaries
    double x_min = 1;
    double x_max = 4;

    // Generate points
    int num_points = 12;
    double delta = (x_max - x_min) / (num_points - 1);
    for (int i = 0; i < num_points; i++) {
        double x = x_min + i * delta;
        double y = 2 * sqrt(8 * x);
        printf("(%lf, %lf)\n", x, y);
    }

    return 0;
}