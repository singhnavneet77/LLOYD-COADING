#include<stdio.h>
int power(int n,int p){
if(p!=0)
return (n*power(n,p-1));
else
return 1;
}
int main(){
  int n,p,s,i;
  printf("Enter number and power:");
  scanf("%d %d",&n,&p);
  s=power(n,p);
  printf("%d",s);
  return 0;
}
