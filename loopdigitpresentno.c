/*digit present a number or not write in file*/
#include<stdio.h>
void main()
{
  int n,c=0,d,r;
  printf("enter a number or digit");
  scanf("%d %d",&n,&d);
  for( ;n!=0;n=n/10)
  {
  r=n%10;
  if(d==r)
  {
    printf(" present ");
       c++;
  }
}
if(c==0)
    printf("not present ");
}
