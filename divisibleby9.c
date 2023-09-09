/*number is divisible by 9 or not print nearest 9multiple number*/
#include<stdio.h>
int main()
{
  int num,rem,new,t;
  printf("enter a number");
  scanf("%d",&num);
  if (num%9==0)
  {
    printf("completely divisible");
  }
  else
  {
    rem=num%9;
    if (rem<=4)
    {
      new=num-rem;
    }
    else
    {
      t=9-rem;
      new=num+t;
    }
    printf("new number is %d",new);
    return 0;
 }}
