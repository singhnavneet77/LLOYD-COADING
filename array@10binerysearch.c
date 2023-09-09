//Binery searching;
#include<stdio.h>
void main()
{ int arr[7]={6,7,8,9,10,11,10};
  int f=0,n,m,l=5,c=0,a=0;
  printf("Enter your serch element :");
  scanf("%d",&n);
  while (f<=l) {
  m=(f+l)/2;
  //a++;
  if(n==arr[m])
  {
    printf("Element found at %d\n",m+1);
    c++;
    break;}
  else if(n<arr[m])
  l=m-1;
  else
  f=m+1;
}if(c==0)
printf("Not found ");
//printf("on %d iteration\n",a);
}
