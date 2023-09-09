#include<stdio.h>
int search(int *arr,int key ,int n);
int main(){
  int n,key,i,t=0,c;
  printf("Enter the size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element:");
  for(i=1;i<=n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the key element:");
  scanf("%d",&key);
  c=search(arr,key,n);
printf("Element found at %d:",c+1);
if(c==-1)
printf("Element not found:");
}
int search(int *arr,int key ,int n){
  int i,j=0;
  for(i=1;i<=n;i++){
  if(arr[i]=key)
  return i+1;
  else
  j++;
  }
  if(j>0)
  return -1;
}
