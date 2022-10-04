#include<stdio.h> #define MAX 20 int main()
{
int bsize[MAX],fsize[MAX],nb,nf; int temp,low=10000;
static int bflag[MAX],fflag[MAX]; int i,j;
printf("\n enter the number of blocks"); scanf("%d",&nb);
for(i=1;i<=nb;i++)
{
printf("Enter the size of memory block % d",i); scanf("%d", &bsize[i]);
}
printf("\n enter the number of files"); scanf("%d",&nf);
for(i=1;i<=nf;i++)
{
printf("\n enetr the size of file %d",i); scanf("%d",&fsize[i]);
}

Dept.Of .CSE 49 M-DIT KOZHIKODE
for(i=1;i<=nf;i++)
{
for(j=1;j<=nb;j++)
{
if(bflag[j]!=1)
{
temp=bsize[j]-fsize[i]; if(temp>=0)
{
if(low>temp)
{
fflag[i]=j; low=temp;
}
}
}}
bflag[fflag[i]]=1; low=10000;
}
printf("\n file no \t file.size\t block no \t block size"); for(i=1;i<=nf;i++)
printf("\n \n %d \t\t%d\t\t%d\t\t%d",i,fsize[i],fflag[i],bsize[fflag[i]]);
}
