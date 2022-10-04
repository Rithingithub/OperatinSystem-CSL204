#include<stdio.h>
struct process
{
int ps;
int flag;
}
p[50];
struct sizes
{
int size;
int alloc;
}
s[5];
int main()
{
int i=0,np=0,n=0,j=0;
printf("\nfirst fit");
printf("\n");
printf("enter the no.of blocks:\t");
scanf("%d",&n);
printf("\t\t\nenter the size for %d blocks\n",n);
for(i=0;i<n;i++)
{
printf("enter the size of for %d block\t",i);
scanf("%d",&s[i].size);
}
printf("\n\t\tenter the no.of process\t");
scanf("%d",&np);
printf("enter the size of %d processes!\t",np);
printf("\n");
for(i=0;i<np;i++)
{
printf("enter the size of process%d\t",i);
scanf("\n%d",&p[i].ps);
}
printf("\n\t\tallocation of blocks using first fit is as follows\n");
printf("\n\t\tprocess\t\tprocess size\tblocks\n");
for(i=0;i<np;i++)
{
for(j=0;j<n;j++)
{
if(p[i].flag!=1)
{
if(p[i].flag!=1)
{
if(p[i].ps<=s[j].size)
{
if(!s[j].alloc)
{
p[i].flag=1;
s[j].alloc=1;
printf("\n\t\t%d\t\t\t%d\t%d\t",i,p[i].ps,s[j].size);
}
}
}
}
}
}
for(i=0;i<np;i++)
{
if(p[i].flag!=1)
printf("sorry!!!!!!!process %d must wait as there is no sufficient memory\n",np);
}
}


