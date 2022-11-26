#include<graphics.h>
#include<math.h>
#include<stdio.h>



void sun()
{
    pieslice(540,100,0,360,30);
}

void windmill(int i)
{
    // at base 85 and road(420)
    bar(85,200,93,420);
    // center is 88,200
    pieslice(90,200,i,i+40,70);
    pieslice(90,200,i+120,i+160,70);
    pieslice(90,200,i+240,i+280,70);

}

void house()
{
    rectangle(398,338,632,420);
    rectangle(400,340,630,420);
    rectangle(580,385,610,420); // door
    rectangle(578,383,612,420);
    line(595,420,595,385);
    circle(598,400,1);

    rectangle(430,360,530,400);
    rectangle(433,363,527,397);

    // right upper room

    rectangle(515,270,632,338);
    rectangle(517,272,630,338);

    // room window
    rectangle(545,290,600,315);
    rectangle(547,292,572,313);
    rectangle(574,292,598,313);


    // left baraja

    rectangle(392,318,515,338);

    // right baraja

    rectangle(510,250,636,270);

}

void car(int x)
{
    // y= 400
    outtextxy(x+13,427,"007. :)");
    rectangle(x,400,x+60,420);
    rectangle(x+3,403,x+28,417);
    rectangle(x+32,403,x+57,417);
    rectangle(x,420,x+85,444);
    rectangle(x-7,418,x,432);
    rectangle(x+85,424,x+87,430);
    rectangle(x-4,441,x,443);
    circle(x+15,450,10);
    circle(x+15,450,6);
    circle(x+15,450,1);
    circle(x+65,450,10);
    circle(x+65,450,6);
    circle(x+65,450,1);

}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	// Minor project car with a windmill
	int i;
	for(i=0;i<559;i++)
	{
		delay(20);
		cleardevice();
		line(0,420,639,420); // road
		house();             // house
		car(i);              // car
		windmill(i);         // windmill
		sun();               // sun
		// smoke code
		if(i%2==0)
		{
			circle(i-6,442,2);
			circle(i-11,439,3);
			circle(i-12,443,2);

		}
	}

	getch();

	closegraph();
	return 0;
}