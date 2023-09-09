#include<stdio.h>
struct student{
  int roll;
float marks;
char name[20];
char add[50];
int att;
};
void main() {
  struct student s1;
  char c;
  printf("Enter name : ");
  gets(s1.name);
  printf("Enter roll number and marks and attendance : ");
  scanf("%d%f%d",&s1.roll,&s1.marks,&s1.att);
  scanf("%c",&c);
  printf("Enter adderess : ");
  gets(s1.add);
  printf("Name is : %s\n Adderess is : %s\n",s1.name,s1.add);
  printf("Roll number is : %d\n Marks is : %f\n Attendance is : %d\n",s1.roll,s1.marks,s1.att);
}
