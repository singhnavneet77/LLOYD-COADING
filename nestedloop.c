#include<stdio.h>
void main()
{
  int i,j,n;
  char c='A';
  printf("enter the number of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf(" %c",c);
      c++;
    }
    printf("\n");
  }
}
