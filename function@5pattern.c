#include<stdio.h>
#include<stdlib.h>
void floyd(int n);
void pascle(int n);
void rombas(int n);
void floyd(int n) {
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("%d",i);
    }
    printf("\n");
}
}
void pascle(int n){
  int i,j,c,k;
  for(i=0;i<=n;i++)
  {
    for(k=1;k<=n-i;k++)
    printf(" ");
    for(j=0;j<=i;j++)
    {
      if(j==0||i==0)
      c=1;
      else
      c=c*(i-j+1)/j;
      printf(" %d",c);
    }
    printf("\n");
  }
}
void rombas(int n){
  int i,j,k;
  for(i=1;i<=n;i++){
  for(j=1;j<=n-i;j++){
    printf(" ");
  }
  for(k=1;k<=n;k++){
    if(i==n||i==1||k==n||k==1)
    printf("*");
    else
    printf(" ");
  }
  printf("\n");
}
}
void main() {
  int n,choice;
  printf("Enter the number of rows : ");
  scanf("%d",&n);
  while(1){
  printf("1.floyd\n2.pascle\n3.rombas\n4.Exit");
  printf("\nEnter your choice");
  scanf("%d",&choice);
  //  printf("\n1.pascle\n2.rombas\n3.Exit");
  switch(choice){
    case 1:
    floyd(n);
    break;
    case 2:
    pascle(n);
    break;
    case 3:
    rombas(n);
    break;
    case 4:
    exit(0);
    break;
}
}
}
