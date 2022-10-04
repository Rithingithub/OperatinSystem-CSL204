#include<stdio.h>
#define min -1;
void main()
{
int n,head,i,j,k,seek=0,diff;
float avg;
printf("enter size of queue:");
scanf("%d",&n);
int queue[n];
printf("enter values into queue\n");
for(i=1;i<=n;i++)
{
 printf("enter queue[%d]:",i);
 scanf("%d",&queue[i]);
}
printf("enter initial head position:");
scanf("%d",&head);
queue[0]=head;
for(i=0;i<n;i++)
{
 diff=queue[i]-queue[i+1];
 if(diff<0)
 diff=diff*min
 seek+=diff;
 printf("move head from %d to %d with seek %d\n",queue[i],queue[i+1],diff);
}
printf("total seek time is %d\n",seek);
avg=seek/n;
printf("average seek time is %f\n",avg);
}
