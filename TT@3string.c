#include<stdio.h>
void main(){
  int i,n,temp;
  printf("Enter your size:");
  scanf("%d",&n);
  char str[n];
  printf("Enter string:");
  scanf("%s",str);
  for(i=0;i<n/2;i++){
    temp=str[i];
    str[i]=str[n-1-i];
    str[n-1-i]=temp;
  }
  for(i=0;i<n;i++){
      printf("%c",str[i]);
    }
}
//Sum of factorial.
/*#include<stdio.h>
int main(){
  int n,fact=1,i,c,sum=0,r;
  printf("Enter number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  fact = fact*i;
  //c--;
  }
  printf("%d\n",fact);
  while(fact!=0){
    r=fact%10;
    sum=sum+r;
    fact=fact/10;
  }
  printf("%d",sum);
}*/
/*#include<stdio.h>
void main(){
  int i,j,n,c,co=0;
  printf("Enter number :");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    c=0;
  for(j=n;j>=1;j--){
    if(i%j==0)
    c++;
  }
  if(c==3)
  co++;
  }
  printf("%d",co);
}*/
