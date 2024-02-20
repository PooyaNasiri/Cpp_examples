#include <iostream.h>
#include <conio.h>
#include <math.h>
main( )
{
  long double a,c;
  char ans='y';
      while(ans=='y'){
       clrscr();
        gotoxy(35,2);
        cout<<"welcome";
         gotoxy(1,4);
         cout<<"this program can computation squaring of all numbers. "<<endl<<endl<<endl<<endl;
      	 cout<<"enter a number :     ";
			  cin>>a;
             c=sqrt (a);
              cout<<endl<<endl<<"square of "<<a<<"= "<<c<<endl<<endl<<endl<<endl;
                  cout<<"do you want to continue(y/n)?  ";
                  cin>>ans;
                  cout<<endl;
         }//end of while
         clrscr();
         gotoxy(21,5);
   	cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
   getch();
   return 0;
}

