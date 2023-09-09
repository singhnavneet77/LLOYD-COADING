#include<stdio.h>
void main()
{
  int a,b,c,d,s,e,i,h;
  printf("enter the value of a,b  and c");
  scanf("%d %d %d",&a,&b,&c);
  d=b*b-4*a*c;
  if (d==0)
  s=0;
  else if (d>0)
  s=1;
  else
  s=2;
  switch(s)
  {
    case 0:
    printf("real and equal roots");
    e=-b/(2*a);
    i=e;
    printf("e=%d and i=%d",e,i);
    break;
    case 1:
    printf("roots are real and unequal");
    e=(-b-sqrt(d))/2*a;
    i=(-b+sqrt(d))/2*a;
    printf("\ne=%d and\ni=%d",e,i);
    break;
    default:
    printf("roots is imagenery");
    break;
    }
}
