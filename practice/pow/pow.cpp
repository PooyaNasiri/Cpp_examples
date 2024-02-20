#include <iostream.h>
#include <conio.h>
#include <math.h>
main( )
{
  double a, b, c;
  char ans='y';
      while(ans=='y'){
       clrscr();
        gotoxy(35,2);
        cout<<"welcome";
         gotoxy(1,4);
         cout<<"this program can computation power of all numbers. "<<endl<<endl<<endl<<endl;
      	 cout<<"enter a basic number :     ";
			  cin>>a;
          cout<<endl<<endl<<"enter a exponent number :  ";
           cin>>b;
             c=pow(a,b);
              gotoxy(29,15);
              cout<<a<<"^"<<b<<"= "<<c<<endl<<endl<<endl<<endl;
                  cout<<"do you want to continue(y/n)?  ";
                  cin>>ans;
                  cout<<endl;
         }//end of while
         clrscr();
         gotoxy(21,5);
   	cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
   getch();
   return 0;
}//end of program
//thank you for use this program
