#include<stdio.h>
void main()
{
  int i,j,k,n;
  printf("enter the no of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(k=1;k<=n-i;k++)
    {
    printf(" ");
    }
    for(j=1;j<=i;j++)
    {
    if(j%2==0)
    printf("0");
    else
    printf("1");
    }
    printf("\n");
  }
}
