#include<stdio.h>
void main()
{
  int day,y,w,d;
    printf("enter the number of day");
    scanf("%d",&day);
    y=day/365;
    if(y!=0)
    {
    if(y>1)
    printf("%d years",y);
    else
    printf("%d year",y);
    }
    w=(day%365)/7;
    if(w!=0)
    {
    if(w>1)
    printf("%d weeks",w);
    else
    printf("%d week",w);
    }
    d=(day%365)%7;
    if(d!=0)
    {
      if(d>1)
    printf("%d days",d);
    else
    printf("%d day",d);
    }}
