/*average of the factorial */
#include<stdio.h>
void main()
{
  int n,f=0,i,sum;
  float ave;
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
    sum=sum+i;
      f++;
    }
  }
  //ave=(float)



}
