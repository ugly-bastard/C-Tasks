#include<stdio.h>
#include<math.h>

int main(){
    // Task 24: Modify the previous program to run repeatedly along with a exit condition using goto.
    int cum;
    double n1, n2;
    while (cum != 8){
        printf("\t1] +\t:\tAddition\n\t2] -\t:\tSubtraction\n\t3] *\t:\tMultiplication\n\t4] /\t:\tDivision\n\t5] %%\t:\tModulus\n\t6] ^y\t:\tPower\n\t7] $\t:\tSquare Root\n\t8] x\t:\tClose\n");
        printf("Select the number in front of an operation to perform it: ");
        scanf(" %d", &cum);
        switch (cum){
            case 1:
                printf("Enter two digits to add [x+y]:\n");
                scanf("%lf %lf", &n1, &n2);
                printf("The addition of given numbers is: %.2lf + %.2lf = %.2lf\n", n1, n2, n1+n2);
                break;
            case 2:
                printf("Enter two digits to subtract [x-y]:\n");
                scanf("%lf %lf", &n1, &n2);
                printf("The subtraction of given numbers is: %.2lf - %.2lf = %.2lf\n", n1, n2, n1-n2);
                break;
            case 3:
                printf("Enter two digits to multiply [x*y]:\n");
                scanf("%lf %lf", &n1, &n2);
                printf("The multiplication of given numbers is: %.2lf * %.2lf = %.2lf\n", n1, n2, n1*n2);
                break;
            case 4:
                printf("Enter two digits to divide [x/y]:\n");
                scanf("%lf %lf", &n1, &n2);
                printf("The division of given numbers is: %.2lf / %.2lf = %.2lf\n", n1, n2, n1/n2);
                break;
            case 5:
                printf("Enter two digits to find modulus (remainder after division) [x%y]:\n");
                scanf("%lf %lf", &n1, &n2);
                printf("The remainder after division given numbers is: %.2lf % %.2lf = %.2lf\n", n1, n2, fmod(n1, n2));
                break;
            case 6:
                printf("Enter two digits to raise to power [x^y]:\n");
                scanf("%lf %lf", &n1, &n2);
                printf("The power raised of first number to second is: %.2lf ^ %.2lf = %.2lf\n", n1, n2, pow(n1, n2));
                break;
            case 7:
                printf("Enter two digits to find the square root [x^-2]:\n");
                scanf("%lf", &n1);
                printf("The square root of given number is: %.2lf ^-2 = %.2lf\n", n1, sqrt(n1));
                break;
            case 8:
                printf("Exiting the Calculator.\n");
                cum == 8;
                break;
            default:
                printf("Choose between the given operators.\n");
                break;
        }
    }
    return 0;
}
