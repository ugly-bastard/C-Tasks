#include<stdio.h>

int main(){
    // Task 19: Find the body mass index of the user when user enters height and weight.
    // Also find the BMI category to which the user belongs with elseif ladder.
    //      BMI Categories:
    // Underweight = <18.5
    // Normal weight = 18.5–24.9
    // Overweight = 25–29.9
    // Obesity = BMI of 30 or greater
    float ht, wt, BMI;
    printf("Enter your height (in metres): ");
    scanf("%f", &ht);
    printf("Enter your weight (in kgs): ");
    scanf("%f", &wt);
    BMI = wt/(ht*ht);
    printf("Your BMI is %f.\n", BMI);
    if(BMI <= 18.5){
        printf("You are Underweight.");
    } else if(BMI >= 18.5 && BMI <= 24.9){
        printf("You are Normal weight.");
    } else if(BMI >= 25 && BMI <= 29.9){
        printf("You are Overweight.");
    } else {
        printf("You are Obese.");
    }
    return 0;
}
