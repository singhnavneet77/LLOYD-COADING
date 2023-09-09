//Revarse and square of number.
#include<stdio.h>
int rev(int n);
 int power(int n,int m);
int main(){
  int n,m=0,c=0;
   int j=0;
  printf("Enter num:");
  scanf("%d",&n);
   m=rev(n);
   j=power(n,m);
   printf("%d",j);
}
int rev(int n){
  int r,m=0;
  while(n!=0){
  r=n%10;
  m=(m*10)+r;
  n=n/10;}
  printf("%d\n",m);
return m;
}
 int power(int n,int m){
  if(m==0)
  return 1;
  else if (m==1)
  return n;
  else
  return(n*power(n,m-1));
}
