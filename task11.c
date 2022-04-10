#include<stdio.h>

int main(){
    // Task 11: Swap two numbers with the help of a temp number.
    int n1, n2, swap;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("\nBefore swapping:\n\tNumber 1: %d\n\tNumber 2: %d\n\n", n1, n2);
    swap = n1;
    n1 = n2;
    n2 = swap;
    printf("\nAfter swapping:\n\tNumber 1: %d\n\tNumber 2: %d", n1, n2);
    return 0;
}
