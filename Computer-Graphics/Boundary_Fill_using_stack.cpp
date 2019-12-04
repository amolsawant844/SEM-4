#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define SIZE 10000
int Stack[SIZE];
int top=-1;
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
void boundary_fill(int x,int y,int fill_color,int boundary_color)
{
    push(x,y);
    while(!isempty())
    {
        y=pop();
        x=pop();
        putpixel(x,y,fill_color);
        delay(1);
        if(getpixel(x+1,y)!=boundary_color && getpixel(x+1,y)!=fill_color)
        {
            push(x+1,y);
        }
        if(getpixel(x-1,y)!=boundary_color && getpixel(x-1,y)!=fill_color)
        {
            push(x-1,y);
        }
        if(getpixel(x,y+1)!=boundary_color && getpixel(x,y+1)!=fill_color)
        {
            push(x,y+1);
        }
        if(getpixel(x,y-1)!=boundary_color && getpixel(x,y-1)!=fill_color)
        {
            push(x,y-1);
        }
    }
}



int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c://TC//BGI");

    rectangle(100,100,200,200);
    boundary_fill(150,150,3,15);

    getch();
    closegraph();
    return 0;
}

