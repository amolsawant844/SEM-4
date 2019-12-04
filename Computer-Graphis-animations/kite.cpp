#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void anim(int x ,int y)
{
   int points[]={50+x,150-y,100+x,200-y,150+x,150-y,100+x,100-y,50+x,150-y};
   drawpoly(5,points);
   line(100+x,100-y,100+x,200-y);
   line(50+x,150-y,150+x,150-y);
   setfillstyle(SOLID_FILL,RED);
   floodfill(75+x,140-y,WHITE);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(125+x,140-y,WHITE);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(75+x,160-y,WHITE);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(125+x,160-y,WHITE);
   arc(125+x,220-y,135,225,30);
   arc(80+x,260-y,315,45,30);
   delay(1000);
   cleardevice();

}
void draw_kite()
{
   int points[]={50,150,100,200,150,150,100,100,50,150};
   drawpoly(5,points);
   line(100,100,100,200);
   line(50,150,150,150);
   setfillstyle(SOLID_FILL,RED);
   floodfill(75,140,WHITE);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(125,140,WHITE);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(75,160,WHITE);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(125,160,WHITE);
   arc(125,220,135,225,30);
   arc(80,260,315,45,30);
   delay(1000);
   cleardevice();
   int x=0;
   int y=0;
   while(x<=200 && y<=200)
   {
       anim(x,y);
       x=x+10;
       y=y+10;

   }

}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_kite();

    getch();
    closegraph();
    return 0;
}

