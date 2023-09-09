/*second largest number */
/*#include<stdio.h>
void main(){
  int n,i,j,t;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element : ");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  for(i=0;i<=n;i++){
  for(j=0;j<=n-i-1;j++){
  if(arr[j]>arr[j+1]){
  t=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=t;
  }
  }
  }
  printf("The second largest element is : ");
  printf("%d",arr[n-2]);
}*/
/*sum of two array*/
/*#include<stdio.h>
void main(){
  int i,n,sum[20];
  printf("Enter the size of first array : ");
  scanf("%d",&n);
  int arr1[n];
  printf("Enter the first array element : ");
  for(i=0;i<n;i++){
  scanf("%d",&arr1[i]);
  }
  printf("The first array is: ");
  for(i=0;i<n;i++){
  printf("%d\t",arr1[i]);
}
  printf("\nEnter the size of second array : ");
  scanf("%d",&n);
  int arr2[n];
  printf("Enter the second array element : ");
  for(i=0;i<n;i++){
  scanf("%d",&arr2[i]);
  }
  printf("The second array is: ");
  for(i=0;i<n;i++){
  printf("%d\t",arr2[i]);
}//int sum[n];
printf("\nThe sum of first and second array is\n");
  for(i=0;i<n;i++){
  sum[i]=arr1[i]+arr2[i];
  printf("%d\t",sum[i]);
}
}*/
/* max min element in array*/
/*#include<stdio.h>
void main(){
  int i,n,max=0,min=0;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  max=n;
  min=n;
  int arr[n];
  printf("Enter an array element : ");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  if(max<=arr[i])
  max=arr[i];
  if(min>=arr[i])
  min=arr[i];
  }
  printf("The maximum element in array is %d\n",max );
  printf("The minimum element in array is %d",min );
}*/
