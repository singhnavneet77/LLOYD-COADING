#include<stdio.h>
int main(){
  int n,i,sum=0,r,b=0,diff=0,c=0;
printf("Enter your size:");
scanf("%d",&n);
int arr[n];
printf("Enter your array element:");
for(i=1;i<=n;i++){
scanf("%d",&arr[i]);
}
for(i=1;i<=n;i++){
  sum=sum+arr[i];
}
c=n+1;
b=(c*(c+1))/2;
diff=b-sum;
printf("The missing number is :%d",diff);
}
