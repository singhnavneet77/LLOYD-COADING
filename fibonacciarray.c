#include<stdio.h>
void main()
{
    int a=0,b=1,t,n,c,i;
    printf("Enter how many you want to diplay the fibonacii series : ");
    scanf("%d",&n);
    int arr[n];
  arr[0]=0;
  arr[1]=1;
    for(i=2;i<n;i++)
    {
       t=a+b;
       arr[i]=t;
       a=b;
       b=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
