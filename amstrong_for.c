#include<stdio.h>  
 int main()    
{    
int num,r,sum=0,temp;    
printf("enter the number:");    
scanf("%d",&num);    
temp=num;       
 for (int i = num; i > 0; i /= 10) {
        r = i % 10;
        sum = sum + (r * r * r);
    }
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}  