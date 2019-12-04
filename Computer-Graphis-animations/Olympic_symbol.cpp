#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void circle_plot(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc-y,yc-x,WHITE);

}
void midpt_circle(int xc,int yc,int r)
{
    int x=0,y=r,p=1-r;
    //line(320,0,320,480);
    //line(0,240,640,240);
    circle_plot(xc,yc,x,y);

    while(x<y)
    {
        x++;
        if(p<0)
        {
            p+=2*(x)+1;
        }
        else
        {
            y--;
            p+=2*(x-y)+1;
        }
        circle_plot(xc,yc,x,y);
        delay(10);
    }

}
void draw_olympic()
{

    midpt_circle(100,100,40);
    midpt_circle(200,100,40);
    midpt_circle(300,100,40);

    midpt_circle(150,140,40);
    midpt_circle(250,140,40);
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_olympic();

    getch();
    closegraph();
    return 0;
}
