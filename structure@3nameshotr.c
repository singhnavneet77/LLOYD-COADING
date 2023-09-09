#include<stdio.h>
#include<string.h>
void disp(char name[20][30],int n);
void sort(char name[20][30],int n){
char temp[20];
int i,j;
 for(i=0;i<n;i++){
for(j=0;j<n-1;j++){
if(strcmp(name[j],name[j+1])>0)
{
strcpy(temp,name[j]);
strcpy(name[j],name[j+1]);
strcpy(name[j+1],temp);
}}}
disp(name,n);
}
void main(){
  int n,i,j;
printf("Enter no name : ");
scanf("%d",&n);
char name[20][30];
printf("Enter the name : ");
for(i=0;i<n;i++){
scanf("%s",name[i]);
}
sort(name,n);
}
void disp(char name[20][30],int n){
  int i;
  printf("The shorted manner : ");
for(i=0;i<n;i++){
  printf("%s\n",name[i]);
}
}
