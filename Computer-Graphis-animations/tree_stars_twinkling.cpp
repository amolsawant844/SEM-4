#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void anim()
{
    int n=0;
    while(n<=10)
    {
        if(n%2==0)
        {
            int points[]={100,100,75,125,90,125,50,150,90,150,25,175,90,175,90,190,110,190,110,175,175,175,110,150,150,150,110,125,125,125,100,100};
            drawpoly(16,points);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(100,150,WHITE);

            line(400,50,390,60);
            line(400,50,410,60);
            line(390,60,380,60);
            line(410,60,420,60);
            line(380,60,390,70);
            line(420,60,410,70);
            line(390,70,380,80);
            line(410,70,420,80);
            line(380,80,400,70);
            line(420,80,400,70);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(400,65,WHITE);

        }
        else
        {
            int points[]={100,100,75,125,90,125,50,150,90,150,25,175,90,175,90,190,110,190,110,175,175,175,110,150,150,150,110,125,125,125,100,100};
            drawpoly(16,points);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(100,150,WHITE);

        }
        delay(1000);
        cleardevice();
        n++;
    }
}
void draw_tree()
{
    int points[]={100,100,75,125,90,125,50,150,90,150,25,175,90,175,90,190,110,190,110,175,175,175,110,150,150,150,110,125,125,125,100,100};
    drawpoly(16,points);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(100,150,WHITE);
}
void draw_stars()
{
    //star1
    line(400,50,390,60);
    line(400,50,410,60);
    line(390,60,380,60);
    line(410,60,420,60);
    line(380,60,390,70);
    line(420,60,410,70);
    line(390,70,380,80);
    line(410,70,420,80);
    line(380,80,400,70);
    line(420,80,400,70);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,65,WHITE);

}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_tree();
    draw_stars();
    anim();

    getch();
    closegraph();
    return 0;
}

