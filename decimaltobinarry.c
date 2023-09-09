#include<stdio.h>
#include<math.h>
void main() {
  int n,r,i=0,sum=0;
  printf("Enter number : ");
  scanf("%d",&n);
  while(n!=0){
    r=n%2;
    sum=sum+round(pow(10,i))*r;
    n=n/2;
    i++;
  }
  printf("Binarry is %d",sum);
}
