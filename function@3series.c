
#include<stdio.h>
void fact(int n);
void main(){
    int n,sum;
printf("Enter  the terms : ");
scanf("%d",&n);
fact(n);
}
void fact(int n){
    int i,j,fact,sum=0;
    for(i=1;i<=n;i++)
    {
     fact=1;
     for(j=i;j>=1;j--)
     {
       fact = fact*j;
     }
sum=sum+i/fact;
}
printf("sum is :%d",sum);
}
