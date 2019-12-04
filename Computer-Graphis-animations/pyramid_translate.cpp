#include<stdio.h>
#include<graphics.h>
#include<conio.h>





int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_pyramid();

    getch();
    closegraph();
    return 0;
}

