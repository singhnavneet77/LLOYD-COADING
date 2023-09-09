#include<stdio.h>
#include<math.h>
void main()
{
  int n,c=0,t,sum=0,r;
  printf("enter a number to check");
  scanf("%d",&n);
  t=n;
  while (n!=0)
 {
  n=n/10;
  c++;
}
n=t;
 while(t!=0)
 {
  r=t%10;
  sum=sum+round(pow(r,c));
  t=t/10;
 }
 if(sum==n)
 printf("aungstrom number");
 else
 printf("not a aungstrom number");
}
