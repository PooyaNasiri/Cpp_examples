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
 menu();
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

 cout<<"\n\n  Please enter his/her meesdid: ";
 cin>>a3[b+1];

 cout<<"\n\n  Please enter his/her decree: ";
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
  cout<<"\n\n\n  You don't enter any input yet";
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
    cout<<"\n\n\n  Name: "<<a1[c]<<"\n\n  Age: "<<a2[c]<<"\n\n  meesdid: "<<a3[c]<<"\n\n  decree: "<<a4[c];
   getch();
  menu();
}//end of void outpt




void edit(){
 int c;
 char d;
 clrscr();
 if(b<=99){
  cout<<"\n\n\n  You don't enter any input yet";
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

  cout<<"\n\n  Please enter his/her meesdid to change(x/20): ";
  cin>>a3[c];

  cout<<"\n\n  Please enter his/her decree to change: ";
  cin.get();
  cin.get(a4[c],10);
  cin.get();
  cout<<"\n\n   Is that right(y/n)? ";
  cin>>d;
  if(d!='y')
   edit();
  menu();
}//end of void edit






