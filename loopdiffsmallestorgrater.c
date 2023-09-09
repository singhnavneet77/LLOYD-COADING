/*differet between smallest and gratest number write in file*/
#include<stdio.h>
void main()
{
  int n,max,min,i;
  printf("enter a number");
  scanf("%d",&n);
    max=n;
    min=n;
  for(i=1;i<=9;i++)
  {
  printf("enter a number");
  scanf("%d",&n);
  if(max<=n)
  max=n;
  if(min>=n)
  min=n;
}
printf("maximum number%d\n",max);
printf("minimum number%d\n",min);
printf("the different between number%d",(max-min));

}
