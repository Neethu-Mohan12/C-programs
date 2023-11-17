#include<stdio.h>

int main() {
    int a = 0, b = 1, c=0,num;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("%d\n%d\n", a, b);
    c=a+b;

    while (c <= num) {
         printf("%d\n", c);
        a = b;
        b = c;
        c = a + b;
    
    }

    return 0;
}