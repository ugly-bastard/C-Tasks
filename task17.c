#include<stdio.h>

int main(){
    // Task 17: Draw a flowchart and program to convert a lower case character to uppercase and vise-versa.
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("Char is lowercase. In uppercase, it is %c", ch-32);
    } else if(ch >= 'A' && ch <= 'Z'){
        printf("Char is uppercase. In lowercase, it is %c", ch+32);
    }
    return 0;
}
