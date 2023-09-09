#include<stdio.h>
#include<string.h>
struct Time {
  int h;
  int min;
};
struct TRAIN_INFO {
  int  t_no;
  char t_name[30];
  struct Time dt,at;
  char s_station[30],e_station[30];
};//t[n];
void main() {
  int n,i,choice,store;
printf("Enter the number of trains : ");
scanf("%d",&n);
struct TRAIN_INFO t[n];
for(i=0;i<n;i++){
printf("Enter train name : ");
scanf("%s",t[i].t_name);
printf("Enter train number : ");
scanf("%d",&t[i].t_no);
printf("Enter start station : ");
scanf("%s",t[i].s_station);
printf("Enter end station : ");
scanf("%s",t[i].e_station);
printf("Enter departure time in hh:mm formate : ");
scanf("%d:%d",&t[i].dt.h,&t[i].dt.min);
printf("Enter arrival time in hh:mm formate : ");
scanf("%d:%d",&t[i].at.h,&t[i].at.min);}
printf("Train no\tTrain name\tTrain startstation\tTrain endstation\tTrain departuretime\tTrain arrivaltim\t");
for(i=0;i<n;i++){
printf("\n%d\t   \t%-20s  \t%-9s\t  \t%-15s      \t%d:%-20d   %d:%d",t[i].t_no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].dt.h,t[i].dt.min,t[i].at.h,t[i].at.min);
}
int j,k,c,dt1,h1,min1;
char depart[20],temp[20];
char strst1[30],endst1[30];
//printf("    1.Same departure\n");
printf("   Enter your choice : ");
scanf("%d",&choice);
switch(choice){
  case 1:
printf("Enter departure station : ");
scanf("%c",&depart);
gets(depart);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
for(k=0;k<n-1;k++){
  if(t[k].t_no>t[k+1].t_no){
    c=t[k].t_no;
    t[k].t_no=t[k+1].t_no;
    t[k+1].t_no=c;
    strcpy(temp,t[k].t_name);
    strcpy(t[k].t_name,t[k+1].t_name);
    strcpy(t[k+1].t_name,temp);
    strcpy(temp,t[k].s_station);
    strcpy(t[k].s_station,t[k+1].s_station);
    strcpy(t[k+1].s_station,temp);
    strcpy(temp,t[k].e_station);
    strcpy(t[k].e_station,t[k+1].e_station);
    strcpy(t[k+1].e_station,temp);
    c=t[k].dt.h;
    t[k].dt.h=t[k+1].dt.h;
    t[k+1].dt.h=c;
    c=t[k].dt.min;
    t[k].dt.min=t[k+1].dt.min;
    t[k+1].dt.min=c;
    c=t[k].at.h;
    t[k].at.h=t[k+1].at.h;
    t[k+1].at.h=c;
    c=t[k].at.min;
    t[k].at.min=t[k+1].at.min;
    t[k+1].at.min=c;     }
}
}
}for(i=0;i<n;i++){
  store=strcmp(depart,t[i].s_station);
  if(store==0){
printf("\n%d\t   \t%-20s  \t%-9s\t  \t%-15s      \t%d:%-20d   %d:%d",t[i].t_no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].dt.h,t[i].dt.min,t[i].at.h,t[i].at.min);
break;
}
}
//}//part 2
case 2:
printf(" 2.Enter departure station : ");
scanf("%c",&depart);
gets(depart);
//gets(dt1);
printf("Enter time in this formate hh:mm : ");
scanf("%d:%d",&h1,&min1);
for(i=0;i<n;i++){
store=strcmp(depart,t[i].s_station);
if(store==0 && h1==t[i].dt.h && min1==t[i].dt.min){
printf("\n%d\t   \t%-20s  \t%-9s\t  \t%-15s      \t%d:%-20d   %d:%d",t[i].t_no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].dt.h,t[i].dt.min,t[i].at.h,t[i].at.min);
break;
}
}//part third
case 3:
printf(" 3.Enter departure time in formate hh:mm : ");
scanf("%d:%d",&h1,&min1);
if(min1>60)
printf("Please enter valid time ");
for(i=0;i<n;i++){
if((t[i].dt.h>=h1 && t[i].dt.h<=h1+1) && (t[i].dt.min>=min1 || t[i].dt.min<=min1))
printf("\n%d\t   \t%-20s  \t%-9s\t  \t%-15s      \t%d:%-20d   %d:%d",t[i].t_no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].dt.h,t[i].dt.min,t[i].at.h,t[i].at.min);
break;
}
case 4:
//char strst1[30],endst1[30];
printf(" 4.Enter the startstation and endstation name : ");
scanf("%s %s",strst1,endst1);
printf(" This train start from %s station and arrive at %s station\n : ");
for(i=0;i<n;i++){
  if(strcmp(t[i].s_station,strst1)==0 && strcmp(t[i].e_station,endst1)==0)
  printf("\n%d\t   \t%-20s  \t%-9s\t  \t%-15s      \t%d:%-20d   %d:%d",t[i].t_no,t[i].t_name,t[i].s_station,t[i].e_station,t[i].dt.h,t[i].dt.min,t[i].at.h,t[i].at.min);
  break;
}
case 5:
printf("Exit\n");
break;
default :
printf("Enter valid choice\n");
}}
