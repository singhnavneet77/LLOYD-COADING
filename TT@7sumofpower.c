/*#include<stdio.h>
int add(int a,int b){
  int c,k,s;
  while(b!=0){
    c=a&b;
    a=a^b;
    b=c<<1;}
  return a;
}
int main(){
  int a,b,t;
  printf("Enter two number:");
  scanf("%d %d",&a,&b);
  t=add(a,b);
  printf("%d",t);
}*/
#include<stdio.h>
int power(int n,int p){
  if(p==0)
  return 1;
  else if(p<0)
  return n*power(n,p-(-1));
  else
  return n*power(n,p-1);
}
int main(){
  int n,p,t=0,j=0;
  printf("Enter num and power:");
  scanf("%d %d",&n,&p);
  t=power(n,p);
  printf("%d",t);
}
