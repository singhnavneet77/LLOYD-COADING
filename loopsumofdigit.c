#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("enter a number");
  scanf("%d",&n);
  for( ;n!=0;n=n/10)
  {
    i=n%10;
    sum=sum+i;
  }
    printf("sum of the digit %d",sum);


}
