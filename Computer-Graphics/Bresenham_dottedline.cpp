
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void bresenham(int x1,int y1,int x2,int y2);
int sign(int a);
int main()
{
    int gd=DETECT,gm,x1,y1,x2,y2;
    initgraph(&gd,&gm,"c://TC//BGI");

    printf("enter 1st coordinates:\n");
    scanf("%d %d",&x1,&y1);
    printf("enter 2nd coordinates:\n");
    scanf("%d %d",&x2,&y2);
    bresenham(x1,y1,x2,y2);


    getch();
    closegraph();
    return 0;
}
void bresenham(int x1,int y1,int x2,int y2)
{
    int dx,dy,s1,s2,temp,swap,i,x,y,dp;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    s1=sign(x2-x1);
    s2=sign(y2-y1);
    dp=(2*dy)-dx;
    if(dy<dx)
    {
        temp=dy;
        dy=dx;
        dx=temp;
        swap=1;
    }
    else
    {
        swap=0;
    }
    x=x1;
    y=y1;
    putpixel(x,y,WHITE);
    for(i=1;i<=dx;i++)
    {
        if(dp<0)
        {
            if(swap==0)
            {
                x=x+s1;
            }
            else
            {
                y=y+s2;
            }
            dp=dp+(2*dy);
        }
        else
        {
            x=x+s1;
            y=y+s2;
            dp=dp+(2*dy)-(2*dx);
        }
        if(i%2==0)
        {putpixel(x,y,WHITE);}
    }

}
int sign(int a)
{
    if(a<0)
    {
        return -1;
    }
    else if(a==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
