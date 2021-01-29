#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm,i, x2,y2,x1,y1,x,y;
printf("Enter the 2 line end points :x1,y1,x2,y2: ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gd,&gm,(char*)"");
line(x1,y1,x2,y2);
printf("Enter translation co-ordinates :tx,ty: ");
scanf("%d%d",&x,&y);
x1=x1+x;
y1=y1+y;
x2=x2+x;
y2=y2+y;
printf("Line after translation");
initgraph(&gd,&gm,(char*)"");
line(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}

