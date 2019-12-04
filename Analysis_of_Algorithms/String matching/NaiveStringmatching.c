#include<stdio.h>
#include<string.h>
int main()
{
    char sent[100];
    char find[100];
    printf("enter the string:\n");
    gets(sent);
    printf("enter the string to be found\n");
    gets(find);
    int n,m;
     n=strlen(sent);
     m=strlen(find);
    
   int k=0,i,j;
   for( i=0;i<=n-m;i++)
   {
       for( j=0;j<m;j++)
       {

           if(sent[i+j]!=find[j])
           {
               break;
           }

       }
       if(j==m)
           {
               k=1;
               printf("match found");
               break;
           }
   }
   if(k==0)
   {
       printf("match not found");
   }





    return 0;
}
