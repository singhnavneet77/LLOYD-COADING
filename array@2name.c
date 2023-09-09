#include<stdio.h>
void main()
{
  char name[20];
  int i,n;
  printf("enter the size ");
  scanf("%d",&n);
  printf("enter your name");
  for(i=0;i<n;i++)
    scanf("%c",&name[i]);
    printf("Hello ");
  for(i=0;i<n;i++)
    printf("%c",name[i]);
    printf("!");

}
