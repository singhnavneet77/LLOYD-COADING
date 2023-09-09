#include<stdio.h>
void main()
{
  int d,m,y;
  printf("enter date month and year");
  scanf("%d %d %d",&d ,&m ,&y);
  switch(d)
  {
    case 1:
    case 21:
    case 31:
    printf("%dst of ",d);
    break;
    case 2:
    case 22:
    printf("%dnd of",d);
    break;
    case 3:
    case 23:
    printf("%drd of",d);
    break;
    default:
    printf("%dth of",d);
  }
  switch(m)
  {
    case 1:
    printf("january,");
    break;
    case 2:
    printf("february");
    break;
    case 3:
    printf("march");
    break;
    case 4:
    printf("april");
    break;
    case 5:
    printf("may");
    break;
    case 6:
    printf("june");
    break;
    case 7:
    printf("july");
    break;
    case 8:
    printf("august");
    break;
    case 9:
    printf("september");
    break;
    case 10:
    printf("october");
    break;
    case 11:
    printf("november");
    break;
    case 12:
    printf("december");
    break;
  }
    printf("%d",y);
}
