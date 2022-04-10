#include <stdio.h>

int main(){
    // Task 7: Calculate the sum and average of three numbers.
    int n1, n2, n3, sum, avg;
    printf("Enter Number 1: ");
    scanf("%d", &n1);
    printf("Enter Number 2: ");
    scanf("%d", &n2);
    printf("Enter Number 3: ");
    scanf("%d", &n3);
    sum = n1+n2+n3;
    avg = sum/3;
    printf("\nSum of the numbers is %d", sum);
    printf("\nAverage of the numbers is %d", avg);
    return 0;
}
