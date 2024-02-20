#include <iostream.h>
#include <conio.h>
#define pi 3.14
main( )
{
	int a;
   float s,p;
   char ans='y';
   	gotoxy(30,1);
   	cout<<"welcome";
   		while(ans=='y'){
   			gotoxy(1,3);
   			cout<<"this program can computation area & circumferece of circle."<<endl<<endl<<"ENTER A RADIUS OF CIRCLE: ";
   			cin>>a;
   			s=a*a*pi;
   			p=a*2*pi;
   			cout<<"area(s)="<<s<<"       circumference(P)="<<p<<endl<<endl;
   			cout<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
       gotoxy(25,6);
   	 cout<<"thank you for use this program"<<endl<<"                              press any key to exit";
   	getch();
   return 0;
}



