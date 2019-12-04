#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void ellipse_plot(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
}
void midpt_ellipse(int xc,int yc,int rx,int ry)
{
    int x,y;
    float d1,d2,dx,dy;
    x=0;
    y=ry;
    d1=pow(ry,2)-(pow(rx,2)*ry)+(0.25*pow(rx,2));
    dx=2*pow(ry,2)*x;
    dy=2*pow(rx,2)*y;
    do
    {
        ellipse_plot(xc,yc,x,y);
        if(d1<0)
        {
            x++;
            dx=dx+(2*(pow(ry,2)));
            d1=d1+dx+(pow(ry,2));
        }
        else
        {
            x++;
            y--;
            dx=dx+(2*(pow(ry,2)));
            dy=dy-(2*(pow(rx,2)));
            d1=d1+dx-dy+(pow(ry,2));
        }
    }while(dx<dy);
    d2=(pow(ry,2)*(x+0.5)*(x+0.5))+(pow(rx,2)*(y-1)*(y-1))-(pow(rx,2)*pow(ry,2));
    do
    {
        ellipse_plot(xc,yc,x,y);
        if(d2>0)
        {
            x=x;
            y--;
            dy=dy-(2*(pow(rx,2)));
            d2=d2-dy+(pow(rx,2));
        }
        else
        {
            x++;
            y--;
            dy=dy-(2*(pow(rx,2)));
            dx=dx+(2*(pow(ry,2)));
            d2=d2+dx-dy+(pow(rx,2));
        }

    }while(y>0);
}
int main()
{
    int gd=DETECT,gm;
    float xr,yr;
    int xc,yc;
    initgraph(&gd,&gm,"c://TC//BGI");

    printf("enter the coordinates of ellipse\n");
    scanf("%d %d",&xc,&yc);
    printf("enter xradius and yradius:\n");
    scanf("%f %f",&xr,&yr);
    midpt_ellipse(xc,yc,xr,yr);

    getch();
    closegraph();
    return 0;
}

