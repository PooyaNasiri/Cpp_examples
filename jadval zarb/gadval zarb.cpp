#include <iostream.h>
#include <conio.h>
main()
{//start the program

   int a,b,c,d;
   char ans='y';
      while(ans=='y'){
         clrscr();
         gotoxy(35,2);
         cout<<"welcome";
         gotoxy(1,4);
         cout<<"this program can make amuliply list ."<<endl<<endl<<endl<<endl;
         cout<<"enter two number for 1-VERTICAL   2-HORIZONTAL :   ";
         cin>>c>>d;
         cout<<"\n";
       	  for(a=1;a<=c;a++){
         	  for(b=1;b<=d;b++){
         		  cout<<a*b<<"\t";
         	  }//end of for
              cout<<"\n";
           }//end of for
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


