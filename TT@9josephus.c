#include<stdio.h>
int new(int n,int k);
int jos(int n,int k){
  if(n==1)
  return 0;
  else
  return (jos(n-1,k)+k)%n;
}
int new(int n,int k){
  return jos(n,k)+1;//Position start at 1.

}
int main(){
  int n,k,c=0;
  printf("Enter number and kill position:");
  scanf("%d %d",&n,&k);
  c = new(n,k);
  printf("%d",c);
}
//User function Template for C
/*int myjos(int n,int k);
int josephus(int n, int k)
{
    return myjos(n,k)+1;
}
int myjos(int n,int k){
    if(n==1)
    return 0;
    else
    return (myjos(n-1,k)+k)%n;
}
int main(){
  int n,k,c=0;
  scanf("%d %d",&n,&k);
   c=josephus(n,k);
   printf("%d",c);
}*/
