#include <stdio.h>

int main()
{
  int num,rem,rev=0,temp;
  printf("enter the number:");
  scanf("%d",&num);
  temp=num;
do
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
while(num!=0);
if(temp==rev)
{
    printf("pallindrome");
}
else
{
    printf("not pallindrome");
}
    return 0;
}