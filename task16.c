#include<stdio.h>

int main(){
    // Task 16: Write an algorithm and program to find if the entered character is a vovel or not.
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
        printf("The entered character is a vowel.");
    } else{
        printf("The entered character is not a vowel.");
    }
    return 0;
}
