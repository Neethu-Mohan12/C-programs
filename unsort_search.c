#include<stdio.h>


int findElement(int arr[],int n,int key)

{
    int i;
    for(i=0;i<n;i++)
    
        if(arr[i]==key)
        return i;
    
    return -1;
} 

int main()
{
    int arr[]={10,89,4,28,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=28;
    int position=findElement(arr,n,key);
    if(position ==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at position:%d",position+1);
    }
    return 0;
}
