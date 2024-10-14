// 4. Write a function to check whether a given character is a vowel or consonant.
#include <stdio.h>

int main() {
    char n;
    printf("Enter an alphabet:");
    scanf("%c",&n);
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' ){
        printf("Vowel");
    }
    else{
        printf("not a vowel");
    }
    return 0;
}