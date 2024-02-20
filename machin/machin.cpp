#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void moveright();
void movedown();
void moveleft();
void moveup();
void start();
void MAIN();
int  n,p=0,q,s,t=0,u=10000000,v=0,w=0,x,y,z;
char o,r;

    ////////////////////////main
    main(){
     MAIN();
     return 0;
    }///////////////////////end of maain

    ////////////////////////MAIN
     void MAIN(){
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
      start();
    }///////////////////////end of MAIN

    //////////////////////// start
    void start(){
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
       MAIN();
      }//end of if
      v+=2;
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litr   WARNING";
      }//end of if
      gotoxy(x,2);
      cout<<" ->";
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
    }//////////////////end of start

    //////////////////////// moveright
    void moveright(){
     t+=1;
     if(t==s){
      gotoxy(25,5);
      cout<<"********** END **********";
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
      MAIN();
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
       MAIN();
      }//end of if
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      gotoxy(x,2);
      cout<<" ->";
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
     r=179;
     gotoxy(76,2);
     cout<<r<<" ";
     for(y=2;y<=45;y++){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       MAIN();
      }//end of if
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      gotoxy(75,y-1);
      cout<<" ";
      gotoxy(75,y);
      cout<<"|";
      gotoxy(75,y+1);
      cout<<"v";
      r=196;
      gotoxy(75,1);
      cout<<r;
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
     r=196;
     gotoxy(75,46);
     cout<<r;
     for(x=75;x>=2;x--){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       MAIN();
      }//end of if
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      gotoxy(x,45);
      cout<<"<- ";
      r=179;
      gotoxy(76,45);
      cout<<r;
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
     gotoxy(3,45);
     cout<<" ";
     for(y=45;y>=2;y--){
      w+=1;
      if(w%100==0){
       q-=1;
      }//end of if
      if(q==0){
       gotoxy(25,5);
       cout<<"********** low fuel **********";
       getch();
       MAIN();
      }//end of if
      if(t==s-1){
       gotoxy(30,24);
       cout<<"lap     : "<<t<<"/"<<s<<"  final lap";
      }//end of if
      if(q<=5){
       gotoxy(30,28);
       cout<<"fuel    : "<<q<<" litre   WARNING";
      }//end of if
      gotoxy(2,y);
      cout<<"^";
      gotoxy(2,y+1);
      cout<<"|";
      gotoxy(2,y+2);
      cout<<" ";
      r=196;
      gotoxy(2,46);
      cout<<r;
      gotoxy(2,3);
      cout<<" ";
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
    }//////////////////end of moveup
