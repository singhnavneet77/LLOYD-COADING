#include<stdio.h>
int mul(int m,int n);
void main(){
  int n,d,m;
  printf("Enter two number : ");
  scanf("%d %d",&m,&n);
  d=mul(m,n);
  printf("The product is :%d\n",d);
}
int mul(int m,int n){
  if(m<n){
  return mul(n,m);}
  else if(n==0){
  return 0;}
  else{
  return m+mul(m,(n-1));
}
}
