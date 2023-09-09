/*#include<stdio.h>
int main(){
  int n,i;
  printf("Enter size:");
  scanf("%d",&n);
  int str[n];
  printf("Enter your string:");
  for(i=0;i<n;i++){
  scanf("%c",&str[i]);
  }
  for(i=n;i>0;i--){
    printf("%c",str[i]);
  }
}*/
#include<stdio.h>
int po(int n, int p){
  if(p==0)
  return 1;
  if(p%2==0){
    n=n*n;
    return po(n,p/2);
  }
  else if(p<0)
  return n*po(n,p-(-1));
  else
  return n*po(n,p-1);
}
int main(){
  int n,p,t;
  printf("Enter num and power:");
  scanf("%d %d",&n,&p);
  t=po(n,p);
    printf("%d",t);
}
