#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fp;
 char ch;
 fp = fopen("one.txt", "w");
 printf("Enter data");
 while( (ch = getchar()) != EOF) {
 putc(ch,fp);
 }
 fclose(fp);
 fp = fopen("one.txt", "r");
 while( (ch = getchar()) != EOF)
 printf("%c",ch);
 fclose(fp);}
