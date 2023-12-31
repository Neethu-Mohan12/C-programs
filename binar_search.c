#include<stdio.h>


int binarySearch(int arr[],int low,int high,int key)
{
    if(high<low)
    return -1;
    int mid=(low+high)/2;
    if(key==arr[mid])
          return mid;
    if(key>arr[mid])
         return binarySearch(arr,(mid+1),high,key);
    return binarySearch(arr,low,(mid-1),key);    

}
int main()
{
   int arr[]={7,10,23,35,46,78};
   int n,key;
    n=sizeof(arr)/sizeof(arr[0]);
   key =23;
   printf("Index :%d\n",binarySearch(arr,0,n- 1,key));
   return 0;
}