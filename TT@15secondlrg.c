#include<stdio.h>
int main(){
int n,max1=0,max2=0,i;
printf("Entre the size:");
scanf("%d",&n);
int arr[n];
printf("Enter array element:");
for(i=0;i<n;i++){
  scanf("%d",&arr[i]);}
  max1=arr[0];
  for(i=0;i<n;i++){
  if(max1<arr[i]){
    max1=arr[i];}
    if(max2<arr[i]&&arr[i]<max1){//Or do if(max2<arr[n-1]&&arr[i]<max1)
      max2=arr[i];
    }
}
printf("%d %d",max1,max2);
}
