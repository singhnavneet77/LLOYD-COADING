#include<stdio.h>
void sum(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(float a,float b);
void main() {
int a,b;
printf("Enter two number : ");
scanf("%d %d",&a,&b);
sum(a,b);
sub(a,b);
mul(a,b);
div(a,b);
}
void sum(int a,int b){
  int s;
  s=a+b;
  printf("The sum is : %d\n",s);
}
void sub(int a,int b){
  int s;
  s=a-b;
    printf("The sub is : %d\n",s);
}
void mul(int a,int b){
  int s;
  s=a*b;
    printf("The mul is : %d\n",s);
}
void div(float a,float b){
  float s;
  s=a/b;
    printf("The div is : %f\n",s);
}
