#include<stdio.h>
int sum(int n){
if(n==0)
return 0;
else
return (n%10)+sum(n/10);
}
void main() {
  int n,c;
printf("Enter digit : ");
scanf("%d",&n);
c=sum(n);
printf("%d",c);
}
