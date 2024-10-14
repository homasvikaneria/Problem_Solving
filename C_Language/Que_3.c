// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.
#include <stdio.h>

int main() {
    int s1,s2,s3;
    printf("enter side1:");
    scanf("%d",&s1);
    printf("enter side2:");
    scanf("%d",&s2);
    printf("enter side3:");
    scanf("%d",&s3);
    if(s1==s2&&s2==s3){
        printf("equilateral triangle");
    }
    else if(s1!=s2&&s2!=s3){
        printf("scalene triangle");
    }
    else{
        printf("isosceles triangle");
    }
    
    return 0;
}