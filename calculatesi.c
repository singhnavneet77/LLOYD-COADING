#include<stdio.h>
int main()
{
  float p,r,t,si;
  printf("enter the principle value ");
  scanf("%f",&p);
  printf("enter the rate value");
  scanf("%f",&r);
  printf("enter the time");
  scanf("%f",&t);
  si=(p*r*t)/100;
  printf("simple interest%f\n",si);
  return 0;


}
