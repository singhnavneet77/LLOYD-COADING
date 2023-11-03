#include<stdio.h>
// int oc(int a[],int f,int l,int s){
//   int i,m;
//   m=(f+l)/2;
//   if(f<=l){
//     if(a[m]==s){
//     if(a[m-1]==s&&m-1>=0)
//     return oc(a,f,l-1,s);
//     else
//     return m;
//   }
//     else if(a[m]>s)
//     return oc(a,m+1,l,s);
//     else if(a[m]<s)
//     return oc(a,f,m-1,s);
//   }
//   return -1;
// }
int oc(int a[],int f,int l,int s){
  int i,m;
  m=(f+l)/2;
  if(f<=l){
    if(a[m]==s){
    if(a[m+1]==s&&m+1<=l)
    return oc(a,f,l+1,s);
    else
    return m;
  }
    else if(a[m]>s)
    return oc(a,m+1,l,s);
    else if(a[m]<s)
    return oc(a,f,m-1,s);
  }
  return -1;}
int main(){
  int n,i,f,l,key,c=0;
  printf("Enter size:");
  scanf("%d",&n);
  int a[n];
  l=n-1;
  printf("Enter array element:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter key element:");
  scanf("%d",&key);
  c = oc(a,f,l,key);
  printf("First occurance is %d",c);
  return 0;
}
