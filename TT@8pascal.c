#include<stdio.h>
int pascal(int n,int r);
int ncr(int n,int r);
int fact(int n){
  if(n==0)
  return 1;
  else
  return n*fact(n-1);
}
int main(){
int c=0,n,r,i,j,k;
printf("Enter a number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
   for(k=0;k<=n-i;k++)
   {
   printf(" ");
   }
    for(j=0;j<=i;j++)
    {
    printf("%d ",pascal(i,j));
    }
  printf("\n");
 }
}
int pascal(int n,int r){
  if(n==r||r==0)
  return 1;
  else
  return (ncr(n-1,r-1)+ncr(n-1,r));
}
int ncr(int n,int r){
  float t;
  if(n==r||r==0)
  return 1;
  else
  return fact(n)/fact(r)*fact(n-r);
 }
