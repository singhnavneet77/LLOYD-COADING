//insert
#include<stdio.h>
void main() {
int p,key,n,i;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array element : ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter insert position : ");
  scanf("%d",&p);
  printf("Enter element which is you want to insert : ");
  scanf("%d",&key);
  for(i=n-1;i>=p-1;i--){
    arr[i+1]=arr[i];
  }arr[p-1]=key;
  n++;
  printf("The  insert array is\n");
  for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
}
