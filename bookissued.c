#include<stdio.h>
void main()
{
  int day,f;
  printf("enter the number of day");
  scanf("%d",&day);
  if (day<=10)
{
  f=0;
printf("fine is %d",f);
}
else if (day>10&&day<=20)
{
  f=(day-10)*1;
  printf("fine is %d",f);
}
else if (day>20&&day<=31)
{
   f=(day-20)*5;
  printf("fine is %d",f);

}
else
{
printf(" registation cancalled");
}
}
