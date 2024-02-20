#include <iostream.h>
#include <conio.h>
#include <math.h>
main()
{
   int a, b, c, d, e;
   char ans='y';
   while(ans=='y'){
   	clrscr();
       gotoxy(30,1);
       cout<<"welcome";
      	gotoxy(1,3);
      	cout<<"ENTER A BASIC NUMBER THEN ENTER A NUMBER : ";
           d=0;
           cin>>a>>e;
   		for(b=1;b<=e;b++){
           c=pow(a,b);
           d+=c;
   		}//end of for
  	 	      cout<<d;
      		cout<<"\n"<<"\n"<<"\n"<<"\n"<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
         gotoxy(25,6);
   	 cout<<"thank you for use this program"<<endl<<"                              press any key to exit";
   	getch();
   return 0;
}//end program

