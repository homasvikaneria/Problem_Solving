// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.
#include <stdio.h>

int main() {
    int n;
    printf("Enter age:");
    scanf("%d",&n);
    if(n>=18 ){
        printf("eligible to vote");
    }
    else{
        printf("not eligible to vote");
    }
    return 0;
}