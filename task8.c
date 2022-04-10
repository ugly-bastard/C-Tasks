#include<stdio.h>

#define pi 3.141592

int main(){
    // Task 8: Calculate circumference and area of circle with help of constants.
    float rad, peri, area;
    printf("Enter Radius of the circle: ");
    scanf("%f", &rad);
    peri = 2*pi*rad;
    area = pi*rad*rad;
    printf("Perimeter of circle is %f", peri);
    printf("\nArea of circle is %f", area);
    return 0;
}
