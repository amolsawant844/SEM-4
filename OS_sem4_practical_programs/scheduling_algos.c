#include<stdio.h>
void priority(int p,int bt[])
{
    int prior[100],i,j,temp,wt[100],tat[100];
    printf("enter priorities of all processes");
    for(i=0;i<p;i++)
    {
        scanf("%d",&prior[i]);
    }
    int procno[100];
    for(i=0;i<p;i++)
    {
        procno[i]=i+1;
    }

    //sorting according to priority
    for(i=0;i<p-1;i++)
    {
        for(j=0;j<p-i-1;j++)
        {
            if(prior[j]>prior[j+1])
            {
                temp=prior[j+1];
                prior[j+1]=prior[j];
                prior[j]=temp;

                temp=bt[j+1];
                bt[j+1]=bt[j];
                bt[j]=temp;

                temp=procno[j+1];
                procno[j+1]=procno[j];
                procno[j]=temp;
            }
        }
    }

    for(i=0;i<p;i++)
    {
        if(i==0)
        {
            wt[i]=0;
            tat[i]=bt[i];
        }
        else
        {
            wt[i]=tat[i-1];
            tat[i]=wt[i]+bt[i];
        }
    }

    printf("process\tBt\twt\ttat\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t%d\t%d\t%d\n",procno[i],bt[i],wt[i],tat[i]);
    }
}
void rr(int n,int bt[])
{
    int st[10],wt[10],tat[10],tq;
    int i,count=0,swt=0,stat=0,temp,sq=0;
    float awt=0.0,atat=0.0;
    printf("Enter time quantum:");
    scanf("%d",&tq);
    for(i=0;i<n;i++)
    {

        st[i]=bt[i];
    }
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=tq;
            if(st[i]==0)
            {
                count++;
                continue;
            }
            if(st[i]>tq)
                st[i]=st[i]-tq;
            else
                if(st[i]>=0)
                {
                    temp=st[i];
                    st[i]=0;
                }
                sq=sq+temp;
                tat[i]=sq;
        }
        if(n==count)
        break;
    }
    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        swt=swt+wt[i];
        stat=stat+tat[i];
    }
        awt=(float)swt/n;
        atat=(float)stat/n;
        printf("Process_no\t Burst time\t Wait time \tTurn around time\n");
        for(i=0;i<n;i++)
            printf("%d\t %d\t %d\t %d\n",i+1,bt[i],wt[i],tat[i]);
        printf("Avg wait time is %fAvg turn around time is %f",awt,atat);

}





void sjf(int p,int bt[])
{
    int wt[100], tat[100],i,j,temp;
    int procno[100];
    for(i=0;i<p;i++)
    {
        procno[i]=i+1;
    }

    //sorting in ascending order of bt
    for(i=0;i<p-1;i++)
    {
        for(j=0;j<p-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {
                temp=bt[j+1];
                bt[j+1]=bt[j];
                bt[j]=temp;

                temp=procno[j+1];
                procno[j+1]=procno[j];
                procno[j]=temp;
            }
        }
    }

    for(i=0;i<p;i++)
    {
        if(i==0)
        {
            wt[i]=0;
            tat[i]=bt[i];
        }
        else
        {
            wt[i]=tat[i-1];
            tat[i]=wt[i]+bt[i];
        }
    }
    //printing
    printf("process\tBt\twt\ttat\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t%d\t%d\t%d\n",procno[i],bt[i],wt[i],tat[i]);
    }


}
void fcfs(int p,int bt[])
{
    int wt[100], tat[100],i;
    for(i=0;i<p;i++)
    {
        if(i==0)
        {
            wt[i]=0;
            tat[i]=bt[i];
        }
        else
        {
            wt[i]=tat[i-1];
            tat[i]=wt[i]+bt[i];
        }
    }
    //printing
    printf("process\tBt\twt\ttat\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
}
int main()
{
    int p,bt[100],i;
    printf("Enter no. of processes\n");
    scanf("%d",&p);
    printf("enter the burst time of all processes\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&bt[i]);
    }
    //fcfs(p,bt);
    //sjf(p,bt);
    //rr(p,bt);
    priority(p,bt);
    return 0;
}
