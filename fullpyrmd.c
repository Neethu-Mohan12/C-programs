#include <stdio.h>
int main()
{
  int i,j,k,m;
  for(i=1;i<=5;i++)
  {
    
    for(j=i;j<5;j++)
     {
         printf(" ");
     }
      
      for(k=1;k<=i;k++)
      {
          printf("*");
      }
      for(m=1;m<k-1;m++)
      {
        printf("*");
      }
     printf("\n");
  }
    return 0;
}

