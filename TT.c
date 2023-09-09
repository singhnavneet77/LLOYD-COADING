//^ niglating symbol.
/*#include<stdio.h>//This printf small life.
void main(){
  char str[100];
  printf("Enter string:");
  scanf("%[a-z]",str);
  printf("%s",str);
}*/
/*#include<stdio.h>//This printf lif.
void main(){
  char str[100];
  printf("Enter your string:");
  scanf("%[^e]",str);
  printf("%s",str);
}*/
/*#include<stdio.h>//This printf Life.
void main(){
  char str[100];
  printf("Enter your string:");
  scanf("%[^ e]",str);
  printf("%s",str);
}*/
/*#include<stdio.h>//This printf l.
void main(){
  char str[100];
  printf("Enter your string:");
  scanf("%[^ i]",str);
  printf("%s",str);
}*/
/*#include<stdio.h>//This printf life is beautifull.
void main(){
  char str[100];
  printf("Enter your string:");
  scanf("%[^\n]",str);
  printf("%s",str);
}*/
/*#include<stdio.h>
void main(){
float a=5.5;
float b=6.4;
float sum;//int sum;
sum=(int)a+b;
  printf("%0.1f",sum);
}*/
/*#include<stdio.h>
void main(){
int a=98;
char ch='A';
  printf("%c",a);
  printf("%d",a);
}*/
/*#include<stdio.h>
void main(){
char ch;
char s[100];
char sen[100];
scanf("%c",&ch);
scanf("%s",s);
scanf("\n");
scanf("%[^\n]",sen);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s",sen);
}*/
/*#include<stdio.h>
void main(){
  int n,i,j,c;
  printf("Enter no rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  c=i;
  for(j=1;j<=i;j++){
  printf("%d",c);
  c++;
  }
  printf("\n");
  }
}*/
/*#include<stdio.h>
void main(){
  int n,i,j,c;
  printf("Enter no rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  for(j=i;j>0;j--){
  printf("%d",j);
  }
  printf("\n");
  }
}*/
