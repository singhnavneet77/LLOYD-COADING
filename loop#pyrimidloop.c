#include<stdio.h>
void  main()
{
  int i,j,k,n,c=0;
  printf("enter your no. of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(k=1;k<=n-i;k++)
    {
    printf(" ");
  }
    for(j=1;j<=i*2-1;j++)
    {
    // printf("*");
    if(j%2==0)
    printf("0");
    else
    printf("1");
  }
  printf("\n");
}
}
