#include<stdio.h>
int occur(int arr[],int key,int f,int l){
  int m ;
  while(f<=l){
    m=(f+l)/2;
    if(arr[m]==key)
    return m;
  if(arr[m-1]>=key&&arr[m-1]<=key)
  return m-1;
    else if(key<arr[m])
    return occur(arr,key,f,m-1);
    else
    return occur(arr,key,m+1,l);
  }
  }
int main(){
  int n,i,f,l,key,c=0;
  printf("Enter size:");
  scanf("%d",&n);
  int arr[n];
  l=n-1;
  printf("Enter array element:");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter key element:");
  scanf("%d",&key);
  c=occur(arr,key,f,l);
  printf("Floor value is %d",c);
  return 0;
}
