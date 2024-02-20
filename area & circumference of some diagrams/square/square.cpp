#include <iostream.h>
#include <conio.h>
main( )
{
   float a ,p ,s;
   char ans='y';
   		while(ans=='y'){
         gotoxy(30,1);
   	   cout<<"welcome";
            gotoxy(1,4);
   			cout<<"this program can computation area & circumference of square."<<endl<<endl<<"ENTER A RADIUS OF SQUARE : ";
            cin>>a;
            p=a*4;
            s=a*a;
            cout<<"area(S)="<<s<<"          circumference(P)="<<p<<endl<<endl;
   			cout<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
       gotoxy(25,6);
       cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
   getch();
   return 0;
}

