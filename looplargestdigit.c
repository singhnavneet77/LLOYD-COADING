/*print the largest digit in the number  */
#include<stdio.h>
void main()
{
  int  n,i,max,r;
  printf("enter a number");
  scanf("%d",&n);
  max=0;
  for( ;n!=0;n=n/10)
  {
    r=n%10;
    if(max<r)
    {
      max=r;
    }
}
  printf(" largest number is %d",max);
}
