#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void chose1();
void chose2();
void paying();

 //1-mushroom     //2-sauce          //3-olive        //4-sausage     //5-cheese      //6-pimiento       //7-beef

 //8-chicken     //9-pea & corn      //10-salami      //11-onion      //12-tomato     //13-chili pepper


 int a,n=0,m[13],x,y,z;
 float c[11],cost=0;
 char k,g1[100],g2[100],g3[100],g4[100],g5[100];

main(){
 gotoxy(22,10);
 cout<<"Welcome to PIZZA KAPACK online ordering";
 getch();
 clrscr();
 for(z=0;z<=11;z++)
  m[z]=0;
 for(z=0;z<=11;z++)
  c[z]=0;
 chose1();
}//end of main

void chose1(){
 gotoxy(19,3);
 cout<<"\"Please chose what do you want to be in your pizza\"";
 ////////////////////////////////// 1
 gotoxy(8,7);
 cout<<"mushroom";
 c[0]=(m[0]*0.1)+0.5;
 gotoxy(10,23);
 cout<<c[0]<<"$  ";
 for(x=9;x<=13;x++){
  k=196;
  if(n==0)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==0)
   k=186;
  gotoxy(9,y);
  cout<<k;
  gotoxy(13,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==0)
  k=201;
 gotoxy(9,8);
 cout<<k;
 k=191;
 if(n==0)
  k=187;
 gotoxy(13,8);
 cout<<k;
 k=192;
 if(n==0)
  k=200;
 gotoxy(9,22);
 cout<<k;
 k=217;
 if(n==0)
  k=188;
 gotoxy(13,22);
 cout<<k;
 k=180;
 if(n==0)
  k=185;
 gotoxy(13,10);
 cout<<k;
 k=195;
 if(n==0)
  k=204;
 gotoxy(9,10);
 cout<<k;
 k=180;
 if(n==0)
  k=185;
 gotoxy(13,20);
 cout<<k;
 k=195;
 if(n==0)
  k=204;
 gotoxy(9,20);
 cout<<k;
 k=197;
 gotoxy(11,9);
 cout<<k;
 k=196;
 gotoxy(11,21);
 cout<<k;

  for(y=19;y>=(19-(m[0]));y--){
   k=219;
   gotoxy(10,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[0]));y++){
   k=32;
   gotoxy(10,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////1

 //////////////////////////////////2
 gotoxy(17,7);
 cout<<"sauce";
 c[1]=(m[1]*0.02)+0.01;
 gotoxy(17,23);
 cout<<c[1]<<"$  ";
 for(x=18;x<=20;x++){
  k=196;
  if(n==1)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==1)
   k=186;
  gotoxy(17,y);
  cout<<k;
  gotoxy(21,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==1)
  k=201;
 gotoxy(17,8);
 cout<<k;
 k=191;
 if(n==1)
  k=187;
 gotoxy(21,8);
 cout<<k;
 k=192;
 if(n==1)
  k=200;
 gotoxy(17,22);
 cout<<k;
 k=217;
 if(n==1)
  k=188;
 gotoxy(21,22);
 cout<<k;
 k=180;
 if(n==1)
  k=185;
 gotoxy(21,10);
 cout<<k;
 k=195;
 if(n==1)
  k=204;
 gotoxy(17,10);
 cout<<k;
 k=180;
 if(n==1)
  k=185;
 gotoxy(21,20);
 cout<<k;
 k=195;
 if(n==1)
  k=204;
 gotoxy(17,20);
 cout<<k;
 k=197;
 gotoxy(19,9);
 cout<<k;
 k=196;
 gotoxy(19,21);
 cout<<k;

 for(y=19;y>=(19-(m[1]));y--){
   k=219;
   gotoxy(18,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[1]));y++){
   k=32;
   gotoxy(18,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////2

 //////////////////////////////////3
 gotoxy(24,7);
 cout<<"olive";
 c[2]=(m[2]*0.1)+0.1;
 gotoxy(25,23);
 cout<<c[2]<<"$  ";
 for(x=25;x<=29;x++){
  k=196;
  if(n==2)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==2)
   k=186;
  gotoxy(25,y);
  cout<<k;
  gotoxy(29,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==2)
  k=201;
 gotoxy(25,8);
 cout<<k;
 k=191;
 if(n==2)
  k=187;
 gotoxy(29,8);
 cout<<k;
 k=192;
 if(n==2)
  k=200;
 gotoxy(25,22);
 cout<<k;
 k=217;
 if(n==2)
  k=188;
 gotoxy(29,22);
 cout<<k;
 k=180;
 if(n==2)
  k=185;
 gotoxy(29,10);
 cout<<k;
 k=195;
 if(n==2)
  k=204;
 gotoxy(25,10);
 cout<<k;
 k=180;
 if(n==2)
  k=185;
 gotoxy(29,20);
 cout<<k;
 k=195;
 if(n==2)
  k=204;
 gotoxy(25,20);
 cout<<k;
 k=197;
 gotoxy(27,9);
 cout<<k;
 k=196;
 gotoxy(27,21);
 cout<<k;

 for(y=19;y>=(19-(m[2]));y--){
   k=219;
   gotoxy(26,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[2]));y++){
   k=32;
   gotoxy(26,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////3

 //////////////////////////////////4
 gotoxy(32,7);
 cout<<"sausage";
 c[3]=(m[3]*0.2)+0.7;
 gotoxy(34,23);
 cout<<c[3]<<"$  ";
 for(x=33;x<=37;x++){
  k=196;
  if(n==3)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==3)
   k=186;
  gotoxy(33,y);
  cout<<k;
  gotoxy(37,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==3)
  k=201;
 gotoxy(33,8);
 cout<<k;
 k=191;
 if(n==3)
  k=187;
 gotoxy(37,8);
 cout<<k;
 k=192;
 if(n==3)
  k=200;
 gotoxy(33,22);
 cout<<k;
 k=217;
 if(n==3)
  k=188;
 gotoxy(37,22);
 cout<<k;
 k=180;
 if(n==3)
  k=185;
 gotoxy(37,10);
 cout<<k;
 k=195;
 if(n==3)
  k=204;
 gotoxy(33,10);
 cout<<k;
 k=180;
 if(n==3)
  k=185;
 gotoxy(37,20);
 cout<<k;
 k=195;
 if(n==3)
  k=204;
 gotoxy(33,20);
 cout<<k;
 k=197;
 gotoxy(35,9);
 cout<<k;
 k=196;
 gotoxy(35,21);
 cout<<k;

 for(y=19;y>=(19-(m[3]));y--){
   k=219;
   gotoxy(34,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[3]));y++){
   k=32;
   gotoxy(34,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////4

 //////////////////////////////////5
 gotoxy(40,7);
 cout<<"cheese";
 c[4]=(m[4]*0.1)+0.2;
 gotoxy(42,23);
 cout<<c[4]<<"$  ";
 for(x=41;x<=45;x++){
  k=196;
  if(n==4)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==4)
   k=186;
  gotoxy(41,y);
  cout<<k;
  gotoxy(45,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==4)
  k=201;
 gotoxy(41,8);
 cout<<k;
 k=191;
 if(n==4)
  k=187;
 gotoxy(45,8);
 cout<<k;
 k=192;
 if(n==4)
  k=200;
 gotoxy(41,22);
 cout<<k;
 k=217;
 if(n==4)
  k=188;
 gotoxy(45,22);
 cout<<k;
 k=180;
 if(n==4)
  k=185;
 gotoxy(45,10);
 cout<<k;
 k=195;
 if(n==4)
  k=204;
 gotoxy(41,10);
 cout<<k;
 k=180;
 if(n==4)
  k=185;
 gotoxy(45,20);
 cout<<k;
 k=195;
 if(n==4)
  k=204;
 gotoxy(41,20);
 cout<<k;
 k=197;
 gotoxy(43,9);
 cout<<k;
 k=196;
 gotoxy(43,21);
 cout<<k;

 for(y=19;y>=(19-(m[4]));y--){
   k=219;
   gotoxy(42,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[4]));y++){
   k=32;
   gotoxy(42,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////5

 //////////////////////////////////6
 gotoxy(48,7);
 cout<<"pimiento";
 c[5]=(m[5]*0.2)+0.3;
 gotoxy(50,23);
 cout<<c[5]<<"$  ";
 for(x=49;x<=53;x++){
  k=196;
  if(n==5)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==5)
   k=186;
  gotoxy(49,y);
  cout<<k;
  gotoxy(53,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==5)
  k=201;
 gotoxy(49,8);
 cout<<k;
 k=191;
 if(n==5)
  k=187;
 gotoxy(53,8);
 cout<<k;
 k=192;
 if(n==5)
  k=200;
 gotoxy(49,22);
 cout<<k;
 k=217;
 if(n==5)
  k=188;
 gotoxy(53,22);
 cout<<k;
 k=180;
 if(n==5)
  k=185;
 gotoxy(53,10);
 cout<<k;
 k=195;
 if(n==5)
  k=204;
 gotoxy(49,10);
 cout<<k;
 k=180;
 if(n==5)
  k=185;
 gotoxy(53,20);
 cout<<k;
 k=195;
 if(n==5)
  k=204;
 gotoxy(49,20);
 cout<<k;
 k=197;
 gotoxy(51,9);
 cout<<k;
 k=196;
 gotoxy(51,21);
 cout<<k;

 for(y=19;y>=(19-(m[5]));y--){
   k=219;
   gotoxy(50,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[5]));y++){
   k=32;
   gotoxy(50,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////6

 //////////////////////////////////7
 gotoxy(58,7);
 cout<<"beef";
 c[6]=(m[6]*0.3)+0.5;
 gotoxy(58,23);
 cout<<c[6]<<"$  ";
 for(x=57;x<=61;x++){
  k=196;
  if(n==6)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==6)
   k=186;
  gotoxy(57,y);
  cout<<k;
  gotoxy(61,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==6)
  k=201;
 gotoxy(57,8);
 cout<<k;
 k=191;
 if(n==6)
  k=187;
 gotoxy(61,8);
 cout<<k;
 k=192;
 if(n==6)
  k=200;
 gotoxy(57,22);
 cout<<k;
 k=217;
 if(n==6)
  k=188;
 gotoxy(61,22);
 cout<<k;
 k=180;
 if(n==6)
  k=185;
 gotoxy(61,10);
 cout<<k;
 k=195;
 if(n==6)
  k=204;
 gotoxy(57,10);
 cout<<k;
 k=180;
 if(n==6)
  k=185;
 gotoxy(61,20);
 cout<<k;
 k=195;
 if(n==6)
  k=204;
 gotoxy(57,20);
 cout<<k;
 k=197;
 gotoxy(59,9);
 cout<<k;
 k=196;
 gotoxy(59,21);
 cout<<k;

 for(y=19;y>=(19-(m[6]));y--){
   k=219;
   gotoxy(58,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[6]));y++){
   k=32;
   gotoxy(58,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////7

 //////////////////////////////////8
 gotoxy(64,7);
 cout<<"chicken";
 c[7]=(m[7]*0.35)+0.6;
 gotoxy(65,23);
 cout<<c[7]<<"$  ";
 for(x=65;x<=69;x++){
  k=196;
  if(n==7)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==7)
   k=186;
  gotoxy(65,y);
  cout<<k;
  gotoxy(69,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==7)
  k=201;
 gotoxy(65,8);
 cout<<k;
 k=191;
 if(n==7)
  k=187;
 gotoxy(69,8);
 cout<<k;
 k=192;
 if(n==7)
  k=200;
 gotoxy(65,22);
 cout<<k;
 k=217;
 if(n==7)
  k=188;
 gotoxy(69,22);
 cout<<k;
 k=180;
 if(n==7)
  k=185;
 gotoxy(69,10);
 cout<<k;
 k=195;
 if(n==7)
  k=204;
 gotoxy(65,10);
 cout<<k;
 k=180;
 if(n==7)
  k=185;
 gotoxy(69,20);
 cout<<k;
 k=195;
 if(n==7)
  k=204;
 gotoxy(65,20);
 cout<<k;
 k=197;
 gotoxy(67,9);
 cout<<k;
 k=196;
 gotoxy(67,21);
 cout<<k;

 for(y=19;y>=(19-(m[7]));y--){
   k=219;
   gotoxy(66,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[7]));y++){
   k=32;
   gotoxy(66,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////8

 //////////////////////////////////9
 gotoxy(72,7);
 cout<<"pea&corn";
 c[8]=(m[8]*0.2)+0.2;
 gotoxy(74,23);
 cout<<c[8]<<"$  ";
 for(x=73;x<=77;x++){
  k=196;
  if(n==8)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==8)
   k=186;
  gotoxy(73,y);
  cout<<k;
  gotoxy(77,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==8)
  k=201;
 gotoxy(73,8);
 cout<<k;
 k=191;
 if(n==8)
  k=187;
 gotoxy(77,8);
 cout<<k;
 k=192;
 if(n==8)
  k=200;
 gotoxy(73,22);
 cout<<k;
 k=217;
 if(n==8)
  k=188;
 gotoxy(77,22);
 cout<<k;
 k=180;
 if(n==8)
  k=185;
 gotoxy(77,10);
 cout<<k;
 k=195;
 if(n==8)
  k=204;
 gotoxy(73,10);
 cout<<k;
 k=180;
 if(n==8)
  k=185;
 gotoxy(77,20);
 cout<<k;
 k=195;
 if(n==8)
  k=204;
 gotoxy(73,20);
 cout<<k;
 k=197;
 gotoxy(75,9);
 cout<<k;
 k=196;
 gotoxy(75,21);
 cout<<k;

 for(y=19;y>=(19-(m[8]));y--){
   k=219;
   gotoxy(74,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[8]));y++){
   k=32;
   gotoxy(74,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////9

 cost=c[0]+c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9]+c[10]+c[11];
 gotoxy(35,30);
 cout<<"TOTAL COST: "<<cost<<"$  ";
 gotoxy(75,25);
 cout<<">>";
 gotoxy(75,26);
 cout<<">>";

  a=getch();
 switch(a){
  case 72:
   if(m[n]<=6)
    m[n]+=4;
   break;
  case 80:
   if(m[n]>=1)
    m[n]-=4;
   break;
  case 77:
    n++;
    if(n>=9){
     clrscr();
     chose2();
    }//end of if
   break;
  case 75:
   if(n>=1)
    n--;
   break;
  case 27:
   clrscr();
   gotoxy(20,15);
   cout<<"Do you realy want to exit(y/n)? ";
   a=getch();
   gotoxy(20,15);
   cout<<"                                ";
   if(a==121 || a==89)
    exit(1);
   break;
  case 13:
   clrscr();
   gotoxy(5,15);
   cout<<"Do you realy want to next level(y/n)?  ";
   a=getch();
   if(a==121 || a==89){
    gotoxy(5,17);
    cout<<"How many pizza like this do you want: ";
    cin.get();
    cin.get(g5,100);
    gotoxy(5,19);
    cout<<"Do you want other pizza's:            ";
    a=getch();
    if(a==121 || a==89){
     clrscr();
     chose1();
    }//end of if
    clrscr();
    paying();
   }//end of if
   clrscr();
   break;
  }//end of switch
 chose1();
}//end of void chose1





void chose2(){
 gotoxy(19,3);
 cout<<"\"Please chose what do you want to be in your pizza\"";

 ////////////////////////////////// 10
 gotoxy(8,7);
 cout<<"salami";
 c[9]=(m[9]*0.1)+0.5;
 gotoxy(10,23);
 cout<<c[9]<<"$  ";
 for(x=9;x<=13;x++){
  k=196;
  if(n==9)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==9)
   k=186;
  gotoxy(9,y);
  cout<<k;
  gotoxy(13,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==9)
  k=201;
 gotoxy(9,8);
 cout<<k;
 k=191;
 if(n==9)
  k=187;
 gotoxy(13,8);
 cout<<k;
 k=192;
 if(n==9)
  k=200;
 gotoxy(9,22);
 cout<<k;
 k=217;
 if(n==9)
  k=188;
 gotoxy(13,22);
 cout<<k;
 k=180;
 if(n==9)
  k=185;
 gotoxy(13,10);
 cout<<k;
 k=195;
 if(n==9)
  k=204;
 gotoxy(9,10);
 cout<<k;
 k=180;
 if(n==9)
  k=185;
 gotoxy(13,20);
 cout<<k;
 k=195;
 if(n==9)
  k=204;
 gotoxy(9,20);
 cout<<k;
 k=197;
 gotoxy(11,9);
 cout<<k;
 k=196;
 gotoxy(11,21);
 cout<<k;

  for(y=19;y>=(19-(m[9]));y--){
   k=219;
   gotoxy(10,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[9]));y++){
   k=32;
   gotoxy(10,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////10

 //////////////////////////////////11
 gotoxy(17,7);
 cout<<"onion";
 c[10]=(m[10]*0.02)+0.01;
 gotoxy(17,23);
 cout<<c[10]<<"$  ";
 for(x=18;x<=20;x++){
  k=196;
  if(n==10)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==10)
   k=186;
  gotoxy(17,y);
  cout<<k;
  gotoxy(21,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==10)
  k=201;
 gotoxy(17,8);
 cout<<k;
 k=191;
 if(n==10)
  k=187;
 gotoxy(21,8);
 cout<<k;
 k=192;
 if(n==10)
  k=200;
 gotoxy(17,22);
 cout<<k;
 k=217;
 if(n==10)
  k=188;
 gotoxy(21,22);
 cout<<k;
 k=180;
 if(n==10)
  k=185;
 gotoxy(21,10);
 cout<<k;
 k=195;
 if(n==10)
  k=204;
 gotoxy(17,10);
 cout<<k;
 k=180;
 if(n==10)
  k=185;
 gotoxy(21,20);
 cout<<k;
 k=195;
 if(n==10)
  k=204;
 gotoxy(17,20);
 cout<<k;
 k=197;
 gotoxy(19,9);
 cout<<k;
 k=196;
 gotoxy(19,21);
 cout<<k;

 for(y=19;y>=(19-(m[10]));y--){
   k=219;
   gotoxy(18,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[10]));y++){
   k=32;
   gotoxy(18,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////11

 //////////////////////////////////12
 gotoxy(24,7);
 cout<<"tomato";
 c[11]=(m[11]*0.05)+0.05;
 gotoxy(25,23);
 cout<<c[11]<<"$  ";
 for(x=25;x<=29;x++){
  k=196;
  if(n==11)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==11)
   k=186;
  gotoxy(25,y);
  cout<<k;
  gotoxy(29,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==11)
  k=201;
 gotoxy(25,8);
 cout<<k;
 k=191;
 if(n==11)
  k=187;
 gotoxy(29,8);
 cout<<k;
 k=192;
 if(n==11)
  k=200;
 gotoxy(25,22);
 cout<<k;
 k=217;
 if(n==11)
  k=188;
 gotoxy(29,22);
 cout<<k;
 k=180;
 if(n==11)
  k=185;
 gotoxy(29,10);
 cout<<k;
 k=195;
 if(n==11)
  k=204;
 gotoxy(25,10);
 cout<<k;
 k=180;
 if(n==11)
  k=185;
 gotoxy(29,20);
 cout<<k;
 k=195;
 if(n==11)
  k=204;
 gotoxy(25,20);
 cout<<k;
 k=197;
 gotoxy(27,9);
 cout<<k;
 k=196;
 gotoxy(27,21);
 cout<<k;

 for(y=19;y>=(19-(m[11]));y--){
   k=219;
   gotoxy(26,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[11]));y++){
   k=32;
   gotoxy(26,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////12

 //////////////////////////////////13
 gotoxy(32,7);
 cout<<"chili pepper";
 gotoxy(33,23);
 cout<<"FREE";
 for(x=33;x<=37;x++){
  k=196;
  if(n==12)
   k=205;
  gotoxy(x,8);
  cout<<k;
  gotoxy(x,10);
  cout<<k;
  gotoxy(x,20);
  cout<<k;
  gotoxy(x,22);
  cout<<k;
 }//end of for
 for(y=9;y<=21;y++){
  k=179;
  if(n==12)
   k=186;
  gotoxy(33,y);
  cout<<k;
  gotoxy(37,y);
  cout<<k;
 }//end of for
 k=218;
 if(n==12)
  k=201;
 gotoxy(33,8);
 cout<<k;
 k=191;
 if(n==12)
  k=187;
 gotoxy(37,8);
 cout<<k;
 k=192;
 if(n==12)
  k=200;
 gotoxy(33,22);
 cout<<k;
 k=217;
 if(n==12)
  k=188;
 gotoxy(37,22);
 cout<<k;
 k=180;
 if(n==12)
  k=185;
 gotoxy(37,10);
 cout<<k;
 k=195;
 if(n==12)
  k=204;
 gotoxy(33,10);
 cout<<k;
 k=180;
 if(n==12)
  k=185;
 gotoxy(37,20);
 cout<<k;
 k=195;
 if(n==12)
  k=204;
 gotoxy(33,20);
 cout<<k;
 k=197;
 gotoxy(35,9);
 cout<<k;
 k=196;
 gotoxy(35,21);
 cout<<k;

 for(y=19;y>=(19-(m[12]));y--){
   k=219;
   gotoxy(34,y);
   cout<<k<<k<<k;
  }//end of for
  for(y=11;y<=(18-(m[12]));y++){
   k=32;
   gotoxy(34,y);
   cout<<k<<k<<k;
  }//end of for
 //////////////////////////////////13


 cost=c[0]+c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9]+c[10]+c[11];
 gotoxy(35,30);
 cout<<"TOTAL COST: "<<cost<<"$  ";
 gotoxy(2,25);
 cout<<"<<";
 gotoxy(2,26);
 cout<<"<<";

  a=getch();
 switch(a){
  case 72:
   if(m[n]<=6)
    m[n]+=4;
   break;
  case 80:
   if(m[n]>=1)
    m[n]-=4;
   break;
  case 77:
   if(n<=11)
    n++;
   break;
  case 75:
    n--;
    if(n<=8){
     clrscr();
     chose1();
    }//end of if
   break;
  case 13:
   clrscr();
   gotoxy(5,15);
   cout<<"Do you realy want to next level(y/n)?  ";
   a=getch();
   if(a==121 || a==89){
    gotoxy(5,17);
    cout<<"How many pizza like this do you want: ";
    cin.get();
    cin.get(g5,100);
    gotoxy(5,19);
    cout<<"Do you want other pizza's:            ";
    a=getch();
    if(a==121 || a==89){
     clrscr();
     chose1();
    }//end of if
    clrscr();
    paying();
   }//end of if
   clrscr();
   break;
  case 27:
   clrscr();
   gotoxy(20,15);
   cout<<"Do you realy want to exit(y/n)? ";
   a=getch();
   gotoxy(20,15);
   cout<<"                                ";
   if(a==121 || a==89)
    exit(1);
   break;
 }//end of switch
 chose2();
}//end of void chose 2


void paying(){
 gotoxy(25,3);
 cout<<"\"Online paying for PIZZA KAPACK\"";
 gotoxy(5,8);
 cout<<"Whit with bank do you want to pay for it? ";
 gotoxy(5,10);
 cout<<"First name: ";
 gotoxy(5,12);
 cout<<"Last name:  ";
 gotoxy(5,14);
 cout<<"Adress:     ";
 gotoxy(47,8);
 cin.get();
 cin.get(g1,100);
 cin.get();
 gotoxy(20,10);
 cin.get(g2,100);
 cin.get();
 gotoxy(20,12);
 cin.get(g3,100);
 cin.get();
 gotoxy(20,14);
 cin.get(g4,100);
 clrscr();
 gotoxy(25,16);
 cout<<"Your meat will arrive soon. please wait...";
 getch();
 exit(1);
}//end of void paying
