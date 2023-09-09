#include<stdio.h>
void main()
{
  int n,t=0;
  printf("enter a number");
  scanf("%d",&n);
  do {
    printf("%d\n",t);
    t=t+1;
  } while(t<n);
}
