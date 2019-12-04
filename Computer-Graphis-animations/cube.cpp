#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define SIZE 10000
int Stack[SIZE];
int top=-1;
void Flood_fill(int x,int y,int new_color,int old_color);
void push(int x,int y)
{
    if (top==SIZE-2)
    {
        printf("stack overflow\n");
        return;
    }
    Stack[++top]=x;
    Stack[++top]=y;
}
int pop()
{
    if(top==-1)
    {
        printf("stack is empty");
        return -1;

    }
    int popped=Stack[top];
    top--;
    return popped;
}
int isempty()
{
    if (top==-1)
        return 1;
    return 0;
}
void Flood_fill(int x,int y,int new_color,int old_color)
{
    push(x,y);
    while(!isempty())
    {
        y=pop();
        x=pop();
        putpixel(x,y,new_color);
        delay(1);
        if(getpixel(x+1,y)==old_color )
        {
            push(x+1,y);
        }
        if(getpixel(x-1,y)==old_color )
        {
            push(x-1,y);
        }
        if(getpixel(x,y+1)==old_color )
        {
            push(x,y+1);
        }
        if(getpixel(x,y-1)==old_color )
        {
            push(x,y-1);
        }
    }
}

void draw_cube()
{
        rectangle(100,100,150,150);
        Flood_fill(125,125,2,0);
        line(150,100,125,75);
        line(125,75,75,75);
        line(75,75,100,100);
        Flood_fill(125,80,4,0);
        line(75,75,75,125);
        line(75,125,100,150);
        Flood_fill(80,100,1,0);

        line(125,75,125,125);
        line(125,125,150,150);
        line(125,125,75,125);


        /*rectangle(75,75,75+s,75+s);
        Flood_fill(110,110,2,0);
        line(75+s,75,100+s,100);
        line(75+s,75+s,100+s,100+s);
        line(75,75,100,100);
        line(75,75+s,100,100+s);*/
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    draw_cube();

    getch();
    closegraph();
    return 0;
}
