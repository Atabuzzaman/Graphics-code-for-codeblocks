#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT, gm, x,y,xc,yc,r,d;
    printf("Enter center and radius of the cicle: xc, yc, r: ");
    scanf("%d%d%d",&xc, &yc, &r);
    initgraph(&gd,&gm,(char*)"");
    d= (int)(5/4) -r;
    x=0;
    y=r;
    while(x<=y){
    putpixel(x+xc,y+yc, WHITE);
    putpixel(-x+xc,y+yc, WHITE);
    putpixel(-x+xc,-y+yc, WHITE);
    putpixel(x+xc,-y+yc, WHITE);
    putpixel(y+xc,x+yc, WHITE);
    putpixel(-y+xc,x+yc, WHITE);
    putpixel(-y+xc,-x+yc, WHITE);
    putpixel(y+xc,-x+yc, WHITE);
    if (d<=0){
        x=x+1;
        d=d+2*x+3;
    }
    else{
        x=x+1;
        y=y-1;
        d=d+2*(x-y)+5;
    }
    delay(50);
    }
    getch();
    closegraph();
    return 0;
}

