#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void drawflower();
void Flood_Fill(int x,int y,int new_color,int old_color);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    drawflower();

    getch();
    closegraph();
    return 0;
}
void drawflower()
{
    //petal xradius=10 yradius=50

    circle(200,200,20);
    Flood_Fill(200,200,14,0);

    //vertical and horizontal petals
    ellipse(200,130,0,360,10,50);
    Flood_Fill(200,130,4,0);
    ellipse(200,270,0,360,10,50);
    Flood_Fill(200,270,4,0);
    ellipse(270,200,0,360,50,10);
    Flood_Fill(270,200,4,0);
    ellipse(130,200,0,360,50,10);
    Flood_Fill(130,200,4,0);




}
void Flood_Fill(int x,int y,int new_color,int old_color)
{


    int current=getpixel(x,y);
    if(current==old_color)
    {
        putpixel(x,y,new_color);
        Flood_Fill(x+1,y,new_color,old_color);
        Flood_Fill(x,y+1,new_color,old_color);
        Flood_Fill(x-1,y,new_color,old_color);
        Flood_Fill(x,y-1,new_color,old_color);
    }
    delay(0.7);
}
