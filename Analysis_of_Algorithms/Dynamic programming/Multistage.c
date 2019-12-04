#include<stdio.h>
#include<string.h>
#define INF 999

int V,K;
int G[10][10];
int d[10]= {INF} ;
int cost[10] = {INF};
int p[10] = {0};
//Reading Graph
void readGraph()
{
  for (int i = 0; i < V; i++)
    {
      G[i][i] = 0; //Making diagonal elements zero
      for(int j = i+1; j < V; j++)
      {
        printf("\n Enter edge cost %d --> %d ",i+1,j+1);
        scanf("%d",&G[i][j]);
        G[j][i]=0; //Since it a directed graph
      }
    }
}
//Displaying graph
void displayGraph()
{
  for(int i = 0;i<V;i++)
  {
    for (int j=0;j<V;j++)
      if(G[i][j]!=0)
        printf("%d --> %d = %d\t",i+1,j+1,G[i][j]);
    printf("\n");
  }

}

//forwardapproach
void forwardmultistage()
{
  cost[V-1] = 0;
  for (int j = V-2; j>=0; j--)
  {
    for  (int r = V-1; r > j; r--)
    {
      if(G[j][r]!=0) //Making sure edge exists
        if(cost[j]>cost[r]+G[j][r])
        {
          cost[j]=cost[r]+G[j][r];
          d[j] = r;
        }
    }

  }
}
//Printing forward min cost path
void forwardcostpath()
{
  p[0] = 0; //Source vertex
  p[K-1] = V-1; //Destination vertex

  for (int j=1; j<=K-2; j++)
    p[j] = d[p[j-1]];

  for(int j=0; j < K; j++)
    if(j == K-1)
      printf(" %d\n",p[j]+1);
    else
       printf("%d--> ",p[j]+1);
}
void printarray(int c[10])
{
  for(int i=0;i<V;i++)
    printf(" %d ",c[i]);
  printf("\n");
}

void initialize()
{
  for(int i=0;i<V;i++)
  {
    cost[i]=INF;
    d[i]  = -1;
  }
}


int main()
{
  int choice;
  printf("\n Enter number of vertices : ");
  scanf("%d",&V);
  printf("\n Enter number of stages : ");
  scanf("%d",&K);
  initialize();
  readGraph();
  printf("\n Egdes in graph are : \n");
  displayGraph();


  forwardmultistage();
  printf("\n Using Forward approach\n");
  printf("\n Cost array is : ");
  printarray(cost);
  printf(" d array is : ");
  printarray(d);
  printf("\n Minimum Cost from %d to %d is %d",1,V,cost[0]);
  printf("\n Minimum Cost Path is : ");
  forwardcostpath();
}
