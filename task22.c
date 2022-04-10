#include<stdio.h>

int main(){
    // Task 22: Read weekday number and print weekday name using switch.
    // Week starts from monday -> 0, tuesday -> 1, etc.
    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);
    switch(day){
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        case 6:
            printf("Sunday");
            break;
        default:
            printf("Enter the day number between 0 and 6. Monday -> 0, Tuesday -> 1, etc.");
    }
    return 0;
}
