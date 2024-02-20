#include <iostream.h>
#include <conio.h>
main( )
{
   float a, b, p, s;
   char ans='y';
   		while(ans=='y'){
         gotoxy(30,1);
   	   cout<<"welcome";
            gotoxy(1,4);
   			cout<<"this program can computation area & circumference of rectangular."<<endl<<endl<<"ENTER TO RADIUS OF RECTANGULAR : ";
            cin>>a>>b;
            p=(a+b)*2;
            s=a*b;
            cout<<"area(S)="<<s<<"          circumference(P)="<<p<<endl<<endl;
   			cout<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
       gotoxy(25,6);
       cout<<"thank you for use this program"<<endl<<"                             press any key to exit";
   getch();
   return 0;
}

