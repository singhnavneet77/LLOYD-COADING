#include<stdio.h>
int fact(int n);
int fact(int n) {
 if(n==1)
 return n;
 else
 return n*(fact(n-1));
}
void main(){
int n,c;
printf("Enter number of term : ");
scanf("%d",&n);
c=fact(n);
printf("%d",c);
}
