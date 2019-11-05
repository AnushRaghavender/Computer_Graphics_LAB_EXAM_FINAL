#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    	initgraph(&gd, &gm, NULL);

	//Rainbow 1
	setcolor(RED);
	arc(200,200,180,360,30);
	setcolor(LIGHTRED);
	arc(200,200,180,360,50);
	setcolor(YELLOW);
	arc(200,200,180,360,70);
	setcolor(GREEN);
	arc(200,200,180,360,90);
	setcolor(BLUE);
	arc(200,200,180,360,110);
	setcolor(LIGHTMAGENTA);
	arc(200,200,180,360,130);
	setcolor(MAGENTA);
	arc(200,200,180,360,150);

	//Rainbow 2
	setcolor(RED);
	arc(400,400,180,360,30);
	setcolor(LIGHTRED);
	arc(400,400,180,360,50);
	setcolor(YELLOW);
	arc(400,400,180,360,70);
	setcolor(GREEN);
	arc(400,400,180,360,90);
	setcolor(BLUE);
	arc(400,400,180,360,110);
	setcolor(LIGHTMAGENTA);
	arc(400,400,180,360,130);
	setcolor(MAGENTA);
	arc(400,400,180,360,150);

    delay(10000000000);
}
