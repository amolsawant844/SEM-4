/*
Name	Value
BLACK	0
BLUE	1
GREEN	2
CYAN	3
RED	4
MAGENTA	5
BROWN	6
LIGHTGRAY	7
DARKGRAY	8
LIGHTBLUE	9
LIGHTGREEN	10
LIGHTCYAN	11
LIGHTRED	12
LIGHTMAGENTA	13
YELLOW	14
WHITE	15
*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void Boundary_Fill(int x,int y,int new_color,int old_color);
void Flood_Fill(int x,int y,int new_color,int old_color);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TC\\BGI");

    int ch,x,y,new_color;
    //old color means boundary color
    printf("enter coordinates of center of circle:\n");
    scanf("%d %d",&x,&y);
    int r;
    printf("enter radius of circle:\n");
    scanf("%d",&r);
    circle(x,y,r);
    printf("enter color to be filled:\n");
    scanf("%d",&new_color);
    printf("enter your choice:\n");
    printf("1. Boundary_Fill\n");
    printf("2. Flood_Fill\n");

    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            Boundary_Fill(x,y,new_color,15);//old color means boundary color which is white therefore 15
            break;
        case 2:
            Flood_Fill(x,y,new_color,0);//the color inside the shape that is black therefore 0
            break;

    }

    getch();
    closegraph();
    return 0;
}

void Boundary_Fill(int x,int y,int new_color,int old_color)
{
    int current=getpixel(x,y);
    if(current!=new_color && current!=old_color)
    {
        putpixel(x,y,new_color);
        Boundary_Fill(x+1,y,new_color,old_color);
        Boundary_Fill(x,y+1,new_color,old_color);
        Boundary_Fill(x-1,y,new_color,old_color);
        Boundary_Fill(x,y-1,new_color,old_color);
    }
    delay(1);
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
    delay(1);
}
