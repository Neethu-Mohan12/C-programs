#include <stdio.h>

int insertSorted(int arr[],int n,int key, int capacity,int pos)
{
    if(n>=capacity)
       return n;
     int i;
    for(i=n-1;(i>=0&& i>pos-1);i--)
    arr[i+1]=arr[i];
       
      arr[i+1]=key;
       return(n+1);
}

int main()
{
    int arr[20]={12,16,20,40,50,70};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int n=6;
    int i,key,pos;
    
    printf("\n before insertion:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\n enter the element to insert :");
    scanf("%d",&key);
    printf("\n enter the position to insert element:");
    scanf("%d",&pos);
    
    
    n=insertSorted(arr,n,key,capacity,pos);
    printf("\n After insertion:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}
