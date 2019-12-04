#include<stdio.h>
#include<conio.h>
#include<graphics.h>
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
    line(320,0,320,480);
    line(0,240,640,240);
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
        delay(100);
    }

}
int main()
{
    int gd=DETECT,gm,xc,yc,r;
    initgraph(&gd,&gm,"c://TC//BGI");

    printf("enter the coordinates of circle\n");
    scanf("%d %d",&xc,&yc);
    printf("enter radius:\n");
    scanf("%d",&r);
    midpt_circle(xc,yc,r);

    getch();
    closegraph();
    return 0;
}
