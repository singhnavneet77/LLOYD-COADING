#include<stdio.h>
int main(){
int i,j,n;
char str[100];
printf("Enter your string :");
gets(str);
for(n=0;str[n]!='\0';n++);
for(j=0;j<n/2;j++){
  if(str[j]!=str[n-1-j])
  break;
}
if(j>=n/2)
printf("yes");
else
printf("no");
}
