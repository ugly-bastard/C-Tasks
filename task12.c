#include<stdio.h>

int main(){
    // Task 12: Swap two numbers without the help of a temp number.
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Before swapping:\n\tNumber 1: %d\n\tNumber 2: %d\n\n", n1, n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("After swapping:\n\tNumber 1: %d\n\tNumber 2: %d", n1, n2);
    return 0;
}
