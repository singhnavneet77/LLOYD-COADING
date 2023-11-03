// #include<stdio.h>
// int Firstoc(int a[],int f,int l,int s){
//   int i,m;
//   m=(f+l)/2;
//   if(f<=l){
//     if(a[m]==s){
//     if(a[m-1]==s&&m-1>=0)
//     return Firstoc(a,f,l-1,s);
//     else
//     return m;
//   }
//     else if(a[m]>s)
//     return Firstoc(a,f,m-1,s);
//     else
//     return Firstoc(a,m+1,l,s);
//   }
//   return -1;
// }
// int main(){
//   int n,i,f,l,key,c=0;
//   printf("Enter size:");
//   scanf("%d",&n);
//   int a[n];
//   l=n-1;
//   printf("Enter array element:");
//   for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   printf("Enter key element:");
//   scanf("%d",&key);
//   c = Firstoc(a,f,l,key);
//   printf("First occurance is %d",c);
//   return 0;
// }

//This code print last occurance.

#include<stdio.h>
int Lastoc(int a[],int f,int l,int s){
  int i,m;
  m=(f+l)/2;
  if(f<=l){
    if(a[m]==s){
    if(a[m+1]==s&&m+1<=l)
    return Lastoc(a,f,l+1,s);
    else
    return m;
  }
    else if(a[m]>s)
    return Lastoc(a,f,m-1,s);
    else if(a[m]<s)
    return Lastoc(a,m+1,l,s);
  }
  return -1;
}

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
  c = Lastoc(a,f,l,key);
  printf("Last occurance is %d",c);
  return 0;
}
