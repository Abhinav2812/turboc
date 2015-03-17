#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
union REGS i,o;
void showmouse()
{
 i.x.ax=1;
 int86(0x33,&i,&o);
}
void hidemouse()
{
 i.x.ax=2;
 int86(0x33,&i,&o);
}
void getmouse(int *x,int *y)
{
 i.x.ax=3;
 while(1)
 {
  int86(0x33,&i,&o);
  *x=o.x.cx;
  *y=o.x.dx;
  if(o.x.bx)
   return;
 }
}
void restmouse()
{
 i.x.ax=7;
 i.x.cx=244;
 i.x.dx=394;
 int86(0x33,&i,&o);
 i.x.ax=8;
 i.x.cx=164;
 i.x.dx=314;
 int86(0x33,&i,&o);
}
int clickloc(int x,int y)
{
 if(y<214)
 {
  if(x<294)
   return 1;
  else if(x<344)
   return 2;
  else
   return 3;
 }
 else if(y<264)
  {
  if(x<294)
   return 4;
  else if(x<344)
   return 5;
  else
   return 6;
 }
 else
 {
  if(x<294)
   return 7;
  else if(x<344)
   return 8;
  else
   return 9;
 }
}
void display(int loc,int chance)
{
 hidemouse();
 loc--;
 int x=loc%3,y=loc/3;
 int xpos=269+50*x,ypos=189+50*y;
 if(chance)
 {
  line(xpos+15,ypos+15,xpos-15,ypos-15);
  line(xpos-15,ypos+15,xpos+15,ypos-15);
 }
 else
  circle(xpos,ypos,15);
 showmouse();
}
int winchk(int a[])
{
 for(int x=0;x<9;x+=3)
  if(a[x]==a[x+1]&&a[x]==a[x+2]&&a[x]!=2)
   return (x+3)*10+x+1;
 for(x=0;x<3;x++)
  if(a[x]==a[x+3]&&a[x]==a[x+6]&&a[x]!=2)
   return (x+7)*10+x+1;
 if(a[0]==a[4]&&a[4]==a[8]&&a[8]!=2)
  return 91;
 else if(a[2]==a[4]&&a[4]==a[6]&&a[6]!=2)
  return 73;
 return 2;
}
void comp(int loc)
{
 int loc1=(loc%10)-1,loc2=(loc/10)-1,loc1x=loc1%3,loc1y=loc1/3,loc2x=loc2%3,loc2y=loc2/3;
 int x1,x2,y1,y2;
 if(loc==91)
  x1=244,x2=394,y1=164,y2=314;
 else if(loc==73)
  x1=394,x2=244,y1=164,y2=314;
 else if(loc==71||loc==82||loc==93)
  x1=269+loc1x*50,x2=269+loc2x*50,y1=164,y2=314;
 else if(loc==31||loc==64||loc==97)
  x1=244,x2=394,y1=189+loc1y*50,y2=189+loc2y*50;
 line(x1,y1,x2,y2);
}
void main()
{char ch;
 do
 {
 int gm=0,gr,x,y,chance=0,a[9],win=2,c=0;
 for(int i=0;i<9;i++)
  a[i]=2;
 initgraph(&gm,&gr,"C:\\TC\\BGI");
 cleardevice();
 restmouse();
 rectangle(244,164,394,314);
 line(294,164,294,314);
 line(344,164,344,314);
 line(244,214,394,214);
 line(244,264,394,264);
 showmouse();
 while(win==2&&c<9)
 {
 getmouse(&x,&y);
 int loc=clickloc(x,y);
 if(a[loc-1]!=2)
  continue;
 a[loc-1]=chance;
 display(loc,chance);
 win=winchk(a);
 if(chance)
  chance=0;
 else
  chance=1;
 c++;
 while(kbhit())
  getch();
 }
 comp(win);
 gotoxy(1,2);
 if(win==2)
  cout<<"\t\t\t\tIts a draw!";
 else if(chance==1)
  cout<<"\t\t\t\tPlayer 1 wins!";
 else if(chance==0)
  cout<<"\t\t\t\tPlayer 2 wins!";
 gotoxy(1,25);
  cout<<"\t\t\t\tPress X to Exit";
  cout<<"\n\t\t\t\tAny other to play again";
 ch=getch();
 }while(ch!='x'&&ch!='X');
 closegraph();
}