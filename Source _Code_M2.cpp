#include <iostream.h>
#include <graphics.h>
#include <process.h>
#include <iomanip.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include<string.h>


       //*************************************************//
       //     -*-   Class  To Puttext on Screen   -*-     //
       //*************************************************//


class Text
{
 private:
   int i;
 public:
   void puttext();
   void show_info(char[],char[],char[],char[]);
};

void Text::puttext()
{
    settextstyle(7,HORIZ_DIR,2);
    setcolor(YELLOW);
    outtextxy(4,20,"Process");
    outtextxy(4,70,"is in");
    outtextxy(4,110,"section");
    outtextxy(4,150,"Operation");

    outtextxy(530,20," Process");
    outtextxy(530,70," is in");
    outtextxy(530,110," section");
    outtextxy(530,150," Operation");

}
/* Function to show Information */
void Text::show_info(char st1[],char st2[],char st3[],char st4[])
{
    gotoxy(4,4);
    cout<<"P1";
    gotoxy(839,4);
    cout<<"P2";
    gotoxy(2,7);
    cout<<st1;
    gotoxy(69,7);
    cout<<st2;
    gotoxy(2,12);
    cout<<st3;
    gotoxy(69,12);
    cout<<st4;
}
void del()
{
     gotoxy(37,2);
	  cout<<"\t\t";
	  gotoxy(29,3);
	  cout<<"\t\t\t   ";
	  gotoxy(29,4);
	  cout<<"\t\t\t   ";
	  gotoxy(29,5);
	  cout<<"\t\t\t   ";
	  gotoxy(29,6);
	  cout<<"\t\t\t";
	  gotoxy(30,7);
	  cout<<"\t\t\t";
	  setcolor(WHITE);
	  //line(240,90,402,90);
	  //line(240,97,402,97);

}
void info(int i)
{
	gotoxy(37,2);
	  cout<<"Process P"<<i;
	  gotoxy(29,3);
	  cout<<"looping continuously in ";
	  gotoxy(29,4);
	  cout<<"the entry code to enter";
	  gotoxy(29,5);
	  cout<<"in its critical section";
	  gotoxy(40,6);
	  if(i==1)
		cout<<"<===";
	  else
		cout<<"===>";
	  setcolor(RED);
	  outtextxy(240,90,"BUSY WAITING");
}

       //*************************************************//
       //     -*-        Main     Function     -*-        //
       //*************************************************//

void main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
int n,k=1,target=200,i;
   Text tt;
   setbkcolor(DARKGRAY);

   tt.puttext();
   tt.show_info("Entry   ","Entry   ","------","------");
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,MAGENTA);
   bar(274,380,356,403);
   rectangle(274,380,356,403);
   gotoxy(36,25);
   cout<<"mutex = 1";

do
    {

	    if(k>n/2)
	    {
		gotoxy(2,17);
		cout<<"Semphore";
		gotoxy(2,18);
		cout<<"with";
		gotoxy(2,19);
		cout<<"Busy Waiting";
		gotoxy(2,20);
		cout<<"is called";
		setcolor(YELLOW);
		outtextxy(1,320,"SPINLOCK");
	    }
	    if(k%2!=0)
	    {
		  gotoxy(36,25);
		  cout<<"mutex = 0";
		  i=0;
		  info(2);
		  //delay(500);
		  while(i<40)
		  {
		    
		    i++;
		    
		    tt.show_info("Critical","Entry   ","------","Wait  ");
		    delay(100);
		  }
		  
		  tt.show_info("Exit    ","Entry   ","Signal","Wait  ");
		  del();
		  gotoxy(36,25);
		  cout<<"mutex = 1";
		  delay(2000);

	    }
	    else
	    {
		  
		   i=0;
		   info(1);
		   gotoxy(36,25);
		   cout<<"mutex = 0";
		   while(i<40)
		   {

		   
		    
		    tt.show_info("Entry   ","Critical","Wait  ","------");
		    i++;
		    delay(100);
		   }
		  
		  
		  del();
		  gotoxy(36,25);
		  cout<<"mutex = 1";
		  tt.show_info("Entry   ","Exit     ","Wait  ","Signal");
		  delay(2000);
	    }
	    k++;
	}while(k<=target/40);

}
