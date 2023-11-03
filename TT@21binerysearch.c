// #include<stdio.h>
// int binary(int arr[],int key,int f,int l){ //Here code run using recursion.
//   int m ;
//   if(f<=l){
//     m=(f+l)/2;
//     if(arr[m]==key)
//     return m;
//     else if(key<arr[m])
//     return binary(arr,key,f,m-1);
//     else
//     return binary(arr,key,m+1,l);
//   }
//   return -1;
// }
//Space complixity=0(1);In recursion=0(n); //Time complixity=log(n);
// int main(){
//   int n,key,c=0,i,f,l,m;
//   printf("Enter size:");
//   scanf("%d",&n);
//   int arr[n];
//   l=n-1;
//   f=0;
//   printf("Enter array element:");
//   for(i=0;i<n;i++){
//   scanf("%d",&arr[i]);}
//   printf("Enter key element:");
//   scanf("%d",&key);
//    c=binary(arr,key,f,l);
//  printf("Element found at %d",c);
//    return 0;
// }
// int binary(int arr[],int key,int f,int l){   //Here code run using iteration.
// int m;
//   while(f<=l){
//     m=(f+l)/2;
//   if(arr[m]==key){
//     return m;
//   }
//   else if(arr[m]>key)
//   l=m-1;
//   else
//   f=m+1;
// }
// return -1;
// }


//Here code start using stracture.
#include<stdio.h>
struct student{
  int array[5];
  int length;
};
int search(struct student arr,int key,int f,int l);
void main(){
struct student arr={{1,2,3,4,5},5};
int key,f,l;
f=0;
l=arr.length-1;
printf("Enter key: ");
scanf("%d",&key);
int temp;
temp = search(arr,key,f,l);
if (temp != -1) {
       printf("Element found at index: %d\n", temp);
   } else {
       printf("Element not found.\n");
   }
}
int search(struct student arr,int key,int f,int l){
 int m;
  if(f<=l){
   m=(f+l)/2;
if(arr.array[m]==key){
return m;
   }
else if(arr.array[m]>key)
    l=m-1;
   else
f=m+1;
   }
  return -1;
  }
