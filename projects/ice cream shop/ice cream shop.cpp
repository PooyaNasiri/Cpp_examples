#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void icecreamshop();
void customer();
void setcost();
void buy();
void commercial();
void upgrade();

int m=0,i=15,s=100,c=5,r=1,u=30;

main(){
 cout<<"\n\n                           welcome to ice cream shop";
 getch();
 icecreamshop();
}//end of main


void icecreamshop(){
 int a,x,y;
 char z;
 clrscr();
 if((m<=90 && i<=0) || (m<=90 && c<=0)){
  gotoxy(35,15);
  cout<<"YOU LOSE";
  getch();
  exit(1);
 }//end of if

 gotoxy(3,42);
 cout<<"NEXT CUSTOMER  n      SET COST s      BUY ICECREAM  b      commercial  p\n\n  UPGRADE  u            EXIT  esc";
 gotoxy(7,17);
 cout<<"YOUR SHOP INFORMATION";
 gotoxy(6,20);
 cout<<"Your money: "<<m<<"$";
 gotoxy(6,22);
 cout<<"Your ice creams: "<<i;
 gotoxy(6,24);
 cout<<"Your cost: "<<s<<"$";
 gotoxy(6,26);
 cout<<"Your warehouse free space: "<<(u-i);
 gotoxy(6,28);
 cout<<"Customers: "<<c;
 for(x=4;x<=35;x++){
  z=196;
  gotoxy(x,15);
  cout<<z;
  gotoxy(x,19);
  cout<<z;
  gotoxy(x,21);
  cout<<z;
  gotoxy(x,23);
  cout<<z;
  gotoxy(x,25);
  cout<<z;
  gotoxy(x,27);
  cout<<z;
  gotoxy(x,29);
  cout<<z;
 }//end of for
 for(y=15;y<=29;y++){
  z=179;
  gotoxy(4,y);
  cout<<z;
  gotoxy(35,y);
  cout<<z;
 }//end of for
 z=218;
 gotoxy(4,15);
 cout<<z;
 z=191;
 gotoxy(35,15);
 cout<<z;
 z=192;
 gotoxy(4,29);
 cout<<z;
 z=217;
 gotoxy(35,29);
 cout<<z;
 while(1){
  a=getch();
  switch(a){
   case 110: customer();
   break;
   case 115: setcost();
   break;
   case 98:  buy();
   break;
   case 27:  exit(1);
   break;
   case 112:  commercial();
   break;
   case 117:  upgrade();
   break;
  }//end of switch
 }//end of while
}//end of void


void customer(){
 int a,I,p;
 if(c<=0){
  gotoxy(32,22);
  cout<<"You don,t have any customer";
  getch();
  icecreamshop();
 }//end of if
 gotoxy(3,42);
 cout<<"EXIT  esc             SELL  enter             DON'T SELL   any thing else               ";
 randomize();
 I=rand();
 I%=9;
 I+=1;
 gotoxy(40,20);
 cout<<"I want "<<I<<" icecream.";
 gotoxy(40,24);
 cout<<" *";
 gotoxy(40,25);
 cout<<"/|\\";
 gotoxy(40,26);
 cout<<"/ \\";

 if(I>i){
  gotoxy(3,42);
  cout<<"EXIT  esc                                     DON'T SELL   any thing else               ";
  gotoxy(32,22);
  cout<<"You dont have"<<I<<" icecream. and lost a customer.";
  c--;
  getch();
  icecreamshop();
 }//end of if
 if(s<=90){                                 //if price be lower than 90,  100%
  a=getch();
  switch(a){
   case 13:
    m+=(I*s);
    i-=I;
    icecreamshop();
   break;
   case 27: exit(1);
   break;
   default: icecreamshop();
  }//end of switch
 }//end of if
 if(s<=100 && s>=91){                       //if price be uper than 90 & lower than 100,  95%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=5){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 if(s<=110 && s>=101){                       //if price be uper than 100 & lower than 110,  75%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=25){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 if(s<=130 && s>=111){                       //if price be uper than 110 & lower than 130,  65%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=35){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 if(s<=160 && s>=131){                       //if price be uper than 130 & lower than 160,  50%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=50){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 if(s<=190 && s>=161){                       //if price be uper than 160 & lower than 190,  30%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=70){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 if(s<=250 && s>=191){                       //if price be uper than 190 & lower than 250,  15%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=85){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 if(s<=350 && s>=251){                       //if price be uper than 250 & lower than 350,  5%
  randomize;
  p=rand();
  p%=100;
  p++;
  if(p>=95){
   a=getch();
   switch(a){
    case 13:
     m+=(I*s);
     i-=I;
     icecreamshop();
    break;
    case 27: exit(1);
    break;
    default: icecreamshop();
   }//end of switch
  }//end of if
 }//end of if
 gotoxy(32,22);
 cout<<"YOUR PRICE IS VERY HIGH. AND LOST A CUSTOMER";
 c--;
 getch();
 icecreamshop();
}//end of customer


void setcost(){
 int a,S=100;
 while(1){
  clrscr();
  cout<<"\n\n\n\n    Your cost will be: "<<S;
  gotoxy(2,42);
  cout<<"EXIT esc     BACK  backspace     UP KEY  +cost     DUWN KEY  -cost     OK enter ";
  a=getch();
  switch(a){
   case 72: S++;
   break;
   case 80: S--;
   break;
   case 27: exit(1);
   break;
   case 8: icecreamshop();
   break;
   case 13: s=S; icecreamshop();
   break;
  }//end of switch
 }//end of while
}//end of set cost


void buy(){
 static int a,S,I=10;
 clrscr();
 if(r==0)
  goto a;
 randomize();
 S=rand();
 S%=30;
 S+=90;
 while(1){
  clrscr();
  a:
  gotoxy(5,8);
  cout<<"Your money:                 "<<m;
  gotoxy(5,10);
  cout<<"Price of every icecream:    "<<S;
  gotoxy(5,12);
  cout<<"Your icecream you will buy: "<<I;
  gotoxy(5,14);
  cout<<"Tutal cost is:              "<<I*S;
  gotoxy(3,42);
  cout<<"EXIT  esc            BACK  backspace              BUY  enter ";
  cout<<"\n\n  UP KEY  +icecreams          DUWN KEY  -icecreams";
  if((S*I)>=m){
   gotoxy(40,14);
   cout<<"YOU DONT HAVE ENOUGH MONEY";
  }//end of if
  if(I<=10){
   gotoxy(40,12);
   cout<<"MINIMAM NUMBER OF BUY";
  }//end of if
  a=getch();
  switch(a){
   case 72:
    if((S*I)>=m){
     gotoxy(40,14);
     cout<<"YOU DONT HAVE ENOUGH MONEY";
     goto a;
    }//end of if
    I++;
   break;
   case 80:
    if((S*I)>=m){
     gotoxy(40,14);
     cout<<"YOU DONT HAVE ENOUGH MONEY";
    }//end of if
    if(I<=10){
     gotoxy(40,12);
     cout<<"MINIMAM NUMBER OF BUY";
     goto a;
    }//end of if
    I--;
   break;
   case 27: exit(1);
   break;
   case 8: r=0; icecreamshop();
   break;
   case 13:
    if(((S*I)>=m) || (I<=10))
     goto a;
    else{
     i+=I;
     m-=(S*I);
     r=1;
     icecreamshop();
    }//end of else
   break;
  }//end of switch
 }//end of while
}//end of void buy

void commercial(){
 static int a,C=0;
 while(1){
  clrscr();
  if((C*500)>m){
   gotoxy(15,16);
   cout<<"You dont have enough money for that";
  }//end of if
  if(C<=0){
   gotoxy(15,18);
   cout<<"Your customer is uper then that";
  }//end of if
  gotoxy(10,6);
  cout<<"Your money:                             "<<m;
  gotoxy(10,8);
  cout<<"Your customers:                         "<<c;
  gotoxy(10,10);
  cout<<"Price of every commercial:              500$";
  gotoxy(10,12);
  cout<<"Your customers whit commercial will be: "<<(C+c);
  gotoxy(10,14);
  cout<<"Total cost:                             "<<(C*500);
  gotoxy(2,42);
  cout<<"EXIT esc     BACK  backspace     UP KEY  +cost     DUWN KEY  -cost     OK enter ";
  a=getch();
  switch(a){
   case 72:
    if((C*500)>m)
     commercial();
    C++;
   break;
   case 80:
    if(C<=0){
     gotoxy(15,18);
     cout<<"Your customer is uper then that";
     commercial();
    }//end of if
    C--;
   break;
   case 27: exit(1);
   break;
   case 8: icecreamshop();
   break;
   case 13:
    if((C*500)>m)
     commercial();
    c+=C;
    m-=(C*500);
    icecreamshop();
   break;
  }//end of switch
 }//end of while
}//end of void commercial



void upgrade(){
 static int a,U=50;
  clrscr();
  if(m<=49999){
   gotoxy(15,16);
   cout<<"You dont have enough money for that";
   getch();
   icecreamshop();
  }//end of if
  gotoxy(10,6);
  cout<<"Your money:                             "<<m;
  gotoxy(10,12);
  cout<<"Your warehouse whit upgrades will be: "<<(U+u);
  gotoxy(10,14);
  cout<<"Total cost:                           50000";
  gotoxy(2,42);
  cout<<"EXIT esc     BACK  backspace     OK enter ";
  a=getch();
  switch(a){
   case 27: exit(1);
   break;
   case 8: icecreamshop();
   break;
   case 13:
    u+=U;
    m-=50000;
    icecreamshop();
   break;
  }//end of switch
}//end of void upgrade
