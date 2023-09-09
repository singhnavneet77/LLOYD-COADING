#include<stdio.h>
int palindrome(int i,int n,char str[]){
  for(i=0;i<n/2;i++){
    if(str[i]!=str[n-1-i])
    break;
  }
  if(i>=n/2)
  printf("Palindrome string");
  else
  printf("Not a palindrome string");
}
int main(){
  int n,i;
  printf("Enter size:");
  scanf("%d",&n);
  char str[n];
  printf("Enter your string:");
  scanf("%s",str);
   palindrome(i,n,str);
}
