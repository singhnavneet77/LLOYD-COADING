/*print the count of positive negative or number of zero*/
#include<stdio.h>
void main()
{
  int n,neg=0,p=0,z=0;
  char a;
  do {
  printf("enter a number");
  scanf("%d",&n);
  if(n>0)
  { printf("possitive number");
  p++;
  }
  else if(n==0)
  { printf("zero number");
  z++;
  }
  else
  {printf("negative number");
  neg++;
  }
  printf("\ndo you want to continue press y for yes");
  scanf(" %c",&a);
} while(a=='y');
}
