#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    (age>=18)?(printf("Eligible for voting")): (printf("not eligible for voting"));
    return 0;
}