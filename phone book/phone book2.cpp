#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void menu();
void input();
void output();
void sort();

int a=1;
char name[100][20],homenumber[100][25],mobilenumber[100][30];

main(){
 int a,c,d,e,f,g,h,i=0,j,l,x,z;
 char p,k;
 a:
 clrscr();
 gotoxy(28,2);
 cout<<"WELLCOME TO PHONEBOOK PROGRAME";
 gotoxy(3,40);
 cout<<"copy right by dragon team";
 gotoxy(5,5);
 k=1;
 cout<<"Enter password(9ch):  ";
 a=getch();//p
 gotoxy(5,5);
 cout<<"Enter password(8ch):  "<<k;
 c=getch();//h
 gotoxy(5,5);
 cout<<"Enter password(7ch):  "<<k<<k;
 d=getch();//o
 gotoxy(5,5);
 cout<<"Enter password(6ch):  "<<k<<k<<k;
 e=getch();//n
 gotoxy(5,5);
 cout<<"Enter password(5ch):  "<<k<<k<<k<<k;
 f=getch();//e
 gotoxy(5,5);
 cout<<"Enter password(4ch):  "<<k<<k<<k<<k<<k;
 g=getch();//b
 gotoxy(5,5);
 cout<<"Enter password(3ch):  "<<k<<k<<k<<k<<k<<k;
 h=getch();//o
 gotoxy(5,5);
 cout<<"Enter password(2ch):  "<<k<<k<<k<<k<<k<<k<<k;
 j=getch();//o
 gotoxy(5,5);
 cout<<"Enter password(1ch):  "<<k<<k<<k<<k<<k<<k<<k<<k;
 l=getch();//k
 gotoxy(5,5);
 cout<<"Enter password(0ch): ";

 ////////////////goto menu1
 if(a==80 && c==72 && d==79 && e==78 && f==69 && g==98 && h==111 && j==111 && l==107){
  gotoxy(40,5);
  cout<<"\"OK\"\n\n\n\n";
  cout<<"loading...  please wait";
   for(i=25;i<=60;i++){
    p=196;
    gotoxy(i,8);
    cout<<p;
    gotoxy(i,10);
    cout<<p;
   }//end of for
   p=179;
   gotoxy(25,9);
   cout<<p;
   gotoxy(60,9);
   cout<<p;
   p=218;
   gotoxy(25,8);
   cout<<p;
   p=191;
   gotoxy(60,8);
   cout<<p;
   p=192;
   gotoxy(25,10);
   cout<<p;
   p=217;
   gotoxy(60,10);
   cout<<p;
  for(x=26;x<=59;x++){
   p=219;
   gotoxy(x,9);
   cout<<p;
   for(z=0;z<=1000000;z++)
   cout<<"";
  }//end of for
  menu();
 }//end of if
 cout<<"\n\n   \"wrong\"";
 i++;
 getch();
 if(i==3){
  cout<<"\n\n  \"YOU TRY TO ENTER 3 TIME, CAN'T TRY AGAIN\"";
  while(1)
   getch();
 }//end of if
 goto a;
}

 ////////////////////////////////////////////////////////////////////////////////void menu
void menu(){
 int c;
 clrscr();
 gotoxy(37,7);
 cout<<"PHONE BOOK MENU";
 gotoxy(30,10);
 cout<<"1- INPUT";
 gotoxy(30,12);
 cout<<"2- OUTPUT";
 gotoxy(30,14);
 cout<<"3- SORT(with names)";
 gotoxy(30,16);
 cout<<"4- EXIT";
 gotoxy(30,18);
 cout<<"Please enter number: ";

 gotoxy(51,18);
 cin>>c;
 switch(c){
  case 1: input();
  break;
  case 2: output();
  break;
  case 3: sort();
  break;
  case 4:
   clrscr();
   gotoxy(30,15);
   cout<<"\"Thank you for use this program\"";
   getch();
   exit(1);
  break;
  default: menu();
 }//end of switch
}//end of void menu




/////////////////////////////////////////////////////////////////////////input
void input(){
 int c;
 clrscr();
  gotoxy(1,2);
  cin.get();
  cout<<"     NAME     | HOME PHONE NUMBER |   MOBILE NUMBER   | NO |";
  gotoxy(2,4);
  cin.get(name[a],15);
  cin.get();
  gotoxy(17,4);
  cin.get(homenumber[a],20);
  cin.get();
  gotoxy(37,4);
  cin.get(mobilenumber[a],25);
  cin.get();
  gotoxy(57,4);
  cout<<a;
  a++;
  cout<<"\n\n Do you want to enter other number(y/n)? ";
  c=getch();
  if(c==121 || c==89)
   input();
  menu();
}//end of void input




/////////////////////////////////////////////////////////////////////////output
void output(){
 char c[25];
 int d;
 clrscr();
 if(a==1){
  cout<<"\n\n  Phone book is empty yet.";
  getch();
  menu();
 }//end of if

 cout<<"\n\n  Please enter his/her name to find: ";
 cin.get();
 cin.get(c,15);
 cin.get();
 for(d=1;d<=(a+1);d++)
  if(strcmp(name[d],c)==0){
   cout<<"\n\n     NAME     | HOME PHONE NUMBER |   MOBILE NUMBER   | NO |";
   gotoxy(2,10);
   cout<<name[d];
   gotoxy(17,10);
   cout<<homenumber[d];
   gotoxy(37,10);
   cout<<mobilenumber[d];
   gotoxy(57,10);
   cout<<d;
   break;
  }//end of if
  getch();
  menu();
}//end of output




/////////////////////////////////////////////////////////////////////////sort
void sort(){
  int i,j;
  char e[25];
  clrscr();
  if(a==1){
   cout<<"\n\n  Phone book is empty yet.";
   getch();
   menu();
  }//end of if
  for(i=1;i<=(a-1);i++)
   for(j=1;j<=a;j++)
    if(strcmp(name[j+1],name[j])<0){
     strcpy(e,name[j]);
     strcpy(name[j],name[j+1]);
     strcpy(name[j+1],e);

     strcpy(e,homenumber[j]);
     strcpy(homenumber[j],homenumber[j+1]);
     strcpy(homenumber[j+1],e);

     strcpy(e,mobilenumber[j]);
     strcpy(mobilenumber[j],mobilenumber[j+1]);
     strcpy(mobilenumber[j+1],e);
    }//end of if
   cout<<"\n\n     NAME     | HOME PHONE NUMBER |   MOBILE NUMBER   | NO |";
  for(i=3;i<=(a+1);i++){
   gotoxy(2,i*3);
   cout<<name[i];
   gotoxy(17,i*3);
   cout<<homenumber[i];
   gotoxy(37,i*3);
   cout<<mobilenumber[i];
   gotoxy(57,i*3);
   cout<<(i-2);
  }//end of for
  getch();
  menu();
}//end of output
