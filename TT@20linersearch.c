#include<stdio.h>
int search(int arr[],int key,int n){
  int temp=0,i;
  for(i=0;i<n;i++){
    if(arr[i]==key){
    temp=arr[i];
    arr[i]=arr[i-1];
    arr[i-1]=temp;
    }
    return i;
  }
  return -1;
}
int  main(){
  int n,key,i,c=0;
  printf("Enter size of array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array element:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);}
printf("Enter your key:");
scanf("%d",&key);
c = search(arr,key,n);
printf("Elemnt found at %d ",c);
return 0;
}
