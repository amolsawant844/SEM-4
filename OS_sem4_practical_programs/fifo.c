#include<stdio.h>


void fifo(int page[],int pgs,int f)
{
    int i,j;
    int frame[100];
    for(i=0;i<f;i++)
    {
        frame[i]=-1;
    }

    printf("ref string\t page frames\n\n");
    printf("initially\t");
    for(i=0;i<f;i++)
    {
        printf("%d\t",frame[i]);
    }
    printf("\n");
    int flag,k=0,count=0;
    for(i=0;i<pgs;i++)
    {
        printf("%d\t\t",page[i]);
        flag=0;

        //finding if page already present in stack or not
        for(j=0;j<f;j++)
        {
            if(frame[j]==page[i])
            {
                flag=1;
            }
        }

        //if page not present
        if(flag==0)
        {
            frame[k]=page[i];
            k=(k+1)%f;
            count++;

        }
        for(j=0;j<f;j++)
        {
                printf("%d\t",frame[j]);
        }
        printf("\n");
    }
    printf("page faults:%d",count);
}










int main()
{
    int pgs,f,page[100],i;
    printf("Enter the number of pages:\n");
    scanf("%d",&pgs);
    printf("enter the no. frames:\n");
    scanf("%d",&f);
    printf("enter the pages in order:\n");
    for(i=0;i<pgs;i++)
    {
        scanf("%d",&page[i]);
    }
    fifo(page,pgs,f);

    return 0;
}
