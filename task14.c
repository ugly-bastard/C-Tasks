#include<stdio.h>

int main(){
    // Task 14: Find the greatest number amongst three entered numbers using conditional operator.
    int n1, n2, n3;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
     printf("%d is the greatest number.", n1>=n2 && n1>=n3 ? n1 : n2>=n3 ? n2 : n3);
    return 0;
}
