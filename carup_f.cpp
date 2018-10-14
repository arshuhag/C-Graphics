#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<graphics.h>

void border_behind_home();
void ghor();
void pahar();
void shurjo();
void kherer_gada();
void pukur();
void gach();
void signboard();

int main()
{
    initwindow(1000,1000,"Scenery");



for(int i=0;i<1000;i++)
{
    border_behind_home();

    ghor();

    pahar();

    shurjo();

    //manus

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(600,250,10);
    floodfill(601,251,RED);
    line(600,260,600,300);
    line(601,260,601,300);
    line(599,260,599,300);
    //hat
    line(585,270,615,270);
    line(585,271,615,271);
    line(585,269,615,269);
    //paa
    line(600,300,585,315);
    line(601,300,586,315);
    line(599,300,584,315);

    line(600,300,615,315);
    line(601,300,616,315);
    line(599,300,614,315);


    //Pakhi
    setcolor(WHITE);
    line(740+i,60,750+i,70);
    line(750+i,70,760+i,60);
    line(740+i,90,750+i,100);
    line(750+i,100,760+i,90);
    line(700+i,65,710+i,75);
    line(710+i,75,720+i,65);
    line(700+i,85,710+i,95);
    line(710+i,95,720+i,85);
    line(700+i,105,710+i,115);
    line(710+i,115,720+i,105);
    line(660+i,60,670+i,70);
    line(670+i,70,680+i,60);
    line(660+i,90,670+i,100);
    line(670+i,100,680+i,90);

    kherer_gada();

    gach();

    pukur();

    signboard();

    setcolor(9);
    //outtextxy(500,100,"CAR RUNNING");
    setcolor(3);
    line(50+i,583,90+i,583);
    arc(110+i,583,0,180,20);
    line(130+i,583,220+i,583);
    arc(240+i,583,0,180,20);
    line(260+i,583,300+i,583);
    line(300+i,583,300+i,563);
    line(300+i,563,240+i,543);
    line(240+i,543,200+i,513);
    line(200+i,513,110+i,513);
    line(110+i,513,80+i,543);
    line(80+i,543,50+i,553);
    line(50+i,553,50+i,583);

    setcolor(RED);
    line(165+i,518,165+i,543);
    line(165+i,543,230+i,543);
    line(230+i,543,195+i,518);
    line(195+i,518,165+i,518);

    line(160+i,518,160+i,543);
    line(160+i,543,95+i,543);
    line(95+i,543,120+i,518);
    line(120+i,518,160+i,518);

    setcolor(BLUE);

    circle(110+i,583,17);
    circle(240+i,583,17);

    delay(30);
    cleardevice();

    /// Road
    setcolor(6);
    line(0,600,1000,600);
    line(0,601,1000,601);
    line(0,602,1000,602);
    line(0,603,1000,603);
}



//setcolor(GREEN);
//line(0,400,1000,400);
getch();
closegraph();
return 0;
}

void border_behind_home()
{
    // border
    setcolor(6);
    line(0,250,250,250);
    line(400,250,470,250);
    line(540,250,1000,250);
    // border
}

void ghor()
{
    setcolor(6);

    line(250,200,400,200);  // up ghor
    line(251,200,401,200);
    line(249,200,399,200);

    line(400,200,400,300);  //right ghor
    line(401,200,401,300);
    line(399,200,399,300);

    line(250,200,250,300);  //left ghor
    line(251,200,251,300);
    line(249,200,249,300);

    // underline and grasses
    setcolor(GREEN);
    line(240,300,550,300);  //down ghor
    line(240,301,550,301);
    line(240,302,550,302);

    setcolor(12);
    // chal
    line(280,160,370,160);
    line(280,160,250,200);
    line(370,160,400,200);

    setcolor(7);
    // janala 1
    line(265,260,265,240);
    line(285,260,285,240);
    line(265,260,285,260);
    line(265,240,285,240);

    // janala 2
    line(385,260,385,240);
    line(365,260,365,240);
    line(385,260,365,260);
    line(385,240,365,240);

    //dorja
    line(305,300,305,230);
    line(345,300,345,230);
    line(305,230,345,230);
}

void pahar()
{
    setcolor(GREEN);
    /*line(0,250,50,150);
    line(50,150,100,250);
    line(100,250,150,150);
    line(150,150,200,250);
    line(200,250,250,150);
    line(250,150,265,180);
    line(401,250,435,140);
    line(435,140,470,260);*/
    arc(600,250,0,180,60);
    arc(720,250,0,180,60);
    arc(840,250,0,180,60);
    arc(960,250,0,180,60);
    arc(60,250,0,180,60);
    arc(184,250,0,180,64);
    arc(435,250,0,180,32);
}

void shurjo()
{
    //shurjo
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(850,100,60);
    floodfill(851,101,RED);

    //pakhi

}

void kherer_gada()
{
    // kherer gada
    setcolor(YELLOW);
    line(470,220,470,300);
    line(540,220,540,300);
    //line(470,300,540,300);
    arc(505,220,0,180,35);

    setcolor(6);
    line(505,184,505,170);
    line(506,184,506,170);
    line(504,184,504,170);
}

void pukur()
{
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    ellipse(950,400,0,360,170,100);
    floodfill(951,401,BLUE);

    setcolor(6);
    ellipse(950,400,0,360,170,103);
    ellipse(950,400,0,360,170,104);
    ellipse(950,400,0,360,170,105);
}

void gach()
{
    //gach
    setcolor(6);
    //setfillstyle(SOLID_FILL,RED);
    line(430,150,430,300);
    line(431,150,431,300);
    line(432,150,432,300);
    line(433,150,433,300);
    line(434,150,434,300);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(415,150,40);
    floodfill(416,151,GREEN);
    circle(435,125,40);
    floodfill(450,126,GREEN);
    circle(455,150,40);
    floodfill(470,151,GREEN);

}

void signboard()
{
    //line(50,385,50,465);
    //line(200,385,200,465);
    setcolor(RED);
    rectangle(50,385,200,465);
    rectangle(47,382,203,468);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(124,467,130,600);
    floodfill(125,468,GREEN);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    outtextxy(75,422,"Shymol Graam");
}

