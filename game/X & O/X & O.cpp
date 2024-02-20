#include <iostream.h>
#include <conio.h>
void game();
void table();
int com=0,you=0,set=1;
main(){
 cout<<"\n\n\n\n\n              welcome to clevering mathemathic system  X&O game";
 getch();
 table();
}//end of menu

void table(){
 int x,y;
 char q;
 clrscr();
 cout<<"\n                                 set "<<set;
 cout<<"\n    your score : "<<you<<"                                computer's score : "<<com<<"\n    you: O                                        computer: X";
 for(y=11;y<=21;y++){
  q=179;
  gotoxy(13,y);
  cout<<q;
  gotoxy(17,y);
  cout<<q;
 }//end of for
 for(x=10;x<=20;x++){
  q=196;
  gotoxy(x,14);
  cout<<q;
  gotoxy(x,18);
  cout<<q;
 }//end of for
 q=197;
 gotoxy(13,14);
 cout<<q;
 gotoxy(17,14);
 cout<<q;
 gotoxy(13,18);
 cout<<q;
 gotoxy(17,18);
 cout<<q;
 gotoxy(11,12);
 cout<<"1";
 gotoxy(15,12);
 cout<<"2";
 gotoxy(19,12);
 cout<<"3";
 gotoxy(11,16);
 cout<<"4";
 gotoxy(15,16);
 cout<<"5";
 gotoxy(19,16);
 cout<<"6";
 gotoxy(11,20);
 cout<<"7";
 gotoxy(15,20);
 cout<<"8";
 gotoxy(19,20);
 cout<<"9";
 game();
}//end of void table



void game(){
 static int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,o;
 char q;
 if((a==1 && b==1 && c==1) || (d==1 && e==1 && f==1) || (g==1 && h==1 && i==1) || (a==1 && d==1 && g==1) || (b==1 && e==1 && h==1) || (c==1 && f==1 && i==1) || (a==1 && e==1 && i==1) || (g==1 && e==1 && c==1)){
  gotoxy(35,13);
  cout<<"\"YOU WIN\"";
  getch();
  you++;
  set++;
  a=0;
  b=0;
  c=0;
  d=0;
  e=0;
  f=0;
  g=0;
  h=0;
  i=0;
  table();
 }//end of if

 if((a==2 && b==2 && c==2) || (d==2 && e==2 && f==2) || (g==2 && h==2 && i==2) || (a==2 && d==2 && g==2) || (b==2 && e==2 && h==2) || (c==2 && f==2 && i==2) || (a==2 && e==2 && i==2) || (g==2 && e==2 && c==2)){
  gotoxy(35,13);
  cout<<"\"COMPUTER WIN\"";
  getch();
  com++;
  set++;
  a=0;
  b=0;
  c=0;
  d=0;
  e=0;
  f=0;
  g=0;
  h=0;
  i=0;
  table();
 }//end of if

 gotoxy(5,25);
 cout<<"Enter a number:   ";
 gotoxy(22,25);
 cin>>o;
 gotoxy(5,25);
 cout<<"                                        \n                                                      \n                                                      \n                                                      ";
 switch(o){
  case 1:
   if(a!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(11,12);
   cout<<q;
   a=1;
   break;
  case 2:
   if(b!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(15,12);
   cout<<q;
   b=1;
   break;
  case 3:
   if(c!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(19,12);
   cout<<q;
   c=1;
   break;
  case 4:
   if(d!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(11,16);
   cout<<q;
   d=1;
   break;
  case 5:
   if(e!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(15,16);
   cout<<q;
   e=1;
   break;
  case 6:
   if(f!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(19,16);
   cout<<q;
   f=1;
   break;
  case 7:
   if(g!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(11,20);
   cout<<q;
   g=1;
   break;
  case 8:
   if(h!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(15,20);
   cout<<q;
   h=1;
   break;
  case 9:
   if(i!=0){
    gotoxy(25,25);
    cout<<"\"wrong\"";
    game();
   }//end of if
   q=79;
   gotoxy(19,20);
   cout<<q;
   i=1;
   break;
  default:
   gotoxy(25,25);
   cout<<"\"wrong\"";
   game();
 }//end of switch



/////////////////////////////////////////atack

 if(a==2 && b==2 && c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if

 if(a==2 && c==2 && b==0){
  q=88;
  gotoxy(15,12);
  cout<<q;
  b=2;
  game();
 }//end of if

 if(b==2 && c==2 && a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if


 if(d==2 && e==2 && f==0){
  q=88;
  gotoxy(19,16);
  cout<<q;
  f=2;
  game();
 }//end of if

 if(d==2 && f==2 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(e==2 && f==2 && d==0){
  q=88;
  gotoxy(11,16);
  cout<<q;
  d=2;
  game();
 }//end of if


 if(g==2 && h==2 && i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if

 if(g==2 && i==2 && h==0){
  q=88;
  gotoxy(15,20);
  cout<<q;
  h=2;
  game();
 }//end of if

 if(h==2 && i==2 && g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if


 if(a==2 && d==2 && g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if

 if(a==2 && g==2 && d==0){
  q=88;
  gotoxy(11,16);
  cout<<q;
  d=2;
  game();
 }//end of if

 if(d==2 && g==2 && a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if


 if(b==2 && e==2 && h==0){
  q=88;
  gotoxy(15,20);
  cout<<q;
  h=2;
  game();
 }//end of if

 if(b==2 && h==2 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(e==2 && h==2 && b==0){
  q=88;
  gotoxy(15,12);
  cout<<q;
  b=2;
  game();
 }//end of if


 if(c==2 && f==2 && i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if

 if(c==2 && i==2 && f==0){
  q=88;
  gotoxy(19,16);
  cout<<q;
  f=2;
  game();
 }//end of if

 if(f==2 && i==2 && c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if


 if(a==2 && e==2 && i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if

 if(a==2 && i==2 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(i==2 && e==2 && a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if


 if(c==2 && e==2 && g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if

 if(c==2 && g==2 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(g==2 && e==2 && c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if



////////////////////////////////////////gaurd
 if(a==1 && b==1 && c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if

 if(a==1 && c==1 && b==0){
  q=88;
  gotoxy(15,12);
  cout<<q;
  b=2;
  game();
 }//end of if

 if(b==1 && c==1 && a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if


 if(d==1 && e==1 && f==0){
  q=88;
  gotoxy(19,16);
  cout<<q;
  f=2;
  game();
 }//end of if

 if(d==1 && f==1 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(e==1 && f==1 && d==0){
  q=88;
  gotoxy(11,16);
  cout<<q;
  d=2;
  game();
 }//end of if


 if(g==1 && h==1 && i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if

 if(g==1 && i==1 && h==0){
  q=88;
  gotoxy(15,20);
  cout<<q;
  h=2;
  game();
 }//end of if

 if(h==1 && i==1 && g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if


 if(a==1 && d==1 && g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if

 if(a==1 && g==1 && d==0){
  q=88;
  gotoxy(11,16);
  cout<<q;
  d=2;
  game();
 }//end of if

 if(d==1 && g==1 && a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if


 if(b==1 && e==1 && h==0){
  q=88;
  gotoxy(15,20);
  cout<<q;
  h=2;
  game();
 }//end of if

 if(b==1 && h==1 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(e==1 && h==1 && b==0){
  q=88;
  gotoxy(15,12);
  cout<<q;
  b=2;
  game();
 }//end of if


 if(c==1 && f==1 && i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if

 if(c==1 && i==1 && f==0){
  q=88;
  gotoxy(19,16);
  cout<<q;
  f=2;
  game();
 }//end of if

 if(f==1 && i==1 && c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if


 if(a==1 && e==1 && i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if

 if(a==1 && i==1 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(i==1 && e==1 && a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if


 if(c==1 && e==1 && g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if

 if(c==1 && g==1 && e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(g==1 && e==1 && c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if


//////////////////////////////random
 if(a==0){
  q=88;
  gotoxy(11,12);
  cout<<q;
  a=2;
  game();
 }//end of if

 if(b==0){
  q=88;
  gotoxy(15,12);
  cout<<q;
  b=2;
  game();
 }//end of if

 if(c==0){
  q=88;
  gotoxy(19,12);
  cout<<q;
  c=2;
  game();
 }//end of if

 if(d==0){
  q=88;
  gotoxy(11,16);
  cout<<q;
  d=2;
  game();
 }//end of if

 if(e==0){
  q=88;
  gotoxy(15,16);
  cout<<q;
  e=2;
  game();
 }//end of if

 if(f==0){
  q=88;
  gotoxy(19,16);
  cout<<q;
  f=2;
  game();
 }//end of if

 if(g==0){
  q=88;
  gotoxy(11,20);
  cout<<q;
  g=2;
  game();
 }//end of if

 if(h==0){
  q=88;
  gotoxy(15,20);
  cout<<q;
  h=2;
  game();
 }//end of if

 if(i==0){
  q=88;
  gotoxy(19,20);
  cout<<q;
  i=2;
  game();
 }//end of if
  set++;
  a=0;
  b=0;
  c=0;
  d=0;
  e=0;
  f=0;
  g=0;
  h=0;
  i=0;
 gotoxy(35,13);
 cout<<"\"NO BODY WIN\"";
 getch();
 table();
}//end of void game
