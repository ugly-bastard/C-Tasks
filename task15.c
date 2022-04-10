#include<stdio.h>

int main(){
    // Task 15: Find sum of two int without using '+' operator.
    int n1, n2, a1;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    a1 = -(-n1-n2);
    printf("\nSum of the numbers: %d", a1);
    return 0;
}
