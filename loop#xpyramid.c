#include<stdio.h>
void main() {
  int n,i,k,j;
  printf("Enter the number of rows");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(k=1;k<=n-i;k++)
    {
      printf(" ");
    }
    for(j=1;j<=i*2-1;j++)
      printf("*");
      printf("\n");
  }
  for(i=1;i<=n;i++)
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
