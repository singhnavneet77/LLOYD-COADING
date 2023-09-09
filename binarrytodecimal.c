#include<stdio.h>
#include<math.h>
void main() {
  int n,i=0,r,sum=0;
  printf("Enter binarry number : ");
  scanf("%d",&n);
  while(n!=0){
    r=n%10;
    sum=sum+round(pow(2,i))*r;
    n=n/10;
    i++;
  }
  printf("Result in decimal number =%d",sum);
}
