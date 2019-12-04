#include<stdio.h>
#define SIZE 10000
int top=-1;
int stack[SIZE];
void push(int a)
{
    top++;
    stack[top]=a;
}
int check(int k,int frame[],int f)//return the index of that value which is least recently used
{

    int ptr,j;
    int arr[100];
    for(j=0;j<f;j++)
    {

        ptr=top-1;

        while(ptr>=0)
        {


            if(stack[ptr]==frame[j])
            {

                arr[j]=ptr;
                break;
            }

            ptr--;
        }

    }

    int min=999,i,d=0;
    for(i=0;i<f;i++)
    {
        if(min>arr[i])
        {
            d=i;
            min=arr[i];
        }
    }
    return d;

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

    int j,k;
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
    k=0;//no. of elements getting filled
    int flag,d;
    for(i=0;i<pgs;i++)
    {

        printf("%d\t\t",page[i]);
        flag=0;
        push(page[i]);
        for(j=0;j<f;j++)
        {
            if(page[i]==frame[j])
            {
               flag=1;
            }

        }
        //for first f elements
        if(flag==0 && k<f)
        {
            frame[k]=page[i];
           // k++;
        }
        if(flag==0 && k>=f)
        {
            d=check(k,frame,f);
            frame[d]=page[i];

        }
        for(j=0;j<f;j++)
        {
                printf("%d\t",frame[j]);
        }
        printf("\n");
        k++;
    }









    return 0;
}
