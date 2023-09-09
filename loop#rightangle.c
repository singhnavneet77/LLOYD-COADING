#include<stdio.h>
void main()
/*{
  int n,j,i;
  printf("enter the number of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
    //  printf("%d",i);
    printf("*");
  }
  printf("\n");

  }

}*/
{
  int i,j,n;
  printf("enter no. of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
    if(j%2==0)
    printf("0");
    else
    printf("1");
  }
  printf("\n");
  }
}
