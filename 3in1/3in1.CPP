#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void findmax();
void start();
void avrage();
void plus();
main(){
  start();
}//end of main

 //start void start
 void start(){
     int h;
     clrscr();
     gotoxy(35,1);
     cout<<"welcome\n\n\n 1-find max-min  2-avrage  3-plus  4-exit \n\n Enter a number : ";
     cin>>h;
     switch(h){
      case 1: findmax();
      case 2: avrage();
      case 3: plus();
      case 4: exit(1);
     }//end of switch
 }//end of void start

 //start void find maximam number2
 void findmax(){
      float b,c,e=-100000000000000,g=100000000000000;
      clrscr();
      gotoxy(35,1);
      cout<<"welcome\n\n\n  this program can find maximam number fram 2-100 numbers. \"to exit enter 1234\"";
    for(b=1;b<=100;b++){
      cout<<"\n\n\n Enter number "<<b<<" : ";
      cin>>c;
      if(c==1234){
       clrscr();
       gotoxy(21,5);
       cout<<"thank you for use this program\n\t\t\t press any key to exit";
       getch();
       exit(1);
      }//end of if
      e=e<c? c:e;
      g=c<g? c:g;
      cout<<"\n maximam number from those number is: "<<e<<"\n minimam number from those number is: "<<g;
    }//end  of for
 }//end of void find maximam number

 //start void avrage
 void avrage(){
   float a,b,c=0,d;
    clrscr();
    gotoxy(35,1);
    cout<<"welcome\n\n\n  this program can avrage many numbers. \"to exit enter 1234\"";
    for(b=1;b<=100;b++){
     cout<<"\n\n\n Enter number "<<b<<" : ";
     cin>>a;
     if(a==1234){
       clrscr();
       gotoxy(21,5);
       cout<<"thank you for use this program\n\t\t\t press any key to exit";
       getch();
       exit(1);
      }//end of if
     c+=a;
     d=c/b;
     cout<<"\n avrage of thos number is : "<<d;
    }//end of for
 }//end of void avrage   ggggggggggggg

 //start void plus
 void plus(){
    float a,b,c=0;
    clrscr();
    gotoxy(35,1);
    cout<<"welcome\n\n\n  this program can sigma many numbers. \"to exit enter 1234\"";
    for(b=1;b<=100;b++){
     cout<<"\n\n\n Enter number "<<b<<" : ";
     cin>>a;
     if(a==1234){
       clrscr();
       gotoxy(21,5);
       cout<<"thank you for use this program\n\t\t\t press any key to exit";
       getch();
       exit(1);
     }//end of if
     c+=a;
     cout<<"\n\n sigma of thos number is : "<<c;
    }//end of for
 }//end of void avrage
