#include<stdio.h>
#include<string.h>
void main()
{
  int s,i,j=0;
  char ch[100];
  char st[100];
  printf("Enter your string :");
  gets(ch);
  for(i=0,j=0;ch[i]!='\0';i++,j++)
  {
  if((ch[i]=='A')||(ch[i]=='E')||(ch[i]=='I')||(ch[i]=='O')||(ch[i]=='U')||(ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
  st[j]='@';
  else
  st[j] = ch[i];
}
printf("Original array is %s",ch);
printf("\nNew array is %s",st);
}
