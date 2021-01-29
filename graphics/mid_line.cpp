#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
	int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
    printf("Enter the first and second point: ");
    scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
	initgraph(&gdriver, &gmode, (char*)"");

	int dx, dy, p, x, y;
    dx=abs(x1-x0);
    dy=abs(y1-y0);
	x=x0;
	y=y0;
	p=dy - (dx/2);
	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,RED);
			y=y+1;
			p=p+dy-dx;
		}
		else
		{
			putpixel(x,y,RED);
			p=p+dy;
		}
		x=x+1;
		delay(50);
	}
	getch();
	closegraph();
	return 0;
}
