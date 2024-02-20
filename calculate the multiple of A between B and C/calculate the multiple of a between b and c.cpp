#include <iostream.h>
#include <conio.h>
main(){ //start the program
int a,b,d,e;
char ans='y';

   while(ans=='y'){
    b=0;
    clrscr();
    gotoxy(35,3);
    cout<<"welcome";
    cout<<"\n\n  tihs program calculate the multiple of <a> between <b> and <c>.\n\n enter the number (a b c): ";
    cin>>e>>a>>d;
    cout<<"\n\n";
     while(a<=d){
       if(a%e==0){
        b+=a;
       }//end of if
       a++;
     }//end of while
     cout<<b;
     getch();
    cout<<endl;
    cout<<"\n\n do you want to continue(y/n)?  ";
    cin>>ans;
    cout<<endl;
   }//end of while
  clrscr();
  gotoxy(21,5);
  cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
 getch();
 return 0;
}//end of program
