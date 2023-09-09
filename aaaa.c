#include<stdio.h>
#include<string.h>
#define N 2
struct TIME
{
int hour;
int min;
};
struct TRAIN_INFO
{
int no;
char t_name[30];
char s_station[20],e_station[20];
struct TIME at,dt;
}t[N];
void sort();
void dep();
void depat_time();
void last();
void main()
{
int i;
for(i=0;i<N;i++)
{
printf("Enter details of train no %d\n",i+1);
printf("Enter train no");
scanf("%d",&t[i].no);
printf("Enter train name");
scanf("%s",t[i].t_name);
printf("Enter start station and end station");
scanf("%s %s",t[i].s_station,t[i].e_station);
printf("Enter arrival time in hh:mm format");
scanf("%d:%d",&t[i].at.hour,&t[i].at.min);
printf("Enter departure time in hh:mm format");
scanf("%d:%d",&t[i].dt.hour,&t[i].dt.min);
}
printf("Train details\n");
printf("Train no\tTrain name\tStart station\tEnd station \t Arrival time \t Departure time\n");
for(i=0;i<N;i++)
printf("%d\t\t%s\t\t%s\t\t%s\t\t%d:%d\t\t %d:%d\n",t[i].no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].at.hour,t[i].at.min,t[i].dt.hour,t[i].dt.min);
sort();
dep();
depat_time();
last();
}//function calling}
void sort()
{
  char str[30];
  char tempstr[30];
  int temp,i,j;
  printf("Enter the depart station name");
  scanf("%s",str);
  printf("Details of train starting from %s station:\n",str);
  for(j=0;j<N;j++)
  {
    for(i=0;i<N-1-j;i++)
    {
    if(t[i].no>t[i+1].no)
    {
      temp=t[i].no;
      t[i].no=t[i+1].no;
      t[i+1].no=temp;
      strcpy(tempstr,t[i].t_name); //swapping of train no
      strcpy(t[i].t_name,t[i+1].t_name);
      strcpy(t[i+1].t_name,tempstr);
      strcpy(tempstr,t[i].s_station); //swapping of train name
      strcpy(t[i].s_station,t[i+1].s_station);
      strcpy(t[i+1].s_station,tempstr);
      strcpy(tempstr,t[i].e_station); //swapping of train start station
      strcpy(t[i].e_station,t[i+1].e_station);
      strcpy(t[i+1].e_station,tempstr);
      temp=t[i].at.hour;  //swapping arrival time
      t[i].at.hour=t[i+1].at.hour;
      t[i+1].at.hour=temp;
      temp=t[i].at.min;
      t[i].at.min=t[i+1].at.min;
      t[i+1].at.min=temp;
      temp=t[i].dt.hour;  //swapping departure time
      t[i].dt.hour=t[i+1].dt.hour;
      t[i+1].dt.hour=temp;
      temp=t[i].dt.min;
      t[i].dt.min=t[i+1].dt.min;
      t[i+1].dt.min=temp;
    }
  }
}//end of for loop
  i=0;
while(i<N)
{
if(!(strcmp(t[i].s_station,str)))
  printf("%d\t\t%s\t\t%s\t\t%s\t\t%d:%d\t\t %d:%d\n",t[i].no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].at.hour,t[i].at.min,t[i].dt.hour,t[i].dt.min);
  i++;
}
}
void dep()
{
  char str[30];
  int h,m,i=0;
  printf("Enter the depart station name");
  scanf("%s",str);
  printf("Enter the departure time in hh:mm format");
  scanf("%d:%d",&h,&m);
  while(i<N)
  {
  if((!(strcmp(t[i].s_station,str)))&& (t[i].dt.hour==h && t[i].dt.min==m))
    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d:%d\t\t %d:%d\n",t[i].no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].at.hour,t[i].at.min,t[i].dt.hour,t[i].dt.min);
    i++;
  }
}
void depat_time()
{ int h,m,i=0;
  printf("Enter the departure time in hh:mm format");
  scanf("%d:%d",&h,&m);
  if(m>60)
  printf("Better luck next time\n");
  while(i<N)
  {
  if ((t[i].dt.hour>=h && t[i].dt.hour<=h+1) && (t[i].dt.min>=m || t[i].dt.min<=m))
    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d:%d\t\t %d:%d\n",t[i].no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].at.hour,t[i].at.min,t[i].dt.hour,t[i].dt.min);
    i++;
  }
}
void last()
{
  char str[30],str1[30];
  int i=0;
  printf("Enter the depart station name and arrival station");
  scanf("%s %s",str,str1);
  printf("Following train start from %s station and arrive at %s station\n",str,str1);
  while(i<N)
  {
  if (strcmp(t[i].s_station,str)==0 && strcmp(t[i].e_station,str1)==0)
    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d:%d\t\t %d:%d\n",t[i].no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].at.hour,t[i].at.min,t[i].dt.hour,t[i].dt.min);
    i++;
  }
}
