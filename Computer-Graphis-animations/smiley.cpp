#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void anim()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            circle(375,240,30);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(375,240,WHITE);

            arc(300,350,180,360,25);
            line(275,350,375,350);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(300,360,WHITE);
            delay(1000);
        }
        else
        {
            circle(375,240,30);
            setfillstyle(SOLID_FILL,BROWN);
            floodfill(375,240,WHITE);

            arc(300,350,180,360,25);
            line(275,350,375,350);
            setfillstyle(SOLID_FILL,RED);
            floodfill(300,360,WHITE);
            delay(1000);
        }

    }
}
void draw_smiley()
{
    circle(300,300,150);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(300,300,WHITE);

    circle(225,240,30);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(225,240,WHITE);

    circle(375,240,30);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(375,240,WHITE);

    arc(300,350,180,360,50);
    line(250,350,350,350);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(300,360,WHITE);

    arc(300,350,180,360,25);
    line(275,350,375,350);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(300,360,WHITE);
    anim();
}




int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_smiley();

    getch();
    closegraph();
    return 0;
}

