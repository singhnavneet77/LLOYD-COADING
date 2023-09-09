#include<stdio.h>
int main(){
int n,i,j,t;
printf("Enter size :");
scanf("%d",&n);
int arr[n];
printf("Enter array element:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n-i-1;j++)
{
  if(arr[j+1]>arr[j])
  {
  t=arr[j+1];
  arr[j+1]=arr[j];
  arr[j]=t;
  }
  }
  }
  for(i=0;i<n;i++){
  printf("%d ",arr[i]);
  }
}
