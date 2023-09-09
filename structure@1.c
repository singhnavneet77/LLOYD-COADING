#include<stdio.h>
struct student{
  int roll;
float math,phy,che;
char name[20];
//float sum,avg;
};
void main() {
  struct student s1,s2;
  float sum,avg;
  printf("Enter first student name : ");
  scanf("%s",s1.name);
  printf("Enter first student marks in three subject : ");
  scanf("%f%f%f",&s1.math,&s1.phy,&s1.che);
  avg=(s1.math+s1.phy+s1.che)/3.0;
  printf("Enter second student name : ");
  scanf("%s",s2.name);
  printf("Enter second student marks in three subject : ");
  scanf("%f%f%f",&s2.math,&s2.phy,&s2.che);
  avg=(s2.math+s2.phy+s2.che)/3.0;
}
