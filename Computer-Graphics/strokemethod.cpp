#include<iostream>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"//BGI//");

//A
line(100,100,150,150);
line(100,100,50,150);
line(125,125,75,125);

//M
line(200,100,200,150);
line(300,100,300,150);
line(200,100,250,125);
line(250,125,300,100);

//o
circle(350,125,25);

//l
line(400,100,400,150);
line(400,150,450,150);

getch();
closegraph();
return 0;
}



