#include <iostream.h>
#include <conio.h>
main()
{
   float s,p,a,b,h;
   char ans='y';
   	gotoxy(30,1);
   	cout<<"welcome";
   		while(ans=='y'){
   			gotoxy(1,3);
   			cout<<"this program can computation area & circumferece of trapezoid."<<endl<<endl<<"ENTER HEIGHT & RADIUS & UNDERSIDE LINE: ";
   			cin>>a>>b>>h;
   			s=a*h;
   			p=(a+b)*2;
   			cout<<"area(S)="<<s<<"   circumference(P)="<<p<<endl<<endl;
   			cout<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
   	gotoxy(25,6);
   	cout<<"thank you for use this program"<<endl<<"                              press any key to exit";
   getch();
   return 0;
}
