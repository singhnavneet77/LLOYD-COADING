#include<stdio.h>
void main()
{
  int n,i,j,k;
  printf("enter the number of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    for(k=1;k<=i*2-1;k++)
    {
    if(k==1||k==i*2-1||i==n)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
  }
}
