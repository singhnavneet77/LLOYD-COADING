/*check it is pallindrom or not  wtrite in file*/
#include<stdio.h>
void main()
{
  int n,r,m=0,s;

printf("enter a number to check it is pallandrom or not");
scanf("%d",&n);
s=n;
do{
r=n%10;
m=(m*10)+r;
n=n/10;
}while(n>0);
if(s==m)
{
printf("number is pallindrom");
}
else
{
printf("number is not pallindrom");
}}
