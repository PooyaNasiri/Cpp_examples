#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
 main(){ //start the program
 int a;
 char ans='y';
      while(ans=='y'){
       clrscr();
        gotoxy(35,2);
        cout<<"welcome";
   		gotoxy(25,4);
   		cout<<"this program can auguring.";
         getch();
         clrscr();
 			 randomize();
 			 a=rand();
 			 a%=3;
 			 a++;
 			 if(a==1){
 			  cout<<"\n\tit is good";
 			 }//end of if
 			 if(a==2){
 			  cout<<"\n\tnot to bad";
          }//end of if
 			 if(a==3){
 		  	  cout<<"\n\tit is bad";
 		  	 }//end of if
 			cout<<"\n\ndo you want to continue(y/n)?  ";
         cin>>ans;
         cout<<endl;
      }//end of while
      clrscr();
      gotoxy(21,5);
   	cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
   getch();
   return 0;
}//end of program
