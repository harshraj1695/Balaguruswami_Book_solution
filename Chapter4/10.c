//Write a program to illustrate the use of symbolic constants in a real-life application.

#include <stdio.h>

#define PI 3.14

int main() {
    double radius, area;

    printf("Enter the radius of the circular object (in meters): ");
    scanf("%lf", &radius);

    // Calculate area
    area = PI * radius * radius;

    printf("The area of the circular object is: %.2lf square meters\n", area);

    return 0;
}
