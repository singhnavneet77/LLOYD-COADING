/*#include<stdio.h>
int main(){
  int i,j,k,n;
  printf("Enter size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter arrray element:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
      for(k=j;k<n-1;k++){
        arr[k]=arr[k+1];
      }n--;
      j--;
    }
  }
  }
  printf("After removing doplicate:\n");
  for(i=0;i<n;i++)
  printf("%d",arr[i]);
}*/
#include<stdio.h>
int main(){
  int n,i;
  printf("Enter size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter arrray element:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]==arr[i+1])
  continue;
    else if(arr[i]!=arr[i+1]){
    printf("%d ",arr[i]);}
  }
}
