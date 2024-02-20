#include <iostream.h>
#include <conio.h>
main(){ //start the program
  double a,b,c;
  c=1;
    gotoxy(35,3);
    cout<<"welcome";
    cout<<"\n\n   this program can calculate 10(income<a> - shortage's income<%b>.";
    do{
     cout<<"\n\n\n  enter a then b: ";
     cin>>a>>b;
      a-=b*(a/100);
      c++;
     cout<<"\n  remainder of income= "<<a;
    }while(c<=10);
  clrscr();
  gotoxy(21,5);
  cout<<"thank you for use this program"<<endl<<"\t\t\tpress any key to exit";
 getch();
 return 0;
}//end of program
