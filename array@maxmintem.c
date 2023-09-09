#include<stdio.h>
struct week
{
  char day[10];
};
void main() {
float max[7],min[7],summax=0.0,summin=0.0;
int i,j;
struct week d[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
for(i=0;i<7;i++)
{
  printf("Enter maximum and minimum temperature for %s",d[i].day);
  scanf("%f %f",&max[i],&min[i]);
  summax=summax+max[i];
  summin=summin+min[i];
}
printf("Average maximum temperature of the week is %f\n",summax/7.0);
printf("Average minimum temperature of the week is %f\n",summin/7.0);
}
