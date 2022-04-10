#include<stdio.h>
#include<math.h>

#define pi 3.14159265

int main(){
    // Task 25: Find the height of the building when the user enters the distance from the building and the angle of elevation in degrees.
    double dist, angl, hgt;
    printf("Enter the distance from the building (metres): ");
    scanf("%lf", &dist);
    printf("Enter the angle of elevation (degrees): ");
    scanf("%lf", &angl);
    hgt = dist * tan(angl*(pi/180));
    printf("Height of building: %.2lf metres", hgt);
    return 0;
}
