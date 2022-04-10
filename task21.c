#include<stdio.h>
#include<math.h>

int main(){
    // Task 21: Find the roots of the quadratic equation with real roots using math library.
    double a, b, c, dscr, r1, r2, RealPart, ImgPart;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    dscr = ((b*b) - (4*a*c));
    if (dscr > 0){
        r1 = (-b - sqrt(dscr))/(2*a);
        r2 = (-b + sqrt(dscr))/(2*a);
        printf("The roots are real.\n\t Root 1 = %.2lf\n\t Root 2 = %.2lf", r1, r2);
    } else if (dscr == 0){
        r1 = r2 = (-b)/(2*a);
        printf("The roots are real and equal.\n\t Root 1 = Root 2 = %.2lf", r1);
    } else {
        RealPart = (-b)/(2*a);
        ImgPart = (sqrt(-dscr))/(2*a);
        printf("The roots are imaginary,\n\t Root 1 = %.2lf-%.2lf\n\t Root 2 = %.2lf+%.2lf", RealPart, ImgPart, RealPart, ImgPart);
    }
    return 0;
}
