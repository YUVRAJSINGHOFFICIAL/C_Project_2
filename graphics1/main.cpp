
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setbkcolor(RED);
setcolor(RED);
line(100,150,200,150);
setcolor(YELLOW);
line(200,150,150,65);
setcolor(BROWN);
line(150,65,100,150);
setcolor(6 );
arc(150,150,180,0,50);
setcolor(RED);
arc(125,165,180,180,5);
setcolor(GREEN);
arc(175,165,180,180,5);
setcolor(11);
arc(150,165
    ,225,315,20);
    setcolor(7);
circle(600,460,20);
setfillstyle(5,3);
floodfill(600,460,7);
rectangle(100,300,200,200);
setbkcolor(3);

getch();
closegraph();
return 0;
}
