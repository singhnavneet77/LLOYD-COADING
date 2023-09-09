/*#include<stdio.h>
#include<string.h>
void main()
{
  char name[50];
  int i,c=0,n=50;
  printf("enter your name ");
  gets(name);
  for(i=0;i<=n;i++)
  {
    if(name[i]==' ')
    c++;
  }
  printf("the words are %d",c+1);
}*/
#include<stdio.h>
#include<string.h>
void main()
{
  char name[50];
  int i,n,c=0;
  printf("enter your name ");
  gets(name);
  for(i=0;name[i]!='\0';i++)
  {
    if(name[i]==' ')
    c++;
  }
  printf("the word are %d",c+1);
}
