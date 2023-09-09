#include<stdio.h>
void main()
 {
   int i,j,k,n;
   printf("enter a number of rows ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(k=1;k<=n-i;k++)
     {
       printf(" ");
     }
     for(j=1;j<=i*2-1;j++)
    {
       printf("*");
     }
     printf("\n");
   }
    for(i=n-1;i>=1;i--)
    {
      for(k=1;k<=n-i;k++)
      {
        printf(" ");
      }
      for(j=1;j<=i*2-1;j++)
      printf("*");
      printf("\n");
    }
}
