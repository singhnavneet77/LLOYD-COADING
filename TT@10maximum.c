#include<stdio.h>
int main(){
  int n,max=0,c=0,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array element:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  if(max<arr[i]){
  max=arr[i];
c++;
}
  }
  printf("The max is:-%d",c);
}
