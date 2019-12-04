#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void fillsignal(int x,int y,int color)
{
    setfillstyle(SOLID_FILL,color);
    floodfill(x,y,WHITE);
    delay(1000);
}
void draw_signal()
{
    int points[]={0,200,100,400,200,200,100,0,0,200};
    drawpoly(5,points);
    rectangle(50,100,150,300);

    circle(100,130,30);
    circle(100,190,30);
    circle(100,250,30);
    fillsignal(100,130,4);
    fillsignal(100,130,0);
    fillsignal(100,190,14);
    fillsignal(100,190,0);
    fillsignal(100,250,2);



}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_signal();

    getch();
    closegraph();
    return 0;
}
