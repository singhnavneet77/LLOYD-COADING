//Inserchion short
#include<stdio.h>
void main() {
int n,j,i,key;
printf("Enter the size of array : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
  printf("Enter an element :");
  scanf("%d",&arr[i]);
  key=arr[i];
  j=i-1;
  while(key<arr[j]&&j>=0){
  arr[j+1]=arr[j];
  j--;
  }
  arr[j+1]=key;
}printf("The shorted array is\n");
for(i=0;i<n;i++){
  printf("%d\t ",arr[i]);
}
}
