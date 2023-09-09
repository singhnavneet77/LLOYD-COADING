#include<stdio.h>
#include<string.h>
void main()
{
int n,i,v=0,a=0,d=0,co=0,s=0;
printf("enter the size of array");
scanf("%d\n",&n);
char arr[n];
gets(arr);
for(i=0;i<n;i++){
 if(arr[i]>='a'&& arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z')
{a++;
  if(arr[i]=='a'||arr[i]=='e'||arr[i]=='u'||arr[i]=='i'||arr[i]=='o'||arr[i]=='A'||arr[i]=='E'||arr[i]=='U'||arr[i]=='I'||arr[i]=='O')
v++;
else
co++;
}
else if(arr[i]>'0'&& arr[i]<'9')
//digits
d++;
else
//speical
s++;
}printf("alphabet %d\n",a);
printf("vowel %d\n",v);
printf("const %d\n",co);
printf("digit %d\n",d);
printf("special character %d\n",s);
}
