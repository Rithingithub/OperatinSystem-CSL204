#include<stdio.h>
int main()
{ int n,n1,i;
printf("Enter the number of processes:");
scanf("%d",&n); int process[n];
printf("\n Enter the size of processes:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&process[i]);
    }
    printf("Enter the no of memoryblocks:");
    scanf("%d",&n1);
    int blocks[n1];
    printf("\n Enter the size of blocks:\n");
    int total=0;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&blocks[i]);
    total=total+blocks[i];
    }
    int process1[n1];
    int job[n1];
    int frag[n1];
    int check[n1];
    for(i=0;i<n1;i++)
    {
        check[i]=0;
       
    }
    int j,used=0;
    i=0; while(i<n)
    { int max=-1,j1=-1,k=-1,max1;
    for(j=0;j<n1;
    j++)
    {
        max1=blocks[j];
        if(max1>=max&&check[j]==0&&max1>=process[i])
        { max=max1; j1=j;
        }
        else
        {
            if(check[j]==0)
            {
                process1[j]=0;
                job[j]=0;
                frag[j]=blocks[j];
               
            }
            }
            }
            if(k!=j1)
            {
                process1[j1]=process[i];
                job[j1]=i+1;
                frag[j1]=blocks[j1]-process[i];
                used=used+process[i];
               
check[j1]=1;
int l;
}
i++;
       
    }
    printf("Block size\tProcess size\tProcess no\tFragmentation\n");
    for(i=0;i<n1;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\n",blocks[i],process1[i],job[i],frag[i]);
        }
}


