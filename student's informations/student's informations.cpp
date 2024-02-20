#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void menu();
void input();
void output();
void edit();
int a2[200],a3[200],b=99;
char a1[200][11],a4[200][11];

main(){
 int a,b,c,d,e,f,g,h;
 a:
 clrscr();
 gotoxy(5,5);
 cout<<"Enter password(8ch): ";
 a=getch();//s
 gotoxy(5,5);
 cout<<"Enter password(7ch): * ";
 b=getch();//t
 gotoxy(5,5);
 cout<<"Enter password(6ch): **";
 c=getch();//u
 gotoxy(5,5);
 cout<<"Enter password(5ch): ***";
 d=getch();//d
 gotoxy(5,5);
 cout<<"Enter password(4ch): ****";
 e=getch();//i
 gotoxy(5,5);
 cout<<"Enter password(3ch): *****";
 f=getch();//n
 gotoxy(5,5);
 cout<<"Enter password(2ch): ******";
 g=getch();//f
 gotoxy(5,5);
 cout<<"Enter password(1ch): *******";
 h=getch();//o
 gotoxy(5,5);
 cout<<"Enter password(0ch): ";
 if(a==115 && b==116 && c==117 && d==100 && e==105 && f==110 && g==102 && h==111)
  menu();
 cout<<"\n\n  wrong";
 goto a;
}//end of main

void menu(){
 int c;
 clrscr();
 cout<<"\n\n\n\n\n\t\t\t\t 1- input";
 cout<<"\n\n\t\t\t\t 2- output";
 cout<<"\n\n\t\t\t\t 3- edit";
 cout<<"\n\n\t\t\t\t 4- exit";
 cout<<"\n\n\t\t\t\t PLease enter number: ";

 cin>>c;
 switch(c){
  case 1: input();
  break;
  case 2: output();
  break;
  case 3: edit();
  break;
  case 4: exit(1);
  break;
 }//end of switch
}//end of void menu



void input(){
 char c;
 clrscr();

 cout<<"\n\n\n\n  Please enter his/her name: ";
 cin.get();
 cin.get(a1[b+1],10);
 cin.get();

 cout<<"\n\n  Please enter his/her full age: ";
 cin>>a2[b+1];

 cout<<"\n\n  Please enter his/her average score (x/20): ";
 cin>>a3[b+1];

 cout<<"\n\n  Please enter his/her discipline: ";
 cin.get();
 cin.get(a4[b+1],10);
 cin.get();
 cout<<"\n\n   Is that right(y/n)? ";
 cin>>c;
 if(c!='y')
  input();
 b++;
 cout<<"\n\n Your code is: "<<b;
 getch();
 menu();
}//end of void input



void output(){
 int c;
 clrscr();
 if(b<=99){
  cout<<"\n\n\n  You don't enter any student yet";
  getch();
  menu();
 }//end of if
  cout<<"\n\n\n  Enter his/her code to search that: ";
  cin>>c;
  if(c<=99 || c>=(b+1)){
   cout<<"\n\n  Can't find that";
   getch();
   menu();
  }//end of if
    cout<<"\n\n\n  Name: "<<a1[c]<<"\n\n  Age: "<<a2[c]<<"\n\n  Average score: "<<a3[c]<<"\n\n  Discipline: "<<a4[c];
   getch();
  menu();
}//end of void outpt




void edit(){
 int c;
 char d;
 clrscr();
 if(b<=99){
  cout<<"\n\n\n  You don't enter any student yet";
  getch();
  menu();
 }//end of if
  cout<<"\n\n\n  Enter his/her code to edit that: ";
  cin>>c;
  if(c<=99 || c>=(b+1)){
   cout<<"\n\n  Can't find that";
   getch();
   menu();
  }//end of if

  cout<<"\n\n\n\n  Please enter his/her full name to change: ";
  cin.get();
  cin.get(a1[c],10);
  cin.get();

  cout<<"\n\n  Please enter his/her age to change: ";
  cin>>a2[c];

  cout<<"\n\n  Please enter his/her average score to change(x/20): ";
  cin>>a3[c];

  cout<<"\n\n  Please enter his/her discipline to change: ";
  cin.get();
  cin.get(a4[c],10);
  cin.get();
  cout<<"\n\n   Is that right(y/n)? ";
  cin>>d;
  if(d!='y')
   edit();
  menu();
}//end of void edit






