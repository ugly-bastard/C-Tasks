#include<stdio.h>

int main(){
    // Task 18: Check if the year entered is a leap year or not.
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("A leap year.");
    } else if(year % 100 == 0){
        printf("Not a leap year.");
    } else if(year % 4 == 0){
        printf("A leap year.");
    } else{
        printf("Not a leap year.");
    }
    return 0;
}
