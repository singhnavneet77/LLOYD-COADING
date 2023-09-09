#include<stdio.h>
void main()
{
  int i,j,k,n;
  int  c;
printf("enter the number");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  int c=1;
    for(k=1;k<=n-i;k++)
    printf(" ");
    for(j=1;j<=i*2-1;j++)
    {
      if(j==1||j==i*2-1||i==1)
      printf("1");
      else if(j>i)
      {
        c--;
        printf("%d",c);
      }
      else
      {
        c++;
        printf("%d",c);
      }
    }
    printf("\n");
  }}
