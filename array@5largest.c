/*print the largest digit in the number  */
#include<stdio.h>
void main()
{
  int  n,i,max,r,p;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
  printf("enter a number");
  scanf("%d",&arr[i]);
}
  max=0;
for(i=0;i<n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
      p=i;
    }
}
printf("%d is largest\n",max );
printf("the position is %d\n",p+1);
printf("the index is %d",p);
}
