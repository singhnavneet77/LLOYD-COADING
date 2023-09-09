/*menu driven program */
#include<stdio.h>
void main()
{
  int num,n,i,j,f=1,t,p,r,sum=0,sd;
  do{
    printf("1.factoril of num\n2.table of the num\n3.sum of the digit\n4.exit");
    scanf("%d",&num);
    if(num==1){
    printf("enter a number");
    scanf("%d",&n);
    for(j=n;j>1;j--)
    {
    f=f*j;
    }
    printf(" factoril of number%d\n",f );
    }
    else if(num==2){
    printf("enter a number for its table");
    scanf("%d",&t);
    for(i=1;i<=10;i++)
    {
    p=t*i;
    printf("%d*%d=%d\n",t,i,p);
    }
    }
    else if(num==3)
    {
    printf("enter a number for sum of digit");
    scanf("%d",&sd);
    /*for( ;sd!=0;sd=sd/10)
    {
    r=sd%10;
    sum=sum+sd; */
  while(sd>0)
    {
      r=sd%10;
      sum=sum+r;
      sd=sd/10;
    }
    printf("sum of the digit=%d\n",sum);
    // printf("sum fo digit%d",sum);
    }
  }while (num!=4);

  }
