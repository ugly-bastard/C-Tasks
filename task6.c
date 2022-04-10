#include <stdio.h>

int main(){
    // Task 6: Calculate the simple interest, taking principal, rate of interest and no. of years as inputs from user.
    float SI, P, ROI, Y;
    printf("Enter Principle value: ");
    scanf("%f", &P);
    printf("Enter Rate of Interest: ");
    scanf("%f", &ROI);
    printf("Enter Number of Years: ");
    scanf("%f", &Y);

    SI = (P*ROI*Y)/100;

    printf("\nSimple interest is %f", SI);
    return 0;
}
