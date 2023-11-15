#include<stdio.h>
#include<string.h>


void reverseString(char s[]) {
    int length = strlen(s);
    int i, j;
    char temp;
    for(i = 0, j = length - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
   char s[] = "malayalam";
    char s2[100]; 
    strcpy(s2, s);
    printf("%s\n", s2);
    reverseString(s);
    printf("%s\n", s); 
     if (strcmp(s, s2) == 0) {
        printf("palindrome\n");
    } else {
        printf("not palindrome\n");
    }
    return 0;
}