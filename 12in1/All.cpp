#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void findmax();
void start();
void avrage();
void plus();
void areacircumference();
void circle();
void parallelogram();
void rectangular();
void square();
void trapezoid();
void triangle();
void ascii();
void multiple();
void calculator();
void codefinder();
void converter();
void game();
void testgame();
void fifagame();
void moveright();
void movedown();
void moveleft();
void moveup();
void start1();
void machin();
void sevensegment();
void timeconverter();
void stopwatch();
main(){
  start();
}//end of main

 //start void start
 void start(){
     int h,x,y;
     char a;
     clrscr();
     for(x=2;x<=78;x++){
      a=196;
      gotoxy(x,2);
      cout<<a;
      gotoxy(x,38);
      cout<<a;
      gotoxy(x,4);
      cout<<a;
      gotoxy(x,36);
      cout<<a;
     }//end of for
     for(y=2;y<=38;y++){
      a=179;
      gotoxy(2,y);
      cout<<a;
      gotoxy(78,y);
      cout<<a;
     }//end of for
     a=218;
     gotoxy(2,2);
     cout<<a;
     a=191;
     gotoxy(78,2);
     cout<<a;
     a=192;
     gotoxy(2,38);
     cout<<a;
     a=217;
     gotoxy(78,38);
     cout<<a;
     a=195;
     gotoxy(2,4);
     cout<<a;
     a=180;
     gotoxy(78,4);
     cout<<a;
     a=195;
     gotoxy(2,36);
     cout<<a;
     a=180;
     gotoxy(78,36);
     cout<<a;

     gotoxy(32,3);
     cout<<"*LIST OF PROGRAMS*";
     gotoxy(5,7);
     cout<<"1-find max-min";
     gotoxy(5,9);
     cout<<"2-avrage";
     gotoxy(5,11);
     cout<<"3-plus";
     gotoxy(5,13);
     cout<<"4-area & circumference";
     gotoxy(5,15);
     cout<<"5-ascii";
     gotoxy(5,17);
     cout<<"6-multiple";
     gotoxy(5,19);
     cout<<"7-calculator";
     gotoxy(5,21);
     cout<<"8-codefinder";
     gotoxy(5,23);
     cout<<"9-converter";
     gotoxy(5,25);
     cout<<"10-game";
     gotoxy(5,27);
     cout<<"11-test game";
     gotoxy(5,29);
     cout<<"12-fifa game";
     gotoxy(5,31);
     cout<<"13-machin";
     gotoxy(5,33);
     cout<<"14-sevensegment";
     gotoxy(5,35);
     cout<<"15-time-converter";
     gotoxy(30,7);
     cout<<"16-stopwatch";
     gotoxy(30,9);
     cout<<"17-exit";

     gotoxy(5,37);
     cout<<"group : dragon programer         !!!!   enter a number : ";
     cin>>h;
     switch(h){
      case 1:  findmax();
      case 2:  avrage();
      case 3:  plus();
      case 4:  areacircumference();
      case 5:  ascii();
      case 6:  multiple();
      case 7:  calculator();
      case 8:  codefinder();
      case 9:  converter();
      case 10: game();
      case 11: testgame();
      case 12: fifagame();
      case 13: machin();
      case 14: sevensegment();
      case 15: timeconverter();
      case 16: stopwatch();
      case 17: exit(1);
     }//end of switch
 }//end of void start
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////1
 //start void find maximam number
 void findmax(){
     a:
      float b,c,e=-100000000000000,g=100000000000000;
      clrscr();
      gotoxy(35,1);
      cout<<"welcome\n\n\n  this program can find maximam number fram 2-100 numbers. \"for exit to menu enter 1234\"";
    for(b=1;b<=100;b++){
      cout<<"\n\n\n Enter number "<<b<<" : ";
      cin>>c;
      if(c==1234){
       start();
      }//end of if
      e=e<c? c:e;
      g=c<g? c:g;
      cout<<"\n maximam number from those number is: "<<e<<"\n minimam number from those number is: "<<g;
      getch();
    }//end  of for
    goto a;
 }//end of void find maximam number

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////2
 //start void avrage
 void avrage(){
   a:
   float a,b,c=0,d;
    clrscr();
    gotoxy(35,1);
    cout<<"welcome\n\n\n  this program can avrage many numbers. \"for exit to menu enter 1234\"";
    for(b=1;b<=100;b++){
     cout<<"\n\n\n Enter number "<<b<<" : ";
     cin>>a;
     if(a==1234){
       start();
      }//end of if
     c+=a;
     d=c/b;
     cout<<"\n avrage of thos number is : "<<d;
     getch();
    }//end of for
    goto a;
 }//end of void avrage

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////3
 //start void plus
 void plus(){
    a:
    float a,b,c=0;
    clrscr();
    gotoxy(35,1);
    cout<<"welcome\n\n\n  this program can sigma many numbers. \"for exit to menu enter 1234\"";
    for(b=1;b<=100;b++){
     cout<<"\n\n\n Enter number "<<b<<" : ";
     cin>>a;
     if(a==1234){
       start();
     }//end of if
     c+=a;
     cout<<"\n\n sigma of thos number is : "<<c;
     getch();
    }//end of for
    goto a;
 }//end of void avrage

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////4
 //start area & circumference of some diagrams
 void areacircumference(){
  a:
  int h;
  cin>>h;
  if(h==1234){
   start();
  }//end of if
  switch(h){
    case 1: circle();
    case 2: parallelogram();
    case 3: rectangular();
    case 4: square();
    case 5: trapezoid();
    case 6: triangle();
    case 7: start();
  }//end of sweitch
  getch();
  goto a;
 }//end of area & circumference of some diagrams

  //start circle
  void circle(){
  float s,p,a;
  float const pi=3.14;
   gotoxy(30,1);
   cout<<"welcome\n\n  this program can computation area & circumferece of circle.\"for exit to menu enter 1234\"\n\n ENTER A RADIUS OF CIRCLE: ";
     cin>>a;
     if(a==1234){
       start();
     }//end of if
     s=a*a*pi;
     p=a*2*pi;
     cout<<"area(s)="<<s<<"       circumference(P)="<<p;
   }//end of circle

   //start parallelogram
  void parallelogram(){
  float s,p,a,b,h;
    gotoxy(30,1);
    cout<<"welcome\n\n  this program can computation area & circumferece of trapezoid.\"for exit to menu enter 1234\"\n\n ENTER HEIGHT & RADIUS & UNDERSIDE LINE: ";
    cin>>a>>b>>h;
     if(a==1234){
      start();
     }//end of if
    s=a*h;
    p=(a+b)*2;
    cout<<"area(S)="<<s<<"   circumference(P)="<<p;
    getch();
   }//end of parallelogram

  //start rectangular
  void rectangular(){
   float a,b,p,s;
   gotoxy(30,1);
   cout<<"welcome\n\n  this program can computation area & circumference of rectangular.\"for exit to menu enter 1234\"\n\n ENTER TO RADIUS OF RECTANGULAR : ";
   cin>>a>>b;
   p=(a+b)*2;
   s=a*b;
   cout<<"area(S)="<<s<<"          circumference(P)="<<p;
   getch();
  }//end of rectangular

  //start square
  void square(){
   float a,p,s;
   gotoxy(30,1);
   cout<<"welcome\n\n  this program can computation area & circumference of square.\"for exit to menu enter 1234\"\n\n ENTER A RADIUS OF SQUARE : ";
   cin>>a;
   p=a*4;
   s=a*a;
   cout<<"area(S)="<<s<<"          circumference(P)="<<p;
   getch();
  }//end of square

  //start trapezoid
  void trapezoid(){
   float s,p,a,b,c,h;
   gotoxy(30,1);
   cout<<"welcome\n\n  this program can computation area & circumferece of trapezoid.\"for exit to menu enter 1234\"\n\n ENTER UP RADIUS & LEFT OR RIGHT RADIUS & UNDERSIDE LINE & HEIGHT  : ";
   cin>>b>>c>>a>>h;
   s=(a*h)/2;
   p=(a+b)+(c*2);
   cout<<"area(S)="<<s<<"   circumference(P)="<<p;
  }//end of trapezoid

  //start triangle
  void triangle(){
   a:
   float a,h,c1,c2,c3,p,s;
   gotoxy(30,1);
   cout<<"welcome\n\n  this program can computation area & circumference of triangle.\"for exit to menu enter 1234\"\n\n ENTER TREE RADIUS & HEIGHT & UNDERSIDE OF TRIANGLE : ";
   cin>>c1>>c2>>c3>>h>>a;
   p=c1+c2+c3;
   s=(a*h)/2;
   cout<<"area(S)="<<s<<"          circumference(P)="<<p;
   getch();
   goto a;
  }//end of triangle


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////5
 void ascii(){
  int a;
  char b;
   for(a=0;a<=255;a++){
    b=a;
    cout<<a<<" = "<<b<<"     ";
    if(a%5==0)
     cout<<"\n";
    }//end of for
   getch();
   start();
 }//end of ascii


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////6
 void multiple(){
  a:
  int a,b,d,e;
  b=0;
  clrscr();
  gotoxy(30,1);
  cout<<"welcome\n\n  tihs program calculate the multiple of <a> between <b> and <c>.\"for exit to menu enter a=1234\"\n\n enter the number (a b c): ";
  cin>>e>>a>>d;
  if(e==1234){
   start();
  }//end of if
  cout<<"\n\n";
  while(a<=d){
   if(a%e==0){
    b+=a;
   }//end of if
   a++;
  }//end of while
  cout<<b;
  getch();
  start();
  goto a;
 }//end of multiple


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7
 void calculator(){
  a:
  long double a,b;
   char d,e=251,f=179,g=218,h=192,i=191,j=217,k=196,l=251;
      cout<<"\n\n\t\"for exit to menu enter a=1234\"";
      gotoxy(24,7);
      cout<<g<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<i;
      gotoxy(24,8);
      cout<<f<<"\t\t\t\t "<<f<<"a+b"<<f;
      gotoxy(24,9);
      cout<<f<<"\t\t\t\t "<<f<<"a-b"<<f;
      gotoxy(24,10);
      cout<<f<<"\t\t\t\t "<<f<<"a*b"<<f;
      gotoxy(24,11);
      cout<<f<<"\t\t\t\t "<<f<<"a/b"<<f;
      gotoxy(24,12);
      cout<<f<<"\t\t\t\t "<<f<<"a^b"<<f;
      gotoxy(24,13);
      cout<<f<<"\t\t\t\t "<<f<<"a"<<l<<"b"<<f;
      gotoxy(24,14);
      cout<<h<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<k<<j;
      cout<<e;
       gotoxy(25,8);
       cin>>a>>d>>b;
       if(a==1234){
        start();
       }//end of if
       gotoxy(25,10);
       switch(d){
        case '+':
         cout<<a<<"+"<<b<<"="<<(a+b);
         break;
        case '-':
         cout<<a<<"-"<<b<<"="<<(a-b);
         break;
        case '*':
         cout<<a<<"*"<<b<<"="<<(a*b);
         break;
        case '/':
         cout<<a<<"/"<<b<<"="<<(a/b);
         break;
        case '^':
         cout<<a<<"^"<<b<<"="<<(pow(a,b));
         break;
        case '$':
         cout<<e<<b<<"="<<(sqrt(b));
         break;
        default:
         cout<<"this equation isn't act basic of mathematics.";
       }//end o switch
       getch();
       start();
       goto a;
 }//end of calculator

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////8
 void codefinder(){
  a:
  clrscr();
  unsigned int a,b;
  cout<<"\n\n  \"for exit to menu enter 1234\"\n please enter your code : ";
  cin>>a;
  if(a==1234){
   start();
  }//end of if
  for(b=0;b<=1000000000;b++)
   if(b==a)
    break;
   cout<<"your code is :           "<<b;
   getch();
   goto a;
 }//end of code finder



  void converter(){
   float c, meter, inch, cm, yard, mile, km, hectare, foot, liter, milliliter, celsius, fahrenheit, kelvin, millimeter, micron, kilogram, pound, ton, ounce, gram;
   char a, b;
         	 clrscr();
            				gotoxy(35,3);
            				cout<<"welcome";
                   		  gotoxy(5,7);
                   		  cout<<"this program can convert 1-area  &  2-volume  &  3-temperature  &"<<endl<<endl<<"\t"<<"\t"<<"\t"<<"4-distance &  5-weight. "<<endl<<endl<<endl<<endl;
                             cout<<"\"for exit enter 1234\"   ENTER A NUMBER OF UNIVALENT:  ";
   								  cin>>a;
                             if(a=1234){
                              start();
                             }//end of if

                              if(a=='1'){
                              clrscr();
                              cout<<endl;
                              cout<<"     1-square foot &  2-square meter &  3-square inch &  4-square cm &"<<endl<<endl<<"     5-square yard& 6-square mile &  7-square km &  8-hectare. "<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF AREA UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A SQUARE FOOT :  ";
                                 cin>>c;
                                  meter=0.093*c;
                                  inch=144*c;
                                  cm=929.034*c;
                                  yard=0.111*c;
                                  mile=0.00000003587*c;
                                  km=0.000000092903*c;
                                  hectare=929.034*c;
                                 cout<<"square meter = "<<meter<<endl<<" square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A SQUARE METER :  ";
                                 cin>>c;
                                  foot=10.764*c;
                                  inch=1.549997*c;
                                  cm=10000*c;
                                  yard=1.196*c;
                                  mile=0.3861*c;
                                  km=0.0000001*c;
                                  hectare=0.00001*c;
                                 cout<<"square foot = "<<foot<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A SQUARE INCH :  ";
                                 cin>>c;
                                  foot=0.006944444*c;
                                  meter=0.000645163*c;
                                  cm=6.4516264*c;
                                  yard=0.111*c;
                                  mile=0.00000000025*c;
                                  km=0.00000000065*c;
                                  hectare=0.0000000645163*c;
                                 cout<<"square meter = "<<meter<<endl<<"square foot = "<<foot<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A SQUARE CM :  ";
                                 cin>>c;
                                  foot=0.001*c;
                                  meter=0.0001*c;
                                  inch=0.1549997*c;
                                  yard=0.00012*c;
                                  mile=0.00000000004*c;
                                  km=0.00000001*c;
                                  hectare=929.034*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square  foot = "<<foot<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A SQUARE YARD :  ";
                                 cin>>c;
                                  foot=90000000*c;
                                  meter=0.836*c;
                                  inch=1296*c;
                                  cm=8361.308*c;
                                  mile=0.000000323*c;
                                  km=0.000000836*c;
                                  hectare=0.0000836*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square foot = "<<foot<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='6'){
                                 cout<<"ENTER A SQUARE MILE :  ";
                                 cin>>c;
                                  foot=27878400*c;
                                  meter=2589998.7*c;
                                  inch=401448960000*c;
                                  cm=2589998700000*c;
                                  yard=3097600*c;
                                  km=2.59*c;
                                  hectare=259*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square foot = "<<foot<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='7'){
                                 cout<<"ENTER A SQUARE KM :  ";
                                 cin>>c;
                                  foot=10763866*c;
                                  meter=1000000*c;
                                  inch=154999680000*c;
                                  cm=10000000000*c;
                                  yard=1195985.1*c;
                                  mile=0.386*c;
                                  hectare=100*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square foot = "<<foot<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='8'){
                                 cout<<"ENTER A HECTAR :  ";
                                 cin>>c;
                                  foot=107638.66*c;
                                  meter=10000*c;
                                  inch=15499968*c;
                                  cm=100000000*c;
                                  yard=1195.985*c;
                                  mile=0.003861*c;
                                  km=0.01*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"square foot = "<<foot<<endl<<endl;
                              	}//end of if
                              }//end of if


                              if(a=='2'){
                              clrscr();
                              cout<<endl<<endl;
                              cout<<"           1-cube foot &  2-cube meter &  3-cube inch &  4-cube cm & "<<endl<<endl<<"           5-cube yard &  6-liter &  7-milliliter. "<<endl<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF VOLUME UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A CUBE FOOT :  ";
                                 cin>>c;
                                  meter=0.028*c;
                                  inch=1728.001*c;
                                  cm=28316.85*c;
                                  yard=0.037*c;
                                  liter=28.317*c;
                                  milliliter=28316.85*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A CUBE METER :  ";
                                 cin>>c;
                                  foot=35.315*c;
                                  inch=61023.759*c;
                                  cm=1000000*c;
                                  yard=1.308*c;
                                  liter=1000*c;
                                  milliliter=1000000*c;
                                 cout<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A CUBE INCH :  ";
                                 cin>>c;
                                  foot=0.001*c;
                                  meter=0.00001639*c;
                                  cm=16.387*c;
                                  yard=0.00002143*c;
                                  liter=0.016*c;
                                  milliliter=16.387*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A CUBE CM :  ";
                                 cin>>c;
                                  foot=0.00003531*c;
                                  meter=0.000001*c;
                                  inch=0.061*c;
                                  yard=0.00000131*c;
                                  liter=0.001*c;
                                  milliliter=1*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A CUBE YARD :  ";
                                 cin>>c;
                                  foot=26.999998*c;
                                  meter=0.7645549*c;
                                  inch=46656.014*c;
                                  cm=764554.9*c;
                                  liter=764.5549*c;
                                  milliliter=764554.9*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='6'){
                                 cout<<"ENTER A LITER :  ";
                                 cin>>c;
                                  foot=0.03531466*c;
                                  meter=0.001*c;
                                  inch=61.023759*c;
                                  cm=1000*c;
                                  yard=0.001308*c;
                                  milliliter=1000*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='7'){
                                 cout<<"ENTER A MILLILITER :  ";
                                 cin>>c;
                                  foot=0.000035315*c;
                                  meter=0.000001*c;
                                  inch=0.061024*c;
                                  cm=1*c;
                                  yard=0.000001308*c;
                                  liter=0.001*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<endl;
                                 }//end of if
                             }//end of if



                             if(a=='3'){
                              clrscr();
                              cout<<endl;
                              cout<<"1-celsius(cetigrade) &  2-fahrenheit &  3-kelvin. "<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF TEMPERATURE UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A CELSIUS(CENTIGRADE) :  ";
                                 cin>>c;
                                  kelvin=273.15+c;
                                  fahrenheit=1.8*c+32;
                                 cout<<"fahrenheit= "<<fahrenheit<<endl<<"kelvin= "<<kelvin<<endl<<endl;
                                 }//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A FAHRENHEIT :  ";
                                 cin>>c;
                                  kelvin=0.556*c+255.372;
                                  celsius=0.556*c-17.778;
                                 cout<<"celsius(cetigrade)= "<<celsius<<endl<<"kelvin= "<<kelvin<<endl<<endl;
                                 }//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A KELVIN :  ";
                                 cin>>c;
                                  celsius=-273.15+c;
                                  fahrenheit=1.8*c-459.67;
                                 cout<<"celsius(cetigrade)= "<<celsius<<endl<<"fahrenheit= "<<fahrenheit<<endl<<endl;
                                 }//end of if
                             }//end of if




                             if(a=='4'){
                              clrscr();
                              cout<<endl;
                              cout<<"               1-foot &  2-meter &  3-inch &  4-cm &  5-yard&"<<endl<<endl<<"               6-mile &  7-km &  8-millimeter & 9-micron."<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF DISTANCE UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A FOOT :  ";
                                 cin>>c;
                                  meter=0.3048*c;
                                  inch=12*c;
                                  cm=30.48*c;
                                  yard=0.3333*c;
                                  mile=0.000189394*c;
                                  km=0.0003048*c;
                                  millimeter=304.8*c;
                                  micron=0.0003048*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A METER :  ";
                                 cin>>c;
                                  foot=3.281*c;
                                  inch=39.37*c;
                                  cm=100*c;
                                  yard=1.094*c;
                                  mile=0.001*c;
                                  km=0.001*c;
                                  millimeter=1000*c;
                                  micron=1000000*c;
                                 cout<<"foot = "<<foot<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='3'){
                                 cout<<"ENTER AN INCH :  ";
                                 cin>>c;
                                  foot=0.083333*c;
                                  meter=0.0254*c;
                                  cm=2.54*c;
                                  yard=0.0278*c;
                                  mile=0.00001578283*c;
                                  km=0.0000254*c;
                                  millimeter=25.4*c;
                                  micron=25,400*c;
                                 cout<<"meter = "<<meter<<endl<<"foot = "<<foot<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A CM :  ";
                                 cin>>c;
                                  foot=0.03333*c;
                                  meter=0.01*c;
                                  inch=0.394*c;
                                  yard=0.01093613*c;
                                  mile=0.000006214*c;
                                  km=0.00001*c;
                                  millimeter=10*c;
                                  micron=10000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"foot = "<<foot<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A YARD :  ";
                                 cin>>c;
                                  foot=3*c;
                                  meter=0.9144*c;
                                  inch=36*c;
                                  cm=91.44*c;
                                  mile=0.001*c;
                                  km=0.001*c;
                                  millimeter=914.4*c;
                                  micron=914400*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"foot = "<<foot<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='6'){
                                 cout<<"ENTER A MILE :  ";
                                 cin>>c;
                                  foot=5280*c;
                                  meter=1609.344*c;
                                  inch=63360*c;
                                  cm=160934.4*c;
                                  yard=160934.4*c;
                                  km=1.609*c;
                                  millimeter=1609344*c;
                                  micron=1609344000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"foot = "<<foot<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='7'){
                                 cout<<"ENTER A KM :  ";
                                 cin>>c;
                                  foot=3280.84*c;
                                  meter=1000*c;
                                  inch=39370.079*c;
                                  cm=100000*c;
                                  yard=1093.613*c;
                                  mile=0.621*c;
                                  millimeter=1000000*c;
                                  micron=1000000000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"foot = "<<foot<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                if(b=='8'){
                                 cout<<"ENTER A MILIMETER :  ";
                                 cin>>c;
                                  foot=0.0032808*c;
                                  meter=0.001*c;
                                  inch=0.03937008*c;
                                  cm=0.1*c;
                                  yard=0.001*c;
                                  mile=0.000001*c;
                                  km=0.000001*c;
                                  micron=1000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"foot = "<<foot<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='9'){
                                 cout<<"ENTER A MICRIN :  ";
                                 cin>>c;
                                  foot=0.0000032808*c;
                                  meter=0.000001*c;
                                  inch=0.00003937008*c;
                                  cm=0.0001*c;
                                  yard=0.000001*c;
                                  mile=0.000000001*c;
                                  km=0.000000001*c;
                                  millimeter=0.001*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"foot = "<<foot<<endl<<"millimeter = "<<millimeter<<endl<<endl;
                              	}//end of if
                              }//end of if





                              if(a=='5'){
                              clrscr();
                              cout<<endl;
                              cout<<"          1-gram &  2-kilogram &  3-pound &  4-ton &  5-ounce. "<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF WEIGHT UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A GRAM :  ";
                                 cin>>c;
                                  kilogram=0.001*c;
                                  pound=0.0022046226*c;
                                  ton=0.000001*c;
                                  ounce=0.035273962*c;
                                 cout<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A KIKLOGRAM :  ";
                                 cin>>c;
                                  gram=1000*c;
                                  pound=2.2046226*c;
                                  ton=0.001*c;
                                  ounce=35.273962*c;
                                 cout<<"gram = "<<gram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A POUND :  ";
                                 cin>>c;
                                  gram=453.59237*c;
                                  kilogram=0.45359237*c;
                                  ton=0.00045359237*c;
                                  ounce=16*c;
                                 cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A TON :  ";
                                 cin>>c;
                                  gram=1000000*c;
                                  kilogram=1000*c;
                                  pound=2204.6226*c;
                                  ounce=35273.962*c;
                                 cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A OUNCE :  ";
                                 cin>>c;
                                  gram=28.349523*c;
                                  kilogram=0.028349523*c;
                                  pound=0.0625*c;
                                  ton=0.000028349523*c;
                                 cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<endl;
                                 }//end of if
                             }//end of if


   getch();
  }//end of void converter




 void game(){
    int b,m,n,o,p,q,r,v,w,x,y;
  char a,c,d,e,f,g,h,i,j,k,l,s,t,ans='y';
  randomize();
  a=205;
  c=186;
  d=201;
  e=187;
  f=200;
  g=188;
  h=204;
  i=185;
  j=124;
  k=45;
  l=177;
  x=71;
  y=37;
  v=73;
  w=37;
  s=175;
  t=174;

 while(ans=='y'){
  clrscr();
   gotoxy(35,2);
   cout<<"welcome";
    cout<<"\n\n\n if you want playing game by one player enter (1) or you want playing game by \n\ntwo players enter (2):  ";
    cin>>r;

  z:
  clrscr();
  //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

  //body
   gotoxy(x,y);
  cout<<"a";

   gotoxy(v,w);
  cout<<"b";
  //endof body









    //////////////////////////////////////////////////////////////////one player



     if(r==1){

     //move1

     gotoxy(35,42);
     cout<<"playar a press any key to move";
     getch();
     gotoxy(35,42);
     cout<<"                              ";
     g:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for


   for(n=1;n<=m;n++){
    b:
   //harekat be chap
    if(y==37 || y==27 || y==17 || y==7){
      x-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto b;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if



    //harekat be rast

    if(y==32 || y==22 || y==12){
      x+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    ///finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir


   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto b;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
   if(m==6){
    gotoxy(7,42);
    cout<<"((playar a obtain a bonus)) playar {a} press any key to move";
    getch();
    goto g;
   }//end of if









   //move2

    h:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for

    for(n=1;n<=m;n++){
     c:
    //harekat be chap

    if(w==37 || w==27 || w==17 || w==7){
      v-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

   //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto c;
    }//end of if

   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if


    //harekat be rast

    if(w==32 || w==22 || w==12){
      v+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

   //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto c;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
  }//end of if
   if(m==6)
    goto h;





   //////////////////////////////////////////////////////////////////two player



     if(r==2){

     //move1

     gotoxy(35,42);
     cout<<"playar a press any key to move";
     getch();
     gotoxy(35,42);
     cout<<"                              ";
     i:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for


   for(n=1;n<=m;n++){
    d:
   //harekat be chap
    if(y==37 || y==27 || y==17 || y==7){
      x-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto d;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if



    //harekat be rast

    if(y==32 || y==22 || y==12){
      x+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir


   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto d;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
   if(m==6){
    gotoxy(7,42);
    cout<<"((playar a obtain a bonus)) playar {a} press any key to move";
    getch();
    goto i;
   }//end of if









   //move2

    gotoxy(35,42);
    cout<<"playar b press any key to move";
    getch();
    gotoxy(35,42);
    cout<<"                              ";
    j:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for

    for(n=1;n<=m;n++){
     e:
    //harekat be chap

    if(w==37 || w==27 || w==17 || w==7){
      v-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

   //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish
                  

  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    if(p!=0){
     goto e;
    }//end of if

   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if


    //harekat be rast

    if(w==32 || w==22 || w==12){
      v+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

  //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      getch();
      goto f;
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto e;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
   if(m==6){
    gotoxy(7,42);
    cout<<"((playar b obtain a bonus)) playar {b} press any key to move";
    getch();
    goto j;
   }//end of if
  }//end of if
      goto z;
      f:
    cout<<"\n\n\n  do you want to continue(y/n)?  ";
    cin>>ans;
    cout<<endl;
  }//end of while
    clrscr();
    gotoxy(21,5);
    cout<<"thank you for use this game"<<endl<<"                          press any key to exit";
    getch();
 }//end of void game


  void testgame(){
     int a, b, c, d, e, f;

   /*start level 1*/
    a:
    clrscr();
     gotoxy(35,10);
     cout<<"level 1";
    gotoxy(29,11);
    cout<<"press any key to star";
     getch();
     clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=4;
    e+=1;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<5000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<20000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    cin>>f;
    if(f==e){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
     getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     goto a;
    }//end of else

    /*end level 1*/





    /*start level 2*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 2";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=5;
    e+=5;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<5000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<25000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    cin>>f;
    if(f==e){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
     getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     goto a;
    }//end of else

    /*end level 2*/




    /*start level 3*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 3";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=10;
    e+=10;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<10000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<35000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    cin>>f;
    if(f==e){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
      getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     goto a;
    }//end of else

    /*end level 3*/




   /*start level 4*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 4";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=10;
    e+=20;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<10000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<40000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    cin>>f;
    if(f==e){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
      getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     goto a;
    }//end of else

    /*end level 4*/




    /*start level 5*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 5";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=10;
    e+=30;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<28000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<50000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    cin>>f;
    if(f==e){
     goto b;
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     goto a;
    }//end of else

    /*end level 5*/

    b:
    clrscr();
    gotoxy(35,10);
    cout<<"you win";
    for(b=0;b<20000;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<500000;d++){
       cout<<"";
      }//end of for
    }//end of for

   getch();
  }//end of void test game


  void fifagame(){
     int a, b, c, d, e, f, g, h, i, x, y, w;
     clrscr();
          gotoxy(27,10);
      	 cout<<"PRESS ANY KEY TO START THIS MATCH";
          getch();
             a=0;
             b=0;                              
             b:
             c=40;
             d=23;
             e:
             x=c;
             y=d;
             a:
             g=1000000;
            if((c==x&&d==y) || (c==(x+4)&&d==y) || (c==(x+2)&&d==y) || (c==(x+2)&&d==(y+1))){
             clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n\n\n";
             cout<<" num 1= move left & down         num 2= move down          num 0= short shot   \n";
             cout<<" num 3= move right & down        num 4= move left          num 10= long shot   \n";
             cout<<" num 7= move left & up           num 6= move right                             \n";
             cout<<" num 9= move right & up          num 8= move up                                \n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
              gotoxy(40,23);
              cin>>w;

              //move right
             if(w==6){
              if(d==(y+1)){
               goto c;
              }//end of if
              else{
               x+=1;
               c=(x+4);
               }//end of else
             }//end of if

             //move left
             if(w==4){
             if(d==(y+1)){
               goto d;
              }//end of if
              else{
               x-=1;
               c=x;
              }//end of else
             }//end of if

             //mpve up
             if(w==8){
              if(d==(y+1)){
               d-=1;
              }//end of if
               y-=1;
               d-=1;
              if(c==(x+4)){
                c-=2;
              }//end of if
              if(c==x){
                c+=2;
              }//end of if
             }//end of if

             //move down
             if(w==2){
               y+=1;
               d+=2;
              if(c==(x+4)){
                x+=2;
              }//end of if
              if(c==x){
                x-=2;
              }//end of if
             }//end of if

             //move up & right
             if(w==9){
              if(d==(y+1)){
               d-=1;
              }//end of if
              if(c==x){
               c+=5;
               d-=1;
               x+=1;
               y-=1;
              }//end of if
              if(c==x+2){
               c+=3;
               d-=1;
               x+=1;
               y-=1;
              }//end of if
              else{
               y-=1;
               d-=1;
               x+=1;
               c+=1;
              }//end of else
             }//end of if

             //move up & left
             if(w==7){
              if(d==(y+1)){
               d-=1;
              }//end of if
              if(c==(x+4)){
               c-=5;
               d-=1;
               x-=1;
               y-=1;
              }//end of if
              if(c==x+2){
               c-=3;
               d-=1;
               x-=1;
               y-=1;
              }//end of if
              else{
               y-=1;
               d-=1;
               x-=1;
               c-=1;
              }//end of else
             }//end of if

             //move down & left
             if(w==1){
              if(c==(x+4)){
               c-=5;
               d+=1;
               x-=1;
               y+=1;
              }//end of if
              if(c==x+2){
               c-=3;
               if(d==y){
                d+=1;
               }//end of if
               x-=1;
               y+=1;
              }//end of if
              else{
               y+=1;
               d+=1;
               x-=1;
               c-=1;
              }//end of else
             }//end of if

             //move down & right
             if(w==3){
              if(c==x){
               c+=5;
               y+=1;
               d+=1;
               x+=1;
              }//end of if
              if(c==x+2){
               c+=3;
               if(d==y){
                d+=1;
               }//end of if
               x+=1;
               y+=1;
              }//end of if
              else{
               y+=1;
               d+=1;
               x+=1;
               c+=1;
              }//end of else
             }//end of if

             //out
             if(y<5 || y>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
               getch();
               goto e;
             }//end of if

             //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

              //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if


          /*short shoot*/
          if(w==0){

             //shoot to right
           if(c==(x+4)){
            for(e=0;e<20;e++){
               c+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";


               //right goaler
               if(d<=23 && d>=21){
                if(c==76){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=20-e;
                 for(h=0;h<i;h++){
               c-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if

               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

               //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of if
           }//end of if

           //shoot to left
            if(c==x){
             for(e=0;e<20;e++){
               c-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for

               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";

               //left goaler
               if(d<=23 && d>=21){
                if(c==5){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=20-e;
                 for(h=0;h<i;h++){
               c+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if

               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

             //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of for
           }//end of if


           //shoot to up
           if(c==(x+2)&&(y==d)){
            for(e=0;e<20;e++){
               d-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if



           //shoot to down
           if((c==(x+2))&&(d==(y+1))){
            for(e=0;e<20;e++){
               d+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if
          }//end of if







          /*long shoot*/

          if(w==10){
              g=600000;

             //shoot to right
           if(c==(x+4)){
            for(e=0;e<35;e++){
               c+=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";

               //right goaler
               if(d<=23 && d>=21){
                if(c==76){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=35-e;
                 for(h=0;h<i;h++){
               c-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if


               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

               //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of for
           }//end of if


            //shoot to left
            if(c==x){
             for(e=0;e<35;e++){
               c-=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for

               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";

               //left goaler
               if(d<=23 && d>=21){
                if(c==5){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=35-e;
                 for(h=0;h<i;h++){
               c+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if


               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

             //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of for
           }//end of if



          //shoot to up
           if(c==(x+2)&&(y==d)){
            for(e=0;e<35;e++){
               d-=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if

           //shoot to down
           if((c==(x+2))&&(d==(y+1))){
            for(e=0;e<35;e++){
               d+=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if
          }//end of if
         }//end of if




             else{
              clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
              gotoxy(40,23);
              cin>>w;

              //move right
              c:
             if(w==6){
               x+=1;
             }//end of if

             //move left
             d:
             if(w==4){
               x-=1;
             }//end of if

             //mpve up
             if(w==8){
               y-=1;
             }//end of if

             //move down
             if(w==2){
               y+=1;
             }//end of if

             //move up & right
             if(w==9){
               y-=1;
               x+=1;
             }//end of if

             //move up & left
             if(w==7){
               y-=1;
               x-=1;
             }//end of if

             //move down & left
             if(w==1){
               y+=1;
               x-=1;
             }//end of if

             //move down & right
             if(w==3){
               y+=1;
               x+=1;
             }//end of if
         }//end of else
             goto a;
             f:
              if(d<20 && c<4){
               d=5;
               c=5;
               x=c-4;
               y=d;
              }//end of if
              if(d>25 && c<4){
               d=40;
               c=5;
               x=c-4;
               y=d;
              }//end of if
              if(d<20 && c>70){
               d=5;
               c=77;
               x=c;
               y=d;
              }//end of if
              if(d>25 && c>70){
               d=40;
               c=77;
               x=c;
               y=d;
              }//end of if
             goto a;
     }//end of void fifagame


  int  n,p=0,q,s,t=0,u=10000000,v=0,w=0,x,y,z;
  char o,r;


    ////////////////////////MAIN
     void machin(){
      clrscr();
      cout<<"\n\n  do you want to play this Race(y/n)? ";
      cin>>o;
      if(o!='y'){
       clrscr();
       gotoxy(21,5);
       cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
       getch();
       exit(1);
      }//end of if
      cout<<"\n\n   please enter the lap : ";
      cin>>s;
      cout<<"\n\n   please enter the fuel : ";
      cin>>q;
      clrscr();
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(2,2);
      cout<<"->";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : "<<v<<" "<<"km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,26);
      cout<<"gear    : 0";
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      getch();
      start1();
    }///////////////////////end of machin

    //////////////////////// start1
    void start1(){
     for(x=2;x<=75;x++){
      w++;
      p++;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       machin();
      }//end of if
      v+=2;
      clrscr();
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litr   WARNING";
      }//end of if
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(x,2);
      cout<<"->";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : "<<v<<" "<<"km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      if(0<v && v<25){
       gotoxy(30,26);
       cout<<"gear    : 1";
      }//end of if
      if(25<v && v<49){
       gotoxy(30,26);
       cout<<"gear    : 2";
      }//end of if
      if(49<v && v<73){
       gotoxy(30,26);
       cout<<"gear    : 3";
      }//end of if
      if(73<v && v<97){
       gotoxy(30,26);
       cout<<"gear    : 4";
      }//end of if
      if(97<v && v<116){
       gotoxy(30,26);
       cout<<"gear    : 5";
      }//end of if
      if(116<v && v<150){
       gotoxy(30,26);
       cout<<"gear    : 6";
      }//end of if
      u-=100000;
       for(z=0;z<=u;z++)
        cout<<"";
      }//end of for
      movedown();
    }//////////////////end of start1

    //////////////////////// moveright
    void moveright(){
     t+=1;
     if(t==s){
      clrscr();
      gotoxy(25,5);
      cout<<"********** END **********";
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(2,2);
      cout<<"->";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : 0 km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,26);
      cout<<"gear    : 0";
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      getch();
      machin();
     }//end of if
     for(x=2;x<=75;x++){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       machin();
      }//end of if
      clrscr();
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(x,2);
      cout<<"->";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : "<<v<<" "<<"km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,26);
      cout<<"gear    : 6";
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      for(z=0;z<=1000000;z++)
       cout<<"";
      }//end of for
      movedown();
    }//////////////////end of moveright

    ////////////////////////main
    void movedown(){
     for(y=2;y<=45;y++){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       machin();
      }//end of if
      clrscr();
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(75,y);
      cout<<"|";
      gotoxy(75,y+1);
      cout<<"v";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : "<<v<<" "<<"km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,26);
      cout<<"gear    : 6";
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      for(z=0;z<=1000000;z++)
       cout<<"";
      }//end of for
      moveleft();
    }//////////////////end of movedown

    //////////////////////// moveleft
    void moveleft(){
     for(x=75;x>=2;x--){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       machin();
      }//end of if
      clrscr();
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(x,45);
      cout<<"<-";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : "<<v<<" "<<"km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,26);
      cout<<"gear    : 6";
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      for(z=0;z<=1000000;z++)
       cout<<"";
      }//end of for
      moveup();
    }//////////////////end of moveleft

    //////////////////////// moveup
    void moveup(){
     for(y=45;y>=2;y--){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       machin();
      }//end of if
      clrscr();
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      //////////////////////road
      for(n=2;n<=75;n++){
       r=196;
       gotoxy(n,1);
       cout<<r;
       gotoxy(n,3);
       cout<<r;
       gotoxy(n,44);
       cout<<r;
       gotoxy(n,46);
       cout<<r;
       gotoxy(1,3);
       cout<<"  ";
       gotoxy(1,44);
       cout<<"  ";
       gotoxy(74,3);
       cout<<"   ";
       gotoxy(74,44);
       cout<<"   ";
      }//end of for
      for(n=2;n<=45;n++){
       r=179;
       gotoxy(1,n);
       cout<<r;
       gotoxy(3,n);
       cout<<r;
       gotoxy(74,n);
       cout<<r;
       gotoxy(76,n);
       cout<<r;
       gotoxy(3,2);
       cout<<" ";
       gotoxy(3,3);
       cout<<" ";
       gotoxy(3,44);
       cout<<" ";
       gotoxy(3,45);
       cout<<" ";
       gotoxy(74,2);
       cout<<" ";
       gotoxy(74,3);
       cout<<" ";
       gotoxy(74,44);
       cout<<" ";
       gotoxy(74,45);
       cout<<" ";
      }//end of for
      r=218;
      gotoxy(1,1);
      cout<<r;
      gotoxy(3,3);
      cout<<r;
      r=191;
      gotoxy(76,1);
      cout<<r;
      gotoxy(74,3);
      cout<<r;
      r=192;
      gotoxy(1,46);
      cout<<r;
      gotoxy(3,44);
      cout<<r;
      r=217;
      gotoxy(74,44);
      cout<<r;
      gotoxy(76,46);
      cout<<r;
      ////////////////////////////end of road
      gotoxy(2,y);
      cout<<"^";
      gotoxy(2,y+1);
      cout<<"|";
      gotoxy(30,20);
      cout<<"distance : "<<w<<" "<<"m";
      gotoxy(30,22);
      cout<<"speed   : "<<v<<" "<<"km/h";
      gotoxy(30,24);
      cout<<"lap     : "<<t<<"/"<<s;
      gotoxy(30,26);
      cout<<"gear    : 6";
      gotoxy(30,28);
      cout<<"fuel    : "<<q<<" litre";
      for(z=0;z<=1000000;z++)
       cout<<"";
      }//end of for
      moveright();
    }



  void sevensegment(){
   a:
 int a,b,c,d,e,f,g,h,x,y;
 char A=219;

               for(f=0;f<=2;f++){
                for(e=0;e<=9;e++){
                 if((f==2)&&(e==4))
                  break;
                 for(d=0;d<=6;d++){
                  for(c=0;c<=9;c++){
                   if(d==6)
                    break;
                   for(b=0;b<=6;b++){
                    for(a=0;a<=9;a++){
                     clrscr();
                     cout<<f<<e<<":"<<d<<c<<":"<<b<<a;
                     if(b==6)
                      break;
                     for(h=0;h<=100;h++){
                      gotoxy(9,1);
                      cout<<":"<<h;
                      if(a%2==0){
                       gotoxy(39,29);
                       cout<<A<<A;
                       gotoxy(39,30);
                       cout<<A<<A;
                       gotoxy(39,21);
                       cout<<A<<A;
                       gotoxy(39,22);
                       cout<<A<<A;
                      }//end of if

                     ////////////////////////////////////////////////////////minute 1
                     switch(a){
                       case 0:
                       for(y=10;y<=23;y++){
                        gotoxy(60,y);
                        cout<<A;
                       }//end of for

                       for(y=10;y<=23;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(60,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,9);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,41);
                        cout<<A;
                       }//end of for

                       break;
                       case 1:
                       for(y=10;y<=23;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       break;
                       case 2:

                       for(y=27;y<=40;y++){
                        gotoxy(60,y);
                        cout<<A;
                       }//end of for

                       for(y=10;y<=23;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,9);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,25);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,41);
                        cout<<A;
                       }//end of for

                       break;
                       case 3:
                       for(y=10;y<=23;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for


                       for(x=62;x<=69;x++){
                        gotoxy(x,9);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,25);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,41);
                        cout<<A;
                       }//end of for

                       break;
                       case 4:
                       for(y=10;y<=23;y++){
                        gotoxy(60,y);
                        cout<<A;
                       }//end of for

                       for(y=10;y<=23;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,25);
                        cout<<A;
                       }//end of for
                       break;
                       case 5:
                       for(y=10;y<=23;y++){
                        gotoxy(60,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(71,y);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,9);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,25);
                        cout<<A;
                       }//end of for

                       for(x=62;x<=69;x++){
                        gotoxy(x,41);
                        cout<<A;
                       }//end of for

                        break;
                        case 6:
                        for(y=10;y<=23;y++){
                         gotoxy(60,y);
                         cout<<A;
                        }//end of for

                        for(y=27;y<=40;y++){
                         gotoxy(60,y);
                         cout<<A;
                        }//end of for

                        for(y=27;y<=40;y++){
                         gotoxy(71,y);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,9);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,25);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,41);
                         cout<<A;
                        }//end of for

                        break;
                        case 7:
                        for(y=10;y<=23;y++){
                         gotoxy(71,y);
                         cout<<A;
                        }//end of for

                        for(y=27;y<=40;y++){
                 		    gotoxy(71,y);
                	       cout<<A;
                 		   }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,9);
                         cout<<A;
                        }//end of for

                        break;
                        case 8:
                        for(y=10;y<=23;y++){
                  		 gotoxy(60,y);
                		    cout<<A;
                        }//end of for

                        for(y=10;y<=23;y++){
                         gotoxy(71,y);
                         cout<<A;
                        }//end of for

                        for(y=27;y<=40;y++){
                         gotoxy(60,y);
                         cout<<A;
                        }//end of for

                        for(y=27;y<=40;y++){
                         gotoxy(71,y);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,9);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,25);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,41);
                         cout<<A;
                        }//end of for

                        break;
                        case 9:
                        for(y=10;y<=23;y++){
                      	 gotoxy(60,y);
                         cout<<A;
                        }//end of for

                        for(y=10;y<=23;y++){
                         gotoxy(71,y);
                         cout<<A;
                        }//end of for

                        for(y=27;y<=40;y++){
                         gotoxy(71,y);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,9);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,25);
                         cout<<A;
                        }//end of for

                        for(x=62;x<=69;x++){
                         gotoxy(x,41);
                         cout<<A;
                        }//end of for
                     }//end of switch


                     ////////////////////////////////////////////////////////minute 10

                     switch(b){
                       case 0:
                       for(y=10;y<=23;y++){
                        gotoxy(44,y);
                        cout<<A;
                       }//end of for

                       for(y=10;y<=23;y++){
                        gotoxy(55,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(44,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(55,y);
                        cout<<A;
                       }//end of for

                       for(x=46;x<=53;x++){
                        gotoxy(x,9);
                        cout<<A;
                       }//end of for

                       for(x=46;x<=53;x++){
                        gotoxy(x,41);
                        cout<<A;
                       }//end of for

                       break;
                       case 1:
                       for(y=10;y<=23;y++){
                        gotoxy(55,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(55,y);
                        cout<<A;
                       }//end of for

                       break;
                       case 2:
                       for(y=10;y<=23;y++){
                        gotoxy(55,y);
                        cout<<A;
                       }//end of for

                       for(y=27;y<=40;y++){
                        gotoxy(44,y);
                        cout<<A;
                       }//end of for

                       for(x=46;x<=53;x++){
                        gotoxy(x,9);
                        cout<<A;
                       }//end of for

                       for(x=46;x<=53;x++){
                        gotoxy(x,25);
                        cout<<A;
                       }//end of for

                       for(x=46;x<=53;x++){
                        gotoxy(x,41);
                        cout<<A;
                       }//end of for

                       break;
                       case 3:

                      for(y=10;y<=23;y++){
                       gotoxy(55,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(55,y);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 4:
                      for(y=27;y<=40;y++){
                       gotoxy(55,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(44,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(55,y);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      break;
                      case 5:
                      for(y=10;y<=23;y++){
                       gotoxy(44,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(55,y);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=46;x<=53;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for
                     }//end of switch

                     ////////////////////////////////////////////////hour 1
                     switch(c){
                      case 0:
                      for(y=10;y<=23;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 1:
                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      break;
                      case 2:
                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 3:
                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 4:
                      for(y=10;y<=23;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      break;
                      case 5:

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 6:
                      for(y=10;y<=23;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 7:
                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      break;
                      case 8:
                      for(y=10;y<=23;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                      break;
                      case 9:
                      for(y=10;y<=23;y++){
                       gotoxy(23,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(34,y);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=25;x<=32;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for
                    }//end of switch

                    ////////////////////////////////////////////////////hour 10
                    switch(d){
                     case 0:
                      for(y=10;y<=23;y++){
                       gotoxy(7,y);
                       cout<<A;
                      }//end of for

                      for(y=10;y<=23;y++){
                       gotoxy(18,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(7,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(18,y);
                       cout<<A;
                      }//end of for

                      for(x=9;x<=16;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for


                      for(x=9;x<=16;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for

                     break;
                     case 1:
                      for(y=10;y<=23;y++){
                       gotoxy(18,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(18,y);
                       cout<<A;
                      }//end of for

                     break;
                     case 2:
                      for(y=10;y<=23;y++){
                       gotoxy(18,y);
                       cout<<A;
                      }//end of for

                      for(y=27;y<=40;y++){
                       gotoxy(7,y);
                       cout<<A;
                      }//end of for

                      for(x=9;x<=16;x++){
                       gotoxy(x,9);
                       cout<<A;
                      }//end of for

                      for(x=9;x<=16;x++){
                       gotoxy(x,25);
                       cout<<A;
                      }//end of for

                      for(x=9;x<=16;x++){
                       gotoxy(x,41);
                       cout<<A;
                      }//end of for
                    }//end of for
                      for(g=0;g<=80000;g++){
                       cout<<"";
                      }//end of for
                     }//end of for
                    }//end of for
                   }//end of for
                  }//end of for
                 }//end of for
                }//end of for
               }//end of for
         goto a;
}//end of void sevensegment



 void timeconverter(){
  int  time1i, time2i, time1o, time2o, time2O, time1O,time1out, a;
   char  A;
         gotoxy(30,1);
   	   cout<<"welcome";
   			gotoxy(1,3);
   			cout<<"this program can convert :"<<endl<<endl<<"tehran times to Hong kong(h),london(l),Brasilia(b),Kuala lumpur(singapore)(k),  Us & canada(u),Paris(p),Alaska(a),Santiago(s),International date line west(i)."<<endl<<endl<<"please type firest letter of define introduce capital:  ";
            cin>>A;
            cout<<"enter your (tehran) time :      ";
            cin>>time1i>>time2i;
                while(time1i>=25 || time2i>=60){
                  clrscr();
                   gotoxy(30,1);
                   cout<<"welcome";
   					   gotoxy(1,3);
   					   cout<<"this program can convert ((tehran times to Hong kong(H), london(L), Brasilia(B),"<<endl<<"Kuala lumpur(singapore)(K),Us & canada(U), Paris(P), "<<endl<<"International date line west(I) )) times."<<endl<<endl<<"please type firest letter of introduce capital:  ";
           		   cin>>A;
            		cout<<"enter your (tehran) time :      ";
            		cin>>time1i>>time2i;
                  }//end of while
            	if(A=='h'){
            		time1o=time1i+4;
            		time2o=time2i+30;
                   cout<<"HOMG KONG time is :             "<<time1o<<":"<<time2o<<endl;
                     if(time2o > 60){
            					time2O=time2o%60;
          	 					a=time2o/60;
            					time1O=a+time1o;
                             cout<<"HOMG KONG right time is :       "<<time1O<<":"<<time2O<<endl;
                              if(time1O > 24){
                              	time1out=time1O-24;
                          		   cout<<"HOMG KONG high right time is :  "<<time1out<<":"<<time2O<<endl;
                              }//end of if
            			}//end of if
               }//end of if
               if(A=='l'){
            		time1o=time1i-3;
            		time2o=time2i-30;
                    cout<<"LONDON time is  :           "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"LONDON right time is:       "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='b'){
            		time1o=time1i-3;
            		time2o=time2i-30;
                    cout<<"BRASILIA time is  :           "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"BRASILIA right time is:          "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='k'){
            		time1o=time1i+4;
            		time2o=time2i+30;
                   cout<<"KUALA LUPUR(singapore) time is:..............."<<time1o<<":"<<time2o<<endl;
                     if(time2o > 60){
            					time2O=time2o%60;
          	 					a=time2o/60;
            					time1O=a+time1o;
                           cout<<"KUALA LUPUR(singapore) right time is:........."<<time1O<<":"<<time2O<<endl;
                           if(time1O > 24){
                              	time1out=time1O-24;
                          		   cout<<"KUALA LUPUR(singapore) high right time is :..."<<time1out<<":"<<time2O<<endl;
                              }//end of if
            			}//end of if
               }//end of if
               if(A=='u'){
            		time1o=time1i-9;
            		time2o=time2i-30;
                    cout<<"US & CANADA  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"US & CANADA right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='i'){
            		time1o=time1i-15;
            		time2o=time2i-30;
                    cout<<"International date line west  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"International date line west right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='p'){
            		time1o=time1i-2;
            		time2o=time2i-30;
                    cout<<"PARIS  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"PARIS right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='a'){
            		time1o=time1i-12;
            		time2o=time2i-30;
                    cout<<"ALASKA  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"ALASKA right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='s'){
            		time1o=time1i-7;
            		time2o=time2i-30;
                    cout<<"SANTIAGO  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"SANTIAGO right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
   getch();
  }//end of time connverter



 void stopwatch(){
 int a, b, c, d, e, f, g, h, i, j, k, l, A, B, C, D, E, F, G, I, J, K, L, M;
           c:
           clrscr();
           gotoxy(35,2);
            cout<<"welcome";
            cout<<"\n"<<"\n"<<"this program con stop watching for life time & can make a time and date."<<"\n"<<"\n"<<"Enter a number of 1-clock and date.   2-stop watch. :     ";
           cin>>D;

     /*clock & date*/

     if(D==1){
           b:
       clrscr();
        gotoxy(35,2);
        cout<<"welcome";
      	 cout<<endl<<endl<<endl<<endl<<"enter your city time(24:60:60) :    ";
          cin>>A>>B>>C;
           cout<<"enter (solar) date(YYYY/MM/DD) :    ";
           cin>>E>>F>>G;
            clrscr();
             for(e=E;e<=10000;e++){
              for(f=F;f<=13;f++){
               for(g=G;g<=31;g++){
                for(a=A;a<=24;a++){
                 for(b=B;b<=60;b++){
                  for(c=C;c<=60;c++){
                   a:
                  if(f>=13){
                   f=1;
                   e+=1;
                   E+=1;
                   goto a;
                  }//end of if

                  if(g>=31){
                   g=1;
                   f+=1;
                   F+=1;
                   goto a;
                  }//end of if

                  if(a>=24){
                   a=0;
                   g+=1;
                   G+=1;
                   goto a;
                  }//end of if

                  if(b>=60){
                   b=0;
                   a+=1;
             		 goto a;
                  }//end of if

                  if(c>=60){
                   c=0;
                   b+=1;
                   goto a;
                  }//end of if

                  clrscr();
                   gotoxy(37,20);
                   cout<<"your ciy time: "<<a<<":"<<b<<":"<<c;
                    gotoxy(37,21);
                    cout<<"SOLAR date:    "<<e<<"/"<<f<<"/"<<g;
                      i=e+622;
                      j=f+2;
                      k=g+19;
                       gotoxy(37,23);
                       cout<<"MILADI date:   "<<i<<"/"<<j<<"/"<<k;
                 		   if(j>=13 || k>=31){
                         clrscr();
                          gotoxy(37,20);
                  		  cout<<"your ciy time: "<<a<<":"<<b<<":"<<c;
                  		   gotoxy(37,21);
                  		   cout<<"SOLAR date:    "<<e<<"/"<<f<<"/"<<g;
                   		    K=k%30;
                  		    l=k/30;
                  		    J=l+j;
                            M=J%12;
                            L=M/12;
                            I=L+i;
                          gotoxy(37,23);
                          cout<<"MILADI date:   "<<I<<"/"<<M<<"/"<<K;
                        }//end of if

                   for(d=0;d<=25600000;d++){
                     cout<<"";
                   }//end of for
                  }//end of for
                 }//end of for
                }//end of for
               }//end of for
              }//end of for
             }//end of for
           cout<<"\n"<<"\n"<<"<<your date or tuor time isnt raight. please type again your righe date and yuor righe time.>>";
             getch();
             goto b;
     }//end of if

     /*stop watch*/

      if(D==2){
        clrscr();
         gotoxy(35,1);
         cout<<"welcome";
          gotoxy(1,4);
          cout<<"this program can stop watching for life time. "<<"\n"<<"\n"<<"<<press and hold any key to start and dont hold any thing to pause.>>";
            getch();
     			for(a=0;a<=100;a++){
             for(b=0;b<=12;b++){
              for(c=0;c<=30;c++){
               for(d=0;d<=23;d++){
  	 	   		 for(e=0;e<=59;e++){
                 for(f=0;f<=59;f++){
                  for(g=0;g<=59;g++){
            		 for(h=0;h<=59;h++){
                   h+=1;
                   getch();
                   clrscr();
                   gotoxy(25,10);
                   cout<<a<<"   "<<b<<"/"<<c<<"/"<<d<<"       "<<e<<":"<<f<<":"<<g<<"."<<h;
                    gotoxy(35,1);
                    cout<<"welcome";
         				gotoxy(1,4);
        		 			cout<<"this program can stop watching for life time. ";
                   }//end of for
                  }//end of for
                 }//end of for
                }//end of for
               }//end of for
              }//end of for
             }//end of for
            }//end of for
      }//end of if
      clrscr();
      gotoxy(10,5);
      cout<<"there is/ara [a] foul in the your type.please type again.";
      getch();
      goto c;
 }//end of stopwatch







