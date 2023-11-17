#include <stdio.h>

int main()
{
  int num,rem,rev=0,temp;
  printf("enter the number:");
  scanf("%d",&num);
  temp=num;
  for(;num!=0;num/=10)
{
    rem=num%10;
    rev=rev*10+rem;

}
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
