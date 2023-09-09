/*calculate cube of number by using do while loop */
#include<stdio.h>
void main()
{
  int n,t;
  char ch;
  do{
  printf("entre a number ");
  scanf("%d",&n);
  t=n*n*n;
  printf("the cube of number%d\n",t);
  printf("entre a character ");
// printf("do you want  to cotninue?press Y for yes N for not ");
  scanf(" %c",&ch);
}while(ch=='y');

}
