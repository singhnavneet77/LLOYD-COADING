#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,ave;
  printf("enter marks in five subject");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  ave=(m1+m2+m3+m4+m5)/5;
  if (ave>=80)
  {
    printf("grade is A");
  }
else if (ave>=70&&ave<80)
  {
    printf("grade is B");
  }
 if (ave>=60&&ave<70)
  {
    printf("grade is C");
  }
if (ave>=40&&ave<60)
  {
    printf("grade is D");
  }
if (ave<40)
    printf("fail");

  return 0;
}
