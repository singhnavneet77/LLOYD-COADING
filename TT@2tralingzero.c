/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int coutzero(int c);
int fact(int n){
  if(n==0)
  return 1;
  else if(n==1)
  return n;
  else
  return n*(fact(n-1));
}
int main(){
  int n,c;
  printf("Enter a number:");
  scanf("%d",&n);
  c=fact(n);
  coutzero(c);
  return 0;
}
int coutzero(int c){
  int r,co=0;
  while(c%10==0){
  co++;
  c=c/10;
  }
  printf("%d",co);
}*/
