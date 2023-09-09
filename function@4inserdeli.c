#include<stdio.h>
void insertion(int arr[],int n);
void deleation(int arr[], int n);
int display(int arr[],int n);
void insertion(int arr[],int n) {
  int p,key,i;
  printf("Enter insert position : ");
  scanf("%d",&p);
  printf("Enter element which is you want to insert : ");
  scanf("%d",&key);
  for(i=n-1;i>=p-1;i--){
    arr[i+1]=arr[i];
  }arr[p-1]=key;
  printf("The  insert array is\n");
  display(arr,n+1);
}
void deleation(int arr[],int n) {
  int p,i;
  printf("\nEnter deleation index : ");
  scanf("%d",&p);
  for(i=p-1;i<=n;i++){
    arr[i]=arr[i+1];
  }//arr[p]=arr[i];
  printf("The  deleation array is\n");
    display(arr,n);
}
  int display(int arr[],int n) {
    int i;
    for(i=0;i<n;i++) {
      printf("%d\t",arr[i]);
    }
    return 0;
  }
  void main() {
    int i,n,p;
    int arr[50];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
    insertion(arr,n);
    deleation(arr,n);
  }
