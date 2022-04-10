#include<stdio.h>

int main(){
    // Task 13: Check if the number is even or not using conditional operator.
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    n%2==0 ? printf("%d is Even.", n) : printf("%d is Odd.", n);
    return 0;
}
