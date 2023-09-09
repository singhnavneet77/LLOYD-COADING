#include<stdio.h>
int main(){
int i,n;
printf("Enter size:");
scanf("%d",&n);
int arr[n];
printf("Enter array element:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int leader=arr[n-1];
for(i=0;i<n;i++){
  if(leader==arr[i])
  printf("%d ",arr[i]);
}
for(i=n-2;i>=0;i--){
if(leader<arr[i]){
  leader=arr[i];
  printf("%d ",leader);
}
}
}
/*#include<stdio.h>
int main(){
  int i,j,n,max=0;
  printf("Enter the size :");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array element:");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    if(arr[i]<arr[j]){
      max=1;
      break;
  }}
  if(max!=1)
  printf(" %d",arr[i]);
  max=0;
  }
}*/
