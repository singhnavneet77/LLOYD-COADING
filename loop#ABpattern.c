#include<stdio.h>
void main()
{
  int i,j,k,n;
  char ch;
printf("enter the number");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    char ch='A';
    for(k=1;k<=n-i;k++)
    printf(" ");
    for(j=1;j<=i*2-1;j++)
    {
      if(j==1||j==i*2-1||i==1)
      printf("A");
      else if(j>i)
      {
        ch--;
        printf("%c",ch);
      }
      else
      {
        ch++;
        printf("%c",ch);
      }
    }
    printf("\n");
  }}
