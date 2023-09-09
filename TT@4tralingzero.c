//Zero tracing.
#include<stdio.h>
int main(){
  int n,i,c=0,fact=1,co=0,r;
  printf("Enter number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    fact=fact*i;
  }
  c=fact;
while(n>0){
r=n/5;
co=co+r;
n=n/5;
}
printf("%d",co);
  return 0;
}
