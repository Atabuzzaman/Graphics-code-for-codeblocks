#include<graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int gd=DETECT, gm;
    int xa, ya,xb,yb,i;
    float dx,dy,x,y, length;
    printf("Enter the value of xa,ya,xb,yb: ");
    scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
    initgraph(&gd,&gm,(char*)"");
    //line(200,200,500,500);
    if(abs(xb-xa)>abs(yb-ya))
        length=abs(xb-xa);
    else
        length=abs(yb-ya);
    dx=(xb-xa)/length;
    dy=(yb-ya)/length;
    x=xa;
    y=ya;
    i=0;
    while(i<=length){
        putpixel(x,y,RED);
        x=x+dx;
        y=y+dy;
        i++;
        delay(50);
    }
    getch();
    closegraph();
    return 0;
}

