
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void bresenham(int x1,int y1,int x2,int y2,int thick);
int sign(int a);
int main()
{
    int gd=DETECT,gm,x1,y1,x2,y2,thick;
    initgraph(&gd,&gm,"c://TC//BGI");

    printf("enter 1st coordinates:\n");
    scanf("%d %d",&x1,&y1);//100,100
    printf("enter 2nd coordinates:\n");
    scanf("%d %d",&x2,&y2);//200,450
    printf("enter thickness from 0 to 4:\n");
    scanf("%d",&thick);
    bresenham(x1,y1,x2,y2,thick);


    getch();
    closegraph();
    return 0;
}
void bresenham(int x1,int y1,int x2,int y2,int thick)
{
    int dx,dy,s1,s2,temp,swap,i,x,y,G;
    dx=abs(x2-x1);//100
    dy=abs(y2-y1);//350
    s1=sign(x2-x1);//1
    s2=sign(y2-y1);//1
    G=(2*dy)-dx;//600
    //since bresenham used for slope less than 1 so if dy>dx than we swap the value it else we dont
    if(dy>dx)//true
    {
        temp=dy;
        dy=dx;//100
        dx=temp;//350
        swap=1;
    }
    else
    {
        swap=0;
    }
    x=x1;//100
    y=y1;//100
    putpixel(x,y,WHITE);
    for(i=1;i<=dx;i++)//i=1 to i=350
    {
        if(G<0)
        {
            if(swap==0)//if  not swapped then x ko increment
            {
                x=x+s1;
            }
            else//if swapped then y ko increment
            {
                y=y+s2;
            }
            G=G+(2*dy);
        }
        else
        {
            x=x+s1;//incremented by 1
            y=y+s2;//incremented by 1
            G=G+(2*dy)-(2*dx);//100,-400
        }
        if(thick==0)
        {
            putpixel(x,y,WHITE);
        }

        else if(thick==1)
        {
            putpixel(x,y,WHITE);
            putpixel(x,(y+1),WHITE);
        }

        else if(thick==2)
        {
            putpixel(x,y,WHITE);
            putpixel(x,(y+1),WHITE);
            putpixel(x,(y+2),WHITE);
        }

        else if(thick==3)
        {
            putpixel(x,y,WHITE);
            putpixel(x,(y+1),WHITE);
            putpixel(x,(y+2),WHITE);
            putpixel(x,(y+3),WHITE);
        }

        else if(thick==4)
        {
            putpixel(x,y,WHITE);
            putpixel(x,(y+1),WHITE);
            putpixel(x,(y+2),WHITE);
            putpixel(x,(y+3),WHITE);
            putpixel(x,(y+4),WHITE);
        }
        delay(10);
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
