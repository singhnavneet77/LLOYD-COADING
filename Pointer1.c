#include<stdio.h>
void main(){
  int a=15;
  int *p=&a;
  printf("\nThe value of a is %d",a);
  printf("\nThe value of a using pointer is %d",*p);
  printf("\nThe address of a using and operator is %d",&a);
  printf("\nThe address of a using pointer is %d",p);
}
