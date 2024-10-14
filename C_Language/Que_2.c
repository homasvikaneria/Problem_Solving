// 2. Write a function to determine whether a given number is positive, negative, or zero.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else if(n<0){
        printf("negative no");
    }
    else{
        printf("zero");
    }
    return 0;
}