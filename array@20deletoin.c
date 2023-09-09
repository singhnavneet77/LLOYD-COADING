//delition
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
  printf("Enter delition position : ");
  scanf("%d",&p);
  for(i=p-1;i<=n;i++){
    arr[i]=arr[i+1];
  }
  n--;
  printf("The  delation array is\n");
  for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }

}
