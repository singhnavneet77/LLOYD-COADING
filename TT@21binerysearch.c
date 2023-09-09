#include<stdio.h>
int binary(int arr[],int key,int f,int l);//Space complixity=0(1);In recursion=0(n);
int main(){                        //Time complixity=log(n);
  int n,key,c=0,i,f,l,m;
  printf("Enter size:");
  scanf("%d",&n);
  int arr[n];
  l=n-1;
  printf("Enter array element:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);}
  printf("Enter key element:");
  scanf("%d",&key);
   c=binary(arr,key,f,l);
 printf("Element found at %d",c);
   return 0;
}
int binary(int arr[],int key,int f,int l){
int m;
  while(f<=l){
    m=(f+l)/2;
  if(arr[m]==key){
    return m;
  }
  else if(arr[m]>key)
  l=m-1;
  else
  f=m+1;
}
return -1;
}
/*int binary(int arr[],int key,int f,int l){
  int m ;
  //m=(f+l)/2;
  while(f<=l){
    m=(f+l)/2;
    if(arr[m]==key)
    return m;
    else if(key<arr[m])
    return binary(arr,key,f,m-1);
    else
    return binary(arr,key,m+1,l);
  }
  return -1;
}
*/
