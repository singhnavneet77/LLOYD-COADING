#include<stdio.h>
void main() {
  int i,j,k;
for(i=0;i<=2;i++)
{
  for(k=1;k<=17;k++)
  {
    if((k>=3-i&&k<=6+i)||(k>=12-i&&k<=15+i))
    printf("*");
    else
    printf(" ");
  }
  printf("\n");
}
for(i=0;i<9;i++)
{
  for(k=1;k<=17;k++)
  {
    if(k>=i+1&&k<=17-i)
    printf("*");
    else
    printf(" ");
  }
  printf("\n");
}
}
