/*#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<5;i++)
{
  for(j=1;j<5;j++)
  {
    printf("%d",i);
  }
  printf("\n");
}
}*/
#include<stdio.h>
void main()
{
int i,j,n;
printf("enter the number of row" );
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
    if(i==1||i==n||j==1||j==n)
    printf("*");
    else
    printf(" ");
  }
  printf("\n");
}
}
