#include<stdio.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm, p,x,y,xc,yc,a,b;
 printf("Enter xc, yc: ");
 scanf("%d%d",&xc,&yc);
 printf("Enter a, b:\n");
 scanf("%d%d",&a,&b);
 initgraph(&gd,&gm,(char*)"");
 x=0;
 y=b;
 //Region 1
 p=(b*b)-(a*a*b)+(0.25*a*a);
 do
 {
  putpixel(xc+x,yc+y,WHITE);
  putpixel(xc+x,yc-y,WHITE);
  putpixel(xc-x,yc+y,WHITE);
  putpixel(xc-x,yc-y,WHITE);
  if(p<0)
  {
   x=x+1;
   p=p+2*b*b*x+b*b;
  }
  else
  {
   x=x+1;
   y=y-1;
   p=p+2*b*b*x-2*a*a*y+b*b;
  }
  delay(50);
 }while(2*b*b*x<2*a*a*y);
 //Region 2
 p=(b*b*(x+0.5)*(x+0.5))+((y-1)*(y-1)*a*a-a*a*b*b);
 do
 {
  putpixel(xc+x,yc+y,WHITE);
  putpixel(xc+x,yc-y,WHITE);
  putpixel(xc-x,yc+y,WHITE);
  putpixel(xc-x,yc-y,WHITE);
  if(p>0)
  {
   y=y-1;
   p=p-2*a*a*y+a*a;
  }
  else
  {
   x=x+1;
   y=y-1;
   p=p-2*a*a*y+2*b*b*x+a*a;
  }
  delay(50);
 }while(y!=0);
 getch();
 closegraph();
 return 0;
}