#include<stdio.h>

void worst_fit(int proc[],int p,int block[],int b)
{
    int block_flag[100]={0};
    int i,j,temp;
    //sorting blocks in descending order
    for(i=0;i<b-1;i++)
    {
        for(j=0;j<b-i-1;j++)
        {
            if(block[j]<block[j+1])
            {
                temp=block[j];
                block[j]=block[j+1];
                block[j+1]=temp;
            }
        }
    }
    int ct;
    for(i=0;i<p;i++)
    {
        ct=0;
        for(j=0;j<b;j++)
        {
            if(proc[i]<block[j] && block_flag[j]==0)
            {
                ct=1;
                block_flag[j]=1;
                printf("process %d allocated\n",i+1);
                break;
            }
        }
        if(ct==0)
        {
            printf("process %d not allocated\n",i+1);
        }
    }
}
void best_fit(int proc[],int p,int block[],int b)
{
    int block_flag[100]={0};
    int i,j,temp;
    //sorting blocks in ascending order
    for(i=0;i<b-1;i++)
    {
        for(j=0;j<b-i-1;j++)
        {
            if(block[j]>block[j+1])
            {
                temp=block[j];
                block[j]=block[j+1];
                block[j+1]=temp;
            }
        }
    }
    int ct;
    for(i=0;i<p;i++)
    {
        ct=0;
        for(j=0;j<b;j++)
        {
            if(proc[i]<block[j] && block_flag[j]==0)
            {
                ct=1;
                block_flag[j]=1;
                printf("process %d allocated\n",i+1);
                break;
            }
        }
        if(ct==0)
        {
            printf("process %d not allocated\n",i+1);
        }
    }

}
void first_fit(int proc[],int p,int block[],int b)
{

    int block_flag[100]={0};
    int i,j;
    int ct;
    for(i=0;i<p;i++)
    {
        ct=0;
        for(j=0;j<b;j++)
        {
            if(proc[i]<=block[j] && block_flag[j]==0)
            {
                ct=1;
                block_flag[j]=1;
                printf("process %d allocated\n",i+1);
                break;
            }
        }
        if(ct==0)
        {
            printf("process %d not allocated\n",i+1);
        }
    }

}
int main()
{
    int i,p,b,proc[100],block[100];
    printf("enter the no. of processes\n");
    scanf("%d",&p);
    printf("enter the no. of blocks\n");
    scanf("%d",&b);
    printf("enter the size of processes\n");
    for (i=0;i<p;i++)
    {
        printf("size of process %d:",i+1);
        scanf("%d",&proc[i]);
    }
    printf("enter the size of blocks\n");
    for (i=0;i<b;i++)
    {
        printf("size of block %d:",i+1);
        scanf("%d",&block[i]);
    }
    printf("first_fit:\n");
    first_fit(proc,p,block,b);
    printf("best_fit:\n");
    best_fit(proc,p,block,b);
    printf("worst_fit:\n");
    worst_fit(proc,p,block,b);
    return 0;

}
