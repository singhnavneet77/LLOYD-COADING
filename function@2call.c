#include<stdio.h>
void sum();
void sub(int a,int b);
void mul();
float div(int a,int b);
void main() {
int a,b,s,d;
printf("Enter two number : ");
scanf("%d %d",&a,&b);
sum();
sub(a,b);
mul(a,b);
div(a,b);
}
void sum(){
  int s,a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);
  s=a+b;
  printf("The sum is : %d\n",a+b);
}
void sub(int a,int b){
  int s;
  s=a-b;
    printf("The sub is : %d\n",s);
}
void mul(){
  int s,a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);
  s=a*b;
    printf("The mul is : %d\n",s);
}
float div(int a,int b){
float s;
  s=a/b;
    printf("The div is : %f\n",s);
}
