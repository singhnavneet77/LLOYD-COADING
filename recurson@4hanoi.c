#include<stdio.h>
#include<math.h>
void count(int n);
void hanoi(int n,char s,char a,char d)
{
if (n==1)
printf("%c to %c\n",s,d);
else
{
hanoi(n-1,s,d,a);
printf("%c to %c\n",s,d);
hanoi(n-1,a,s,d);
}
}
void main()
{
int n,f;
printf("Enter a number : ");
scanf("%d",&n);
hanoi (n, 'S','A','D');
count(n);
}
void count(int n) {
    int sum=0;
    sum=sum+round(pow(2,n)-1);
    printf("Total number is = %d",sum);
}
