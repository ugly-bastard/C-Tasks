#include<stdio.h>

int main(){
    // Task 20: Check if the numbers entered are sides of a right angled triangle
    // Basically pythagorean triplets
    int s1, s2, s3;
    printf("Enter first side of triangle: ");
    scanf("%d", &s1);
    printf("Enter second side of triangle: ");
    scanf("%d", &s2);
    printf("Enter third side of triangle: ");
    scanf("%d", &s3);
    if (s1<=s2+s3 && s1*s1 == s2*s2 + s3*s3 || s2<=s1+s3 && s2*s2 == s1*s1 + s3*s3 || s3<=s1+s2 && s3*s3 == s1*s1 + s2*s2){
        printf("The entered sides make a right angled triangle.");
    } else {
        printf("The entered sides don't make a right angled triangle.");
    }
    return 0;
}
