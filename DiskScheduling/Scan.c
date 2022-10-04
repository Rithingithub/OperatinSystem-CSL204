#include<stdio.h>
#define min -1;
void main()
{
int seek=0,diff,avg,n1=0,n2=0,n,i,j;
printf("enter size of queue:");
scanf("%d",&n);
int a,q[n],q1[n],q2[n];
for(i=1;i<=n;i++)
{
 printf("enter queue[%d]:",i);
 scanf("%d",&q[i]);
}
printf("enter queue[0]:");
scanf("%d",&q[0]);
q1[n1]=q[0];
q2[n2]=0;
for(i=1;i<=n;i++)
{
 if(q[0]>q[i])
 {
 n1++;
 q1[n1]=q[i];
 }
 else
 {
 n2++;
 q2[n2]=q[i];
 }
}
for(i=1;i<=n1;i++)
{
 for(j=1;j<=n1;j++)
 {
 if(q1[j]<q1[j+1])
 {
 a=q1[j];
 q1[j]=q1[j+1];
 q1[j+1]=a;
 }
 }
}
for(i=1;i<=n2;i++)
{
 for(j=1;j<=n2-i;j++)
 {
 if(q2[j]>q2[j+1])
 {
 a=q2[j+1];
 q2[j+1]=q2[j];
 q2[j]=a;
 }
 }
}
for(i=0;i<=n1-1;i++)
{
 diff=q1[i]-q1[i+1];
 if(diff<0)
 diff*=min;
 printf("head is move from %d to %d with seek time %d\n",q1[i],q1[i+1],diff);
 seek+=diff;
}
diff=q1[n1]-q2[0];
if(diff<0)
diff*=min;
printf("head is move from %d to %d with seek time %d\n",q1[n1],q2[0],diff);
seek+=diff;
for(j=0;j<=n2-1;j++)
{
 diff=q2[j]-q2[j+1];
 if(diff<0)
 diff*=min;
 printf("head is move from %d to %d with seek time %d\n",q2[j],q2[j+1],diff);
 seek+=diff;
}
printf("total seek time is %d\n",seek);
avg=seek/n;
printf("average seek time is %d\n",avg);
}
