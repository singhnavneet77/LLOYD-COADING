#include<stdio.h>
void main()
{
  int n,avg,m,m1,m2,m3,m4,m5;
  printf("enter the five marks");
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
  avg=(m1+m2+m3+m4+m5)/5;
  if (avg<=90&&avg>80)
    m=0;
  if(avg<=80&&avg>70)
    m=1;
  if(avg<=60&&avg>50)
    m=2;
  if(avg<=50&&avg<40)
    m=3;
  switch ('m')
  case 0:
  printf("grade is A");
  break;
  case 1:
  printf("grade is B");
  break;
  case 2:
  printf("grade is C");
  break;
  case 3:
  printf("grade is D");
  break;
  default:
  printf("fail");
  break;
  }}
