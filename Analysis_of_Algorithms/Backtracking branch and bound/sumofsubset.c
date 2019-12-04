#include "stdio.h"
int x[10] = {0};
int m;
int w[10];
int n,cnt=0,noofsoln=0;

void display(int x[],int k)
{

  for (int i=0;i<=k;i++)
    printf(" %d  ", x[i]);
  if(k<n)
  {
    for(int i=k+1;i<n;i++)
      printf(" 0  ");
  }
  printf("\n");

}
void sumofsubset(int s, int r, int k)
{
    //kth element 0,1,2...3
    //s=0 initially, meaning...initially the array is empty 0,3,7...7
  x[k] = 1;//if we add kth elemen[1,0,0,0],[1,1,0,0],[1,1,1,0]..[1,1,0,1]
  if(s+w[k] == m)//if total wt == max wt..true
    display(x,k);
  else if (s + w[k] + w[k+1] <= m)//if we include its next element and still the sum<m then we call again (0+3+4<=13),(3+4+5<=13),(7+5+6>13)
    sumofsubset(s + w[k],r-w[k],k+1);//by calling again we add one more element and check if sum<m ..call(3,15,1),(7,11,2)

    //
  if((s+r-w[k]>=m) && (s+w[k+1]<=m))//(7+11-5>=13)&&(7+6<=13)
  {
    x[k] = 0;//[1,1,0,0]
    sumofsubset(s ,r-w[k],k+1);//(7,11,3)
  }

}

int main(void) {

  printf("Enter total sum required : ");
  scanf("%d",&m);//13
  printf("Enter no of elements in subset : ");
  scanf("%d",&n);//4
  int r=0;
  for(int i=0;i<n;i++)
  {
    printf("Enter element %d : ",(i+1));
    scanf("%d",&w[i]);//[3,4,5,6]
    r+=w[i];//r=18
  }
  sumofsubset(0, r ,0);

  printf("\n No of Nodes (call to sumofsubset procedure)  : %d\n",cnt);


}
