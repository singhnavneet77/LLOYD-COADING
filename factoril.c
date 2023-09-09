#include<stdio.h>
/*void main()
{
  int num,i,fact=1;
  printf("enter a number");
  scanf("%d",&num);
  i=num;
  new: fact=fact*i;
  i--;
  if (i>1)
  goto new ;
printf("%d",fact);

}*/
void main()
 {
  int n,i,fact=1;
  printf("enter a number ");
  scanf("%d",&n);
  for(i=n;i>1;i--)
  {
    fact=fact*i;
  }
  printf("factoril of number%d\n",fact);
}
