#include<stdio.h>
void main()
{
  int i,n,f;
  printf("enter a number");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    f++;
    }
    if(f==2)
    printf("prime number");
    else
    printf("not a prime number");


}
