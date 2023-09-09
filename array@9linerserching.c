//Liner searching;
/*#include <stdio.h>
void main()
{  int n,i,c=0;
   int arr[5] = {5,3,4,78,45};
  printf("enter a number to serch");
  scanf("%d",&n);
  for(i=0;i<5;i++)
  {
    if(n==arr[i])
  {  printf("Element found at %d\n",i+1);
    c++;
  }
}
if(c==0)
{
  printf("Not found");
}}*/

#include <stdio.h>
void main()
{  int n,i,c=0,s;
  printf("Enter the size of array : ");
  scanf("%d",&n);
   int arr[n];
  printf("Enter the array element : ");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  printf("Enter your search element : ");
   scanf("%d",&s);
  for(i=0;i<n;i++)
  {
    if(s==arr[i])
  {  printf("Element found at %d\n",i+1);
    c++;
  }
}
if(c==0)
{
  printf("Not found");
}}
