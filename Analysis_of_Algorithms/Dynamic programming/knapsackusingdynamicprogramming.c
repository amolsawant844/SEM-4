#include <stdio.h>
#define SIZE 20


int findMax(int a, int b)
{
    return (a > b) ? a : b;
}
int knapSack(int val[], int wt[], int W, int numOfObjects)
{
//    string mySolutionset = "";
    int knaptable[numOfObjects + 1][W + 1];

    for (int i = 0; i <= numOfObjects; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                knaptable[i][j] = 0;
            }
            else if (wt[i - 1] <= j)
            {
                knaptable[i][j] = findMax(knaptable[i - 1][j], val[i - 1] + knaptable[i - 1][j - wt[i - 1]]);
                //mySolutionset[i] =
            }
            else
            {
                knaptable[i][j] = knaptable[i - 1][j];
            }
        }
    }
    for(int i=0;i<=numOfObjects;i++)
    {
        for(int j=0;j<=W;j++)
        {
            printf("%d ",knaptable[i][j]);
        }
        printf("\n");
    }
    return knaptable[numOfObjects][W];
}
int main()
{

    int val[SIZE], wt[SIZE], numOfObjects, W;
    printf("Enter the max capacity of KnapSack : ");
    scanf("%d",&W);
    printf("Enter the number of objects : ");
    scanf("%d",&numOfObjects) ;
    printf("enter the values of objects");
    for (int i = 0; i < numOfObjects; i++)
        scanf("%d",&val[i]) ;

    printf("enter the weight of objects");
    for (int i = 0; i < numOfObjects; i++)
        scanf("%d",&wt[i]) ;

    printf("maximum profit :%d",knapSack(val, wt, W, numOfObjects));
    return 0;
}
