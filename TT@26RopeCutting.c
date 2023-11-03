#include <stdio.h>
int rope(int n,int a,int b,int c){
int temp1,temp2,temp3;
int store=0;
if(n==0){
return 0;
}
else if(n<0){
return -1;
}
temp1=rope(n-a,a,b,c);
temp2=rope(n-b,a,b,c);
temp3=rope(n-c,a,b,c);
store=temp1>=temp2?temp1>temp3?temp1:temp3:temp2>temp3?temp2:temp3;
if(store==-1){
return -1;
}
return store+1;
}
int main(){
int n=15,a=5,b=8,c=7;
int temp=0;
temp=rope(n,a,b,c);
printf("%d",temp);
}
