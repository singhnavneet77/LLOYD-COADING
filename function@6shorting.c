#include<stdio.h>
#include<stdlib.h>
void bubble(int arr[],int n);
void selection(int arr[],int n);
void insertion(int arr[],int n);
void display(int arr[],int n);
void bubble(int arr[],int n){
  int i,j,t;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
  {
    if(arr[j]>arr[j+1])
    {
    t=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=t;
    }
    }
    }
    display(arr,n);
}
void selection(int arr[],int n){
  int i,j,c,min;
  for(i=0;i<n;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
   { if(arr[min]>arr[j])
   min=j;
   }
   c=arr[i];
   arr[i]=arr[min];
   arr[min]=c;
 }
   display(arr,n);
}
void insertion(int arr[],int n){
  int i,j,key;
  for(i=1;i<n;i++)
  {
  key=arr[i];
  j=i-1;
  while(key<arr[j]&&j>=0){
  arr[j+1]=arr[j];
  j--;
  }
  arr[j+1]=key;
}
   display(arr,n);
}
void main() {
int n,choice,i;
printf("Enter the size of array : ");
scanf("%d",&n);
int arr[n];
printf("Enter array element : ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}while(1){
printf("\n1.Bubble short\n2.selection short\n3.insertion short\n4.Exit");
printf("\nEnter your choice");
scanf("%d",&choice);
switch(choice){
  case 1:
  bubble( arr,n);
  break;
  case 2:
 selection(arr, n);
 break;
 case 3:
insertion(arr,n);
break;
case 4:
exit(0);
break;
}
}}
 void display(int arr[],int n){
   int i;
   printf("The sorted array is\n");
   for(i=0;i<n;i++)
   printf("%d\t",arr[i]);
 }
