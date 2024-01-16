
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int arr[],int i,int j){
  int temp=0;
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
int partition(int arr[],int l,int h,int n){
 int i=l-1;
 int j=l;
 int piv=arr[h];
 for(j=l;j<n-1;j++){
     if(arr[j]<piv){
         i++;
         swap(arr,i,j);
     }
 }
 swap(arr,i+1,j);

 return i+1;
}

int main() {
 int n,c=0;
 printf("Enter the size: ");
 scanf("%d",&n);
 int arr[n];
 printf("Enter array element: ");
 for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
int l=0,h=n-1;
printf("%d",partition(arr,l,h,n));
    return 0;
}
