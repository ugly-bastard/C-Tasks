#include<stdio.h>

int main(){
    // Task 10: Calculate the gross salary of the employee given the basic salary.
    // Travelling Allowance, Dearness Allowance and Home Rental Allowance is 20%, 80% and 15% of Basic Salary respectively.
    float BS, TA, DA, HRA, TGS;
    printf("Enter the basic salary: ");
    scanf("%f", &BS);
    TA = BS*20/100;
    DA = BS*80/100;
    HRA = BS*15/100;
    TGS = BS+TA+DA+HRA;
    printf("___________________________________________________\n\n");
    printf("1.      Basic Salary            =       %.2f\n", BS);
    printf("2.      Travelling Allowance    =       %.2f\n", TA);
    printf("3.      Dearness Allowance      =       %.2f\n", DA);
    printf("4.      Home Rental Allowance   =       %.2f\n", HRA);
    printf("___________________________________________________\n\n");
    printf("        Total Gross Salary      =       %.2f\n", TGS);
    printf("___________________________________________________");
    return 0;
}
