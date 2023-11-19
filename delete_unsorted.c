#include <stdio.h>   
int findElement(int array[], int n, int key);  
int deleteElement(int array[], int n, int key)  
{  
    int pos = findElement(array, n, key);  
    if (pos == -1) {  
        printf("Element not found");  
        return n;  
    }  
    int i;  
    for (i = pos; i < n - 1; i++)  
        array[i] = array[i + 1];  
    return n - 1;  
}  
int findElement(int array[], int n, int key)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        if (array[i] == key)  
            return i;  
    return -1;  
}  
int main()  
{  
    int i;  
    int array[] = { 20, 60, 40, 50, 30 };  
    int n = sizeof(array) / sizeof(array[0]);  
    int key = 40;  
    printf("Array before deletion\n");  
    for (i = 0; i < n; i++)  
        printf("%d ", array[i]);   
    n = deleteElement(array, n, key);  
    printf("\nArray after deletion\n");  
    for (i = 0; i < n; i++)  
        printf("%d ", array[i]);  
    return 0;  
}  

