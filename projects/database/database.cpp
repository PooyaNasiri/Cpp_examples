#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void menu1();
void menu2();
void input();
void output();
void codes();
void edit();
void del();
void format();

int b=99,B;
char a1[200][50],a2[200][50],a3[200],a4[200][200],a5[200][50],a6[200][50],a7[200][50],a8[200][50],a9[200][50],a10[200][50],a11[200][50],a12[200][50],a13[200][50],a14[200][50],a15[200][50],a16[200][50],a17[200][50],a18[200][50],a19[200][50],a20[200][50],a21[200][50],a22[200][50],a23[200][50],a24[200][50],a25[200][50],a26[200][50],a27[200][50],a28[200][50],a29[200][50],a30[200][50],a31[200][50],a32[200][50],a33[200][50],a34[200][50],k=2;

main(){
 int a,c,d,e,f,g,h,i=0,j,l,m,n,o,x,z;
 char p;
 a:
 clrscr();
 gotoxy(28,2);
 cout<<k<<" WELLCOME TO DATABASE PROGRAME "<<k;
 gotoxy(3,40);
 cout<<k<<"copy right by dragon team"<<k;
 gotoxy(5,5);
 k=1;
 cout<<"Enter password(12ch): ";
 a=getch();//d
 gotoxy(5,5);
 cout<<"Enter password(11ch): "<<k;
 c=getch();//a
 gotoxy(5,5);
 cout<<"Enter password(10ch): "<<k<<k;
 d=getch();//t
 gotoxy(5,5);
 cout<<"Enter password(9ch):  "<<k<<k<<k;
 e=getch();//a
 gotoxy(5,5);
 cout<<"Enter password(8ch):  "<<k<<k<<k<<k;
 f=getch();//b
 gotoxy(5,5);
 cout<<"Enter password(7ch):  "<<k<<k<<k<<k<<k;
 g=getch();//a
 gotoxy(5,5);
 cout<<"Enter password(6ch):  "<<k<<k<<k<<k<<k<<k;
 h=getch();//s
 gotoxy(5,5);
 cout<<"Enter password(5ch):  "<<k<<k<<k<<k<<k<<k<<k;
 j=getch();//e
 gotoxy(5,5);
 cout<<"Enter password(4ch):  "<<k<<k<<k<<k<<k<<k<<k<<k;
 l=getch();//
 gotoxy(5,5);
 cout<<"Enter password(3ch):  "<<k<<k<<k<<k<<k<<k<<k<<k<<k;
 m=getch();//p
 gotoxy(5,5);
 cout<<"Enter password(2ch):  "<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k;
 n=getch();//e
 gotoxy(5,5);
 cout<<"Enter password(1ch):  "<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k;
 o=getch();//r
 gotoxy(5,5);
 cout<<"Enter password(0ch): ";

 ////////////////goto menu1
 if(a==68 && c==65 && d==84 && e==65 && f==98 && g==97 && h==115 && j==101 && l==32 && m==80 && n==69 && o==82){
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
  B=1;
  menu1();
 }//end of if

 //////////////goto menu2
 if(a==68 && c==65 && d==84 && e==65 && f==98 && g==97 && h==115 && j==101 && l==32 && m==80 && n==82 && o==79){
  gotoxy(40,5);
  cout<<"\"OK\"\n\n\n\n";
  cout<<"loading...  please wait";
   p=196;
   for(i=25;i<=60;i++){
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
  B=2;
  menu2();
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
}//end of main


////////////////////////////////////////////////////////////////////////////////void menu
void menu1(){
 int c;
 clrscr();
 gotoxy(35,7);
 cout<<k<<"DATA BASE MENU"<<k;
 gotoxy(30,10);
 cout<<"1- INPUT";
 gotoxy(30,12);
 cout<<"2- OUTPUT";
 gotoxy(30,14);
 cout<<"3- SORT CODES";
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
  case 3: codes();
  break;
  case 4:
   clrscr();
   gotoxy(30,15);
   cout<<"\"Thank you for use this program\"";
   getch();
   exit(1);
  break;
  default: menu1();
 }//end of switch
}//end of void menu


/////////////////////////////////////////////////////////////////////////////////////////////menu2
 void menu2(){
 int c,x,z;
 clrscr();
 gotoxy(35,7);
 cout<<k<<"DATA BASE MENU"<<k;
 gotoxy(30,10);
 cout<<"1- INPUT";
 gotoxy(30,12);
 cout<<"2- OUTPUT";
 gotoxy(30,14);
 cout<<"3- SORT CODES";
 gotoxy(30,16);
 cout<<"4- EDIT";
 gotoxy(30,18);
 cout<<"5- EXIT";
 gotoxy(30,21);
 cout<<"Please enter number: ";

 gotoxy(51,21);
 cin>>c;
 gotoxy(50,21);
 cout<<"   ";
 switch(c){
  case 1: input();
   break;
  case 2: output();
   break;
  case 3: codes();
   break;
  case 4:
   for(x=30;x<=40;x++){
    gotoxy(x,16);
    cout<<" 4- EDIT";
    for(z=0;z<=1000000;z++)
     cout<<"";
   }//end of for
   gotoxy(50,13);
   cout<<"1-DELETE";
   gotoxy(50,15);
   cout<<"2-FORMAT";
   gotoxy(50,17);
   cout<<"3-EDIT";
   gotoxy(50,19);
   cout<<"4-BACK TO MAIN MENU";
   gotoxy(51,21);
   cin>>c;
   switch(c){
    case 1: del();
     break;
    case 2: format();
     break;
    case 3: edit();
     break;
    case 4:
     gotoxy(50,13);
     cout<<"         ";
     gotoxy(50,15);
     cout<<"         ";
     gotoxy(50,17);
     cout<<"       ";
     gotoxy(50,19);
     cout<<"                    ";
     for(x=40;x>=30;x--){
      gotoxy(x,16);
      cout<<"4- EDIT  ";
      for(z=0;z<=1000000;z++)
       cout<<"";
     }//end of for
     menu2();
     break;
   }//end of switch
   break;
  case 5:
   clrscr();
   gotoxy(30,15);
   cout<<"\"Thank you for use this program\"";
   getch();
   exit(1);
   break;
  default: menu2();
 }//end of switch
}//end of void menu



/////////////////////////////////////////////////////////////////////////////////////////////input
void input(){
 char c,k=1;
 int x,z;
 clrscr();

 for(x=30;x>=1;x--){
  gotoxy(x,7);
  cout<<" DATA BASE MENU            ";
  gotoxy(x,10);
  cout<<"1- INPUT              ";
  gotoxy(x,12);
  cout<<"2- OUTPUT             ";
  gotoxy(x,14);
  cout<<"3- SORT CODES         ";
  gotoxy(x,16);
  cout<<"4- EDIT               ";
  gotoxy(x,18);
  cout<<"5- EXIT               ";
  gotoxy(x,21);
  cout<<"Please enter number:  ";
  for(z=0;z<=2000000;z++)
   cout<<"";
 }//end of for
  gotoxy(1,7);
  cout<<"                        ";
  gotoxy(1,12);
  cout<<"                ";
  gotoxy(1,14);
  cout<<"                ";
  gotoxy(1,16);
  cout<<"                ";
  gotoxy(1,18);
  cout<<"                ";
  gotoxy(1,21);
  cout<<"                        ";
 for(x=10;x>=2;x--){
  gotoxy(1,x);
  cout<<"   INPUT";
  gotoxy(1,x+1);
  cout<<"          ";
  for(z=0;z<=4000000;z++)
   cout<<"";
 }//end of for

 gotoxy(30,2);
 cout<<k<<k<<k<<k<<k<<k;
 cout<<"\n\n\n\n    PERSON's infomations";
 cout<<"\n\n\n  Please enter his/her full name: ";
 cin.get();
 cin.get(a1[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her sex(male/female): ";
 cin.get(a2[b+1],49);
 cin.get();

 cout<<"\n\n  Does he/she married(y/n)? ";
 cin>>a3[b+1];
 cin.get();

 cout<<"\n\n  Please enter his/her address: ";
 cin.get(a4[b+1],49);
 cin.get();

 cout<<"\n\n  What is his/her job? ";
 cin.get(a5[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her bithday(yyyy/mm/dd): ";
 cin.get(a6[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her education: ";
 cin.get(a7[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her postage code: ";
 cin.get(a8[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her hometown: ";
 cin.get(a17[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her home telephone number: ";
 cin.get(a25[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her mobile number(if has): ";
 cin.get(a26[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her email(if has): ";
 cin.get(a31[b+1],49);
 cin.get();


 cout<<"\n\n\t"<<k<<k<<k<<k<<k<<k;

 if(a3[b+1]=='y'){
  cout<<"\n\n\n\n  WIFE/HUSBAND's information";

  cout<<"\n\n\n  Please enter his/her full name: ";
  cin.get(a20[b+1],49);
  cin.get();

  cout<<"\n\n  What is his/her job? ";
  cin.get(a21[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her bithday(yyyy/mm/dd): ";
  cin.get(a22[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her hometown: ";
  cin.get(a23[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her education: ";
  cin.get(a24[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her mobile number(if has): ";
  cin.get(a27[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her email(if has): ";
  cin.get(a32[b+1],49);
  cin.get();

  cout<<"\n\n  How many children do they have(example: 1 boy, 1 girl)(if they have): ";
  cin.get(a30[b+1],49);
  cin.get();
 }//end of if

 cout<<"\n\n\t"<<k<<k<<k<<k<<k<<k;

 cout<<"\n\n\n\n  MOTHER'S information";

 cout<<"\n\n\n  Please enter her full name: ";
 cin.get(a9[b+1],49);
 cin.get();

 cout<<"\n\n  What is her job? ";
 cin.get(a10[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter her bithday(yyyy/mm/dd): ";
 cin.get(a11[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter her hometown: ";
 cin.get(a18[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter her education: ";
 cin.get(a12[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her mobile number(if has): ";
 cin.get(a28[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her email(if has): ";
 cin.get(a33[b+1],49);
 cin.get();

 cout<<"\n\n\t"<<k<<k<<k<<k<<k<<k;

 cout<<"\n\n\n\n  FATHER's information";

 cout<<"\n\n\n  Please enter his full name: ";
 cin.get(a13[b+1],49);
 cin.get();

 cout<<"\n\n  What is his job? ";
 cin.get(a14[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his bithday(yyyy/mm/dd): ";
 cin.get(a15[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his hometown: ";
 cin.get(a19[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his education: ";
 cin.get(a16[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her mobile number(if has): ";
 cin.get(a29[b+1],49);
 cin.get();

 cout<<"\n\n  Please enter his/her email(if has): ";
 cin.get(a34[b+1],49);
 cin.get();

 cout<<"\n\n   Is that right(y/n)? ";
 cin>>c;
 if(c!='y')
  input();
 b++;
 cout<<"\n\n Your code is: "<<b;
 getch();
 if(B==1)
  menu1();
 if(B==2)
  menu2();
}//end of void input




/////////////////////////////////////////////////////////////////////////////////////////////output
void output(){
 int c,x,z;
 clrscr();
 for(x=30;x>=1;x--){
  gotoxy(x,7);
  cout<<" DATA BASE MENU            ";
  gotoxy(x,10);
  cout<<"1- INPUT              ";
  gotoxy(x,12);
  cout<<"2- OUTPUT             ";
  gotoxy(x,14);
  cout<<"3- SORT CODES         ";
  gotoxy(x,16);
  cout<<"4- EDIT               ";
  gotoxy(x,18);
  cout<<"5- EXIT               ";
  gotoxy(x,21);
  cout<<"Please enter number:  ";
  for(z=0;z<=2000000;z++)
   cout<<"";
 }//end of for
  gotoxy(1,7);
  cout<<"                        ";
  gotoxy(1,10);
  cout<<"                  ";
  gotoxy(1,14);
  cout<<"                  ";
  gotoxy(1,16);
  cout<<"                  ";
  gotoxy(1,18);
  cout<<"                  ";
  gotoxy(1,21);
  cout<<"                        ";
 for(x=12;x>=2;x--){
  gotoxy(1,x);
  cout<<"   OUTPUT";
  gotoxy(1,x+1);
  cout<<"          ";
  for(z=0;z<=4000000;z++)
   cout<<"";
 }//end of for

 gotoxy(30,2);
 cout<<k<<k<<k<<k<<k<<k;
 if(b<=99){
  cout<<"\n\n\n  DATABASE ARCHIVE IS EMPTY";
  getch();
  if(B==1)
  menu1();
 if(B==2)
  menu2();
 }//end of if
  cout<<"\n\n\n  Enter his/her code to search that: ";
  cin>>c;
 if(c<=99 || c>=(b+1)){
  cout<<"\n\n  Can't find that";
  getch();
  if(B==1)
   menu1();
  if(B==2)
   menu2();
 }//end of if
 clrscr();
 gotoxy(30,2);
 cout<<k<<k<<k<<k<<k<<k;

 cout<<"\n\n\n\n    PERSON's infomations"<<"\n\n\n  Name: "<<a1[c]<<"\n\n  Sex: "<<a2[c]<<"\n\n  Married: "<<a3[c]<<"\n\n  Address: "<<a4[c]<<"\n\n  Job: "<<a5[c]<<"\n\n  Bithday: "<<a6[c]<<"\n\n  Education: "<<a7[c]<<"\n\n  Postage code: "<<a8[c]<<"\n\n  Hometown: "<<a17[c]<<"\n\n  Telephone number: "<<a25[c]<<"\n\n  Mobile number: "<<a26[c]<<"\n\n  Email: "<<a31[c];
 if(a3[c]=='y')
  cout<<"\n\n\n\n    WIFE/HUSBAND's information"<<"\n\n\n  Name: "<<a20[c]<<"\n\n  Job: "<<a21[c]<<"\n\n  Bithday: "<<a22[c]<<"\n\n  Hometown: "<<a23[c]<<"\n\n  Education: "<<a24[c]<<"\n\n  Mobile number: "<<a27[c]<<"\n\n  Email: "<<a32[c]<<"\n\n  Children: "<<a30[c];
 cout<<"\n\n\n\n    MOTHER'S information"<<"\n\n\n  Full name: "<<a9[c]<<"\n\n  Job: "<<a10[c]<<"\n\n  Bithday: "<<a11[c]<<"\n\n  Hometown: "<<a18[c]<<"\n\n  Education: "<<a12[c]<<"\n\n  Mobile number: "<<a28[c]<<"\n\n  Email: "<<a33[c]<<"\n\n\n\n    FATHER's information"<<"\n\n\n  Name: "<<a13[c]<<"\n\n  Job: "<<a14[c]<<"\n\n  Bithday(yyyy/mm/dd): "<<a15[c]<<"\n\n  Hometown: "<<a19[c]<<"\n\n  Education: "<<a16[c]<<"\n\n  Mobile number(if has): "<<a29[c]<<"\n\n  Email: "<<a34[c];

   getch();
  if(B==1)
   menu1();
  if(B==2)
   menu2();
}//end of void outpt


/////////////////////////////////////////////////////////////////////////////////////////////sort codes
 void codes(){
  int z,x;
  clrscr();

 for(x=30;x>=1;x--){
  gotoxy(x,7);
  cout<<" DATA BASE MENU            ";
  gotoxy(x,10);
  cout<<"1- INPUT              ";
  gotoxy(x,12);
  cout<<"2- OUTPUT             ";
  gotoxy(x,14);
  cout<<"3- SORT CODES         ";
  gotoxy(x,16);
  cout<<"4- EDIT               ";
  gotoxy(x,18);
  cout<<"5- EXIT               ";
  gotoxy(x,21);
  cout<<"Please enter number:  ";
  for(z=0;z<=2000000;z++)
   cout<<"";
 }//end of for
  gotoxy(1,7);
  cout<<"                        ";
  gotoxy(1,10);
  cout<<"                ";
  gotoxy(1,14);
  cout<<"                ";
  gotoxy(1,14);
  cout<<"                       ";
  gotoxy(1,16);
  cout<<"                ";
  gotoxy(1,18);
  cout<<"                ";
  gotoxy(1,21);
  cout<<"                        ";
 for(x=12;x>=2;x--){
  gotoxy(1,x);
  cout<<"   SORT CODES";
  gotoxy(1,x+1);
  cout<<"              ";
  for(z=0;z<=4000000;z++)
   cout<<"";
 }//end of for



  gotoxy(30,2);
  cout<<k<<k<<k<<k<<k<<k<<"\n\n";
  if(b<=99){
   cout<<"\n\n\n  DATABASE ARCHIVE IS EMPTY";
   getch();
  if(B==1)
   menu1();
  if(B==2)
   menu2();
  }//end of if
  for(z=100;z<=b;z++)
    cout<<"\n\n "<<z<<"_ "<<a1[z];
    getch();
    if(B==1)
     menu1();
    if(B==2)
     menu2();
 }//end of void show


/////////////////////////////////////////////////////////////////////////////////////////////edit
void edit(){
 int c,x,z;
 char d;
 clrscr();
 for(x=30;x>=1;x--){
  gotoxy(x,7);
  cout<<" DATA BASE MENU            ";
  gotoxy(x,10);
  cout<<"1- INPUT              ";
  gotoxy(x,12);
  cout<<"2- OUTPUT             ";
  gotoxy(x,14);
  cout<<"3- SORT CODES         ";
  gotoxy(x+10,16);
  cout<<"4- EDIT               ";
  gotoxy(x,18);
  cout<<"5- EXIT               ";
  gotoxy(x+20,13);
  cout<<"1-DELETE              ";
  gotoxy(x+20,15);
  cout<<"2-FORMAT              ";
  gotoxy(x+20,17);
  cout<<"3-EDIT                ";
  gotoxy(x+20,19);
  cout<<"4-BACK TO MAIN MENU   ";
  gotoxy(x,21);
  cout<<"Please enter number:  ";
  for(z=0;z<=2000000;z++)
   cout<<"";
 }//end of for
  gotoxy(1,7);
  cout<<"                      ";
  gotoxy(1,10);
  cout<<"                      ";
  gotoxy(1,12);
  cout<<"                      ";
  gotoxy(1,14);
  cout<<"                      ";
  gotoxy(10,16);
  cout<<"                      ";
  gotoxy(1,18);
  cout<<"                      ";
  gotoxy(1,21);
  cout<<"                      ";
  gotoxy(15,13);
  cout<<"                      ";
  gotoxy(15,15);
  cout<<"                      ";
  gotoxy(15,17);
  cout<<"                      ";
  gotoxy(15,19);
  cout<<"                          ";
 for(x=12;x>=2;x--){
  gotoxy(1,x);
  cout<<"   EDIT>>>EDIT";
  gotoxy(1,x+1);
  cout<<"              ";
  for(z=0;z<=4000000;z++)
   cout<<"";
 }//end of for
 gotoxy(30,2);
 cout<<k<<k<<k<<k<<k<<k;

 if(b<=99){
  cout<<"\n\n\n  DATABASE ARCHIVE IS EMPTY";
  getch();
  menu2();
 }//end of if
  cout<<"\n\n\n  Enter his/her code to edit that: ";
  cin>>c;
  if(c<=99 || c>=(b+1)){
   cout<<"\n\n  Can't find that";
   getch();
   menu2();
  }//end of if

 gotoxy(30,2);
 cout<<k<<k<<k<<k<<k<<k;

 if(a3[c]=='y')
 cout<<"\n\n\n\n\n\n\n    PERSON's infomations";
 cout<<"\n\n\n  Please enter his/her full name ("<<a1[b]<<"): ";
 cin.get();
 cin.get(a1[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her sex(male/female) ("<<a2[b]<<"): ";
 cin.get(a2[b],49);
 cin.get();

 cout<<"\n\n  Does he/she married(y/n) ("<<a3[b]<<"): ";
 cin>>a3[b];
 cin.get();

 cout<<"\n\n  Please enter his/her address("<<a4[b]<<"): ";
 cin.get(a4[b],49);
 cin.get();

 cout<<"\n\n  What is his/her job("<<a5[b]<<"): ";
 cin.get(a5[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her bithday(yyyy/mm/dd)("<<a6[b]<<"): ";
 cin.get(a6[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her education("<<a7[b]<<"): ";
 cin.get(a7[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her postage code("<<a8[b]<<"): ";
 cin.get(a8[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her hometown("<<a17[b]<<"): ";
 cin.get(a17[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her home telephone number("<<a25[b]<<"): ";
 cin.get(a25[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her mobile number(if has)("<<a26[b]<<"): ";
 cin.get(a26[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her email(if has)("<<a31[b]<<"): ";
 cin.get(a31[b],49);
 cin.get();

 cout<<"\n\n\t"<<k<<k<<k<<k<<k<<k;

 if(a3[b+1]=='y'){
  cout<<"\n\n\n\n  WIFE/HUSBAND's information";

  cout<<"\n\n\n  Please enter his/her full name("<<a20[b]<<"): ";
  cin.get(a20[b+1],49);
  cin.get();

  cout<<"\n\n  What is his/her job("<<a21[b]<<"): ";
  cin.get(a21[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her bithday(yyyy/mm/dd)("<<a22[b]<<"): ";
  cin.get(a22[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her hometown("<<a23[b]<<"): ";
  cin.get(a23[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her education("<<a24[b]<<"): ";
  cin.get(a24[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her mobile number(if has)("<<a27[b]<<"): ";
  cin.get(a27[b+1],49);
  cin.get();

  cout<<"\n\n  Please enter his/her email(if has)("<<a32[b]<<"): ";
  cin.get(a32[b+1],49);
  cin.get();

  cout<<"\n\n  How many children do they have(example: 1 boy, 1 girl)(if they have)("<<a30[b]<<"): ";
  cin.get(a30[b+1],49);
  cin.get();
 }//end of if

 cout<<"\n\n\t"<<k<<k<<k<<k<<k<<k;

 cout<<"\n\n\n\n  MOTHER'S information";

 cout<<"\n\n\n  Please enter her full name("<<a9[b]<<"): ";
 cin.get(a9[b],49);
 cin.get();

 cout<<"\n\n  What is her job("<<a10[b]<<"):";
 cin.get(a10[b],49);
 cin.get();

 cout<<"\n\n  Please enter her bithday(yyyy/mm/dd)("<<a11[b]<<"): ";
 cin.get(a11[b],49);
 cin.get();

 cout<<"\n\n  Please enter her hometown("<<a18[b]<<"): ";
 cin.get(a18[b],49);
 cin.get();

 cout<<"\n\n  Please enter her education("<<a12[b]<<"): ";
 cin.get(a12[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her mobile number(if has)("<<a28[b]<<"): ";
 cin.get(a28[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her email(if has)("<<a33[b]<<"): ";
 cin.get(a33[b],49);
 cin.get();

 cout<<"\n\n\t"<<k<<k<<k<<k<<k<<k;

 cout<<"\n\n\n\n  FATHER's information";

 cout<<"\n\n\n  Please enter his full name("<<a13[b]<<"): ";
 cin.get(a13[b],49);
 cin.get();

 cout<<"\n\n  What is his job("<<a14[b]<<"): ";
 cin.get(a14[b],49);
 cin.get();

 cout<<"\n\n  Please enter his bithday(yyyy/mm/dd)("<<a15[b]<<"): ";
 cin.get(a15[b],49);
 cin.get();

 cout<<"\n\n  Please enter his hometown("<<a19[b]<<"): ";
 cin.get(a19[b],49);
 cin.get();

 cout<<"\n\n  Please enter his education("<<a16[b]<<"): ";
 cin.get(a16[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her mobile number(if has)("<<a29[b]<<"): ";
 cin.get(a29[b],49);
 cin.get();

 cout<<"\n\n  Please enter his/her email(if has)("<<a34[b]<<"): ";
 cin.get(a34[b],49);
 cin.get();

  cout<<"\n\n   Is that right(y/n)? ";
  cin>>d;
  if(d!='y')
   edit();
  menu2();
}//end of void edit



/////////////////////////////////////////////////////////////////////////////////////////////delete
 void del(){
  int c,x,z;
  char d;
  clrscr();
  for(x=30;x>=1;x--){
  gotoxy(x,7);
  cout<<" DATA BASE MENU            ";
  gotoxy(x,10);
  cout<<"1- INPUT              ";
  gotoxy(x,12);
  cout<<"2- OUTPUT             ";
  gotoxy(x,14);
  cout<<"3- SORT CODES         ";
  gotoxy(x+10,16);
  cout<<"4- EDIT               ";
  gotoxy(x,18);
  cout<<"5- EXIT               ";
  gotoxy(x+20,13);
  cout<<"1-DELETE              ";
  gotoxy(x+20,15);
  cout<<"2-FORMAT              ";
  gotoxy(x+20,17);
  cout<<"3-EDIT                ";
  gotoxy(x+20,19);
  cout<<"4-BACK TO MAIN MENU   ";
  gotoxy(x,21);
  cout<<"Please enter number:  ";
  for(z=0;z<=2000000;z++)
   cout<<"";
 }//end of for
  gotoxy(1,7);
  cout<<"                      ";
  gotoxy(1,10);
  cout<<"                      ";
  gotoxy(1,12);
  cout<<"                      ";
  gotoxy(1,14);
  cout<<"                      ";
  gotoxy(10,16);
  cout<<"                      ";
  gotoxy(1,18);
  cout<<"                      ";
  gotoxy(1,21);
  cout<<"                      ";
  gotoxy(15,13);
  cout<<"                      ";
  gotoxy(15,15);
  cout<<"                      ";
  gotoxy(15,17);
  cout<<"                      ";
  gotoxy(15,19);
  cout<<"                          ";
 for(x=12;x>=2;x--){
  gotoxy(1,x);
  cout<<"   EDIT>>>DELETE";
  gotoxy(1,x+1);
  cout<<"                 ";
  for(z=0;z<=4000000;z++)
   cout<<"";
 }//end of for
  gotoxy(30,2);
  cout<<k<<k<<k<<k<<k<<k;
   if(b<=99){
    cout<<"\n\n\n  DATABASE ARCHIVE IS EMPTY";
    getch();
    menu2();
   }//end of if
   cout<<"\n\n\n  Enter his/her code to delete that: ";
   cin>>c;
   if(c<=99 || c>=(b+1)){
    cout<<"\n\n  Can't find that";
    getch();
    menu2();
   }//end of if
   cout<<"\n\n  Do you sure to delete code "<<c<<"(y/n)? ";
   cin>>d;
   if(d=='y'){
     strcpy(a1[c]," ");
     strcpy(a2[c]," ");
     a3[c]='\0';
     strcpy(a4[c]," ");
     strcpy(a5[c]," ");
     strcpy(a6[c]," ");
     strcpy(a7[c]," ");
     strcpy(a8[c]," ");
     strcpy(a9[c]," ");
     strcpy(a10[c]," ");
     strcpy(a11[c]," ");
     strcpy(a12[c]," ");
     strcpy(a13[c]," ");
     strcpy(a14[c]," ");
     strcpy(a15[c]," ");
     strcpy(a16[c]," ");
     strcpy(a17[c]," ");
     strcpy(a18[c]," ");
     strcpy(a19[c]," ");
     strcpy(a21[c]," ");
     strcpy(a22[c]," ");
     strcpy(a23[c]," ");
     strcpy(a24[c]," ");
     strcpy(a25[c]," ");
     strcpy(a26[c]," ");
     strcpy(a27[c]," ");
     strcpy(a28[c]," ");
     strcpy(a29[c]," ");
     strcpy(a30[c]," ");
     strcpy(a31[c]," ");
     strcpy(a32[c]," ");
     strcpy(a33[c]," ");
     strcpy(a34[c]," ");
    cout<<"\n\n  DELETING COMPLETE";
    getch();
   }//end of if
   menu2();
 }//end of void del



/////////////////////////////////////////////////////////////////////////////////////////////format
 void format(){
  char c,p;
  int z,d,x;
  clrscr();
  for(x=30;x>=1;x--){
  gotoxy(x,7);
  cout<<" DATA BASE MENU            ";
  gotoxy(x,10);
  cout<<"1- INPUT              ";
  gotoxy(x,12);
  cout<<"2- OUTPUT             ";
  gotoxy(x,14);
  cout<<"3- SORT CODES         ";
  gotoxy(x+10,16);
  cout<<"4- EDIT               ";
  gotoxy(x,18);
  cout<<"5- EXIT               ";
  gotoxy(x+20,13);
  cout<<"1-DELETE              ";
  gotoxy(x+20,15);
  cout<<"2-FORMAT              ";
  gotoxy(x+20,17);
  cout<<"3-EDIT                ";
  gotoxy(x+20,19);
  cout<<"4-BACK TO MAIN MENU   ";
  gotoxy(x,21);
  cout<<"Please enter number:  ";
  for(z=0;z<=2000000;z++)
   cout<<"";
 }//end of for
  gotoxy(1,7);
  cout<<"                      ";
  gotoxy(1,10);
  cout<<"                      ";
  gotoxy(1,12);
  cout<<"                      ";
  gotoxy(1,14);
  cout<<"                      ";
  gotoxy(10,16);
  cout<<"                      ";
  gotoxy(1,18);
  cout<<"                      ";
  gotoxy(1,21);
  cout<<"                      ";
  gotoxy(15,13);
  cout<<"                      ";
  gotoxy(15,15);
  cout<<"                      ";
  gotoxy(15,17);
  cout<<"                      ";
  gotoxy(15,19);
  cout<<"                          ";
 for(x=12;x>=2;x--){
  gotoxy(1,x);
  cout<<"   EDIT>>>FORMAT";
  gotoxy(1,x+1);
  cout<<"                 ";
  for(z=0;z<=4000000;z++)
   cout<<"";
 }//end of for
  gotoxy(30,2);
  cout<<k<<k<<k<<k<<k<<k;
  if(b<=99){
   cout<<"\n\n\n  DATABASE ARCHIVE IS EMPTY";
   getch();
   menu2();
  }//end of if
  cout<<"\n\n  Do you sure to format all informations in database archive(y/n)? ";
  cin>>c;
  if(c=='y'){
   cout<<"\n\n  If you sure press f:";
   d=getch();
   if(d==102){
    for(z=100;z<=199;z++){
     strcpy(a1[z]," ");
     strcpy(a2[z]," ");
     a3[z]='\0';
     strcpy(a4[z]," ");
     strcpy(a5[z]," ");
     strcpy(a6[z]," ");
     strcpy(a7[z]," ");
     strcpy(a8[z]," ");
     strcpy(a9[z]," ");
     strcpy(a10[z]," ");
     strcpy(a11[z]," ");
     strcpy(a12[z]," ");
     strcpy(a13[z]," ");
     strcpy(a14[z]," ");
     strcpy(a15[z]," ");
     strcpy(a16[z]," ");
     strcpy(a17[z]," ");
     strcpy(a18[z]," ");
     strcpy(a19[z]," ");
     strcpy(a21[z]," ");
     strcpy(a22[z]," ");
     strcpy(a23[z]," ");
     strcpy(a24[z]," ");
     strcpy(a25[z]," ");
     strcpy(a26[z]," ");
     strcpy(a27[z]," ");
     strcpy(a28[z]," ");
     strcpy(a29[z]," ");
     strcpy(a30[z]," ");
     strcpy(a31[z]," ");
     strcpy(a32[z]," ");
     strcpy(a33[z]," ");
     strcpy(a34[z]," ");
    }//end of for
   gotoxy(38,5);
   cout<<"\"OK\"\n\n\n\n";
   cout<<"loading...  please wait";
   p=196;
   gotoxy(25,8);
  	cout<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p;
   gotoxy(25,10);
   cout<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p<<p;
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
    cout<<"\n\n\n  FORMATING COMPLETE";
    getch();
   }//end of if
  }//end of if
   menu2();
 }//end of void format
