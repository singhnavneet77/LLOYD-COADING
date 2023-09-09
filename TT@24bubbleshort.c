#include<stdio.h>
int bubble(int arr[],int n){
  int i,j,t=0;
  for(i=0;i<n;i++)
  for(j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
      t=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=t;
    }
  }
  return arr[i];
}
int main(){
  int n,i,c=0;
  printf("Enter size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array element:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  bubble(arr,n);
  printf("The shorted array is/n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
