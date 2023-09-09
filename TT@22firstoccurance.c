#include<stdio.h>
int occur(int arr[],int key,int f,int l){
  int m ;
  while(f<=l){
    m=(f+l)/2;
    if(arr[m]==key){
      if(arr[m-1]==key&&m>=0)
      return occur(arr,key,f,l-1);
      else
      return m;
    }
    else if(key<arr[m])
    return occur(arr,key,f,m-1);
    else
    return occur(arr,key,m+1,l);
  }
  return -1;
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
  printf("First occurance is %d",c);
  return 0;
}
