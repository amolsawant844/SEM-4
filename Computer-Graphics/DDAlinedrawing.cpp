#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void DDA(int x1,int y1,int x2,int y2);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    //accepting coordinates
    int x1,y1,x2,y2;
    cout<<"enter the starting coordinates of the line\n ";
    cin>>x1>>y1;
    cout<<"enter the ending coordinates of the line\n";
    cin>>x2>>y2;

    //calling line function
    DDA(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}
void DDA(int x1,int y1,int x2,int y2)
{
    int i,dx,dy,steps;
    float x,y;
    float xinc,yinc;
    dx=x2-x1;
    dy=y2-y1;

    //decide weather to move along x direction or x direction
    if(abs(dx)>abs(dy))
    {
        steps=dx;
    }
    else
    {
        steps=dy;
    }

    //calculate the increment value for x and y
    if(abs(dx)!=abs(dy))
    {
        xinc=(float)dx/steps;
        yinc=(float)dy/steps;
    }
    else if(abs(dx)!=abs(dy))
    {
        xinc=1;
        yinc=1;
    }

    //drawing line
    x=x1;
    y=y1;
    putpixel(x,y,WHITE);

    for(i=1;i<steps;i++)
    {
        x=x+xinc;
        y=y+yinc;

        //convert the following floating value to its nearest integer value i.e same as use of floor or ceil
        x1=x+0.5;
        y1=y+0.5;
        //since x1,y1 are integers they will take integer values

        putpixel(x,y,WHITE);
    }

}
