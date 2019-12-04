#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int translation(int m[100][3],int n);
int scaling(int m[100][3],int n);
int rotation(int m[100][3],int n);
int Xshear(int m[100][3],int n);
int Yshear(int m[100][3],int n);
int Xreflect(int m[100][3],int n);
int Yreflect(int m[100][3],int n);
int Oreflect(int m[100][3],int n);
int print_draw(int m[100][3],int t[3][3],int n);
int main()
{
    int gd=DETECT,gm,n,i,j,ch,x;
    initgraph(&gd,&gm,"c://TC//BGI");

    int m[100][3];
    printf("enter no. of edges");
    scanf("%d",&n);

    //accepting the matrix
    printf("enter coordinates of vertices\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    //coordiante axes
    line(320,0,320,480);
    line(0,240,640,240);

    //drawing the polygon
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<1;j++)
        {
            line(320+m[i][j],240-m[i][j+1],320+m[i+1][j],240-m[i+1][j+1]);
        }
    }
    line(320+m[n-1][0],240-m[n-1][1],320+m[0][0],240-m[0][1]);

    //changing the matrix
    for(i=0;i<n;i++)
    {
        m[i][2]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    do
    {
        printf("MAIN MENU\n");
        printf("1.Translation\n");
        printf("2.Scaling\n");
        printf("3.Rotation\n");
        printf("4.Shearing\n");
        printf("5.Reflection\n");
        printf("6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            translation(m,n);
            break;
        case 2:
            scaling(m,n);
            break;
        case 3:
            rotation(m,n);
            break;
        case 4:
            do
            {
                printf("select shearing\n");
                printf("1.Xshear\n2.Yshear\n3.Exit\n");
                scanf("%d",&x);
                switch(x)
                {
                    case 1:
                        Xshear(m,n);
                        break;
                    case 2:
                        Yshear(m,n);
                        break;
                    case 3:
                        break;
                }
            }while(x!=3);
            break;
        case 5:
            do
            {
                printf("select reflection\n");
                printf("1.Xreflect\n2.Yrelfect\n3.Oreflect\n4.Exit\n");
                scanf("%d",&x);
                switch(x)
                {
                    case 1:
                        Xreflect(m,n);
                        break;
                    case 2:
                        Yreflect(m,n);
                        break;
                    case 3:
                        Oreflect(m,n);
                        break;
                    case 4:
                        break;
                }
            }while(x!=4);
            break;
        case 6:
            break;


        }
    }while(ch!=6);



    getch();
    closegraph();
    return 0;
}
int translation(int m[100][3],int n)
{
    int t[3][3],mul[3][3];
    int i,j,tx,ty,sum,k;
    sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                t[i][j]=1;
            }
            else
            {
                t[i][j]=0;
            }
        }
    }
    printf("enter distance coordinates\n");
    scanf("%d %d",&tx,&ty);
    t[2][0]=tx;
    t[2][1]=ty;
    print_draw(m,t,n);

}
int scaling(int m[100][3],int n)
{
    int s[3][3],mul[3][3];
    int i,j,sx,sy,sum,k;
    sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j]=0;
        }
    }
    printf("enter scaling coordinates\n");
    scanf("%d %d",&sx,&sy);
    s[0][0]=sx;
    s[1][1]=sy;
    s[2][2]=1;
    print_draw(m, s, n);

}
int rotation(int m[100][3],int n)
{
    float r[3][3],mul[100][100];
    float rot,sum;
    sum=0;
    int i,j,k;
    printf("enter angle of rotation\n");
    scanf("%f",&rot);
    rot=(rot*3.14)/180.0;
    printf("%f",rot);
    for(i=0;i<2;i++)
        r[i][2]=0;
    for(j=0;j<2;j++)
        r[2][j]=0;
    r[0][0]=cos(rot);
    r[1][1]=cos(rot);
    r[0][1]=sin(rot);
    r[1][0]=-sin(rot);
    r[2][2]=1;
    printf("Final matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {

                sum=sum+m[i][k]*r[k][j];
                //printf("%f",sum);
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%f\t",mul[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<1;j++)
        {
            line(320+mul[i][j],240-mul[i][j+1],320+mul[i+1][j],240-mul[i+1][j+1]);
        }
    }
    line(320+mul[n-1][0],240-mul[n-1][1],320+mul[0][0],240-mul[0][1]);


}
int Xshear(int m[100][3],int n)
{
    int sh[3][3],mul[3][3];
    int i,j,shx,sum,k;
    sum=0;
    printf("enter shearing parameter in x:\n");
    scanf("%d",&shx);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sh[i][j]=1;
            }
            else
                sh[i][j]=0;
        }
    }
    sh[1][0]=1;
    print_draw(m,sh,n);
}
int Yshear(int m[100][3],int n)
{
    int sh[3][3],mul[3][3];
    int i,j,shy,sum,k;
    sum=0;
    printf("enter shearing parameter in y:\n");
    scanf("%d",&shy);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sh[i][j]=1;
            }
            else
                sh[i][j]=0;
        }
    }
    sh[0][1]=1;
    print_draw(m,sh,n);
}
int Xreflect(int m[100][3],int n)
{
    int xr[3][3],mul[100][100];
    int i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                xr[i][j]=1;
            }
            else
                xr[i][j]=0;
        }
    }
    xr[1][1]=-1;
    print_draw(m,xr,n);
}
int Yreflect(int m[100][3],int n)
{
    int yr[3][3],mul[100][100];
    int i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                yr[i][j]=1;
            }
            else
                yr[i][j]=0;
        }
    }
    yr[0][0]=-1;
    print_draw(m,yr,n);
}
int Oreflect(int m[100][3],int n)
{
    int ori[3][3],mul[100][100];
    int i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                ori[i][j]=-1;
            }
            else
                ori[i][j]=0;
        }
    }
    ori[2][2]=1;
    print_draw(m,ori,n);
}
int print_draw(int m[100][3],int t[3][3],int n)
{
    int i,j,k,mul[100][3];
    int sum=0;
    printf("Final matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {

                sum=sum+m[i][k]*t[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<1;j++)
        {
            line(320+mul[i][j],240-mul[i][j+1],320+mul[i+1][j],240-mul[i+1][j+1]);
        }
    }
    line(320+mul[n-1][0],240-mul[n-1][1],320+mul[0][0],240-mul[0][1]);
}
