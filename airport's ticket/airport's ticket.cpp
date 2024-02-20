#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void start();
void sell();
void buy();
int ticket=10,money=10000,k[20],l[20],n[20],o[20],p[20],q[20],r[20],s[20],t[20],v=0,w=99,h[20],z;
char m[20][21],u[20][21];
main(){ //start
 start();
 return 0;
}//end of main

 void start(){
     char c;
     int x,y,a,b,e,f,i;
      clrscr();
      for(x=35;x<=50;x++){
       c=196;
       gotoxy(x,8);
       cout<<c;
       gotoxy(x,10);
       cout<<c;
       gotoxy(x,24);
       cout<<c;
       gotoxy(x,26);
       cout<<c;
      }//end of for
      for(y=8;y<=26;y++){
       c=179;
       gotoxy(35,y);
       cout<<c;
       gotoxy(50,y);
       cout<<c;
      }//end of for
      c=218;
      gotoxy(35,8);
      cout<<c;
      c=191;
      gotoxy(50,8);
      cout<<c;
      c=192;
      gotoxy(35,26);
      cout<<c;
      c=217;
      gotoxy(50,26);
      cout<<c;
      c=195;
      gotoxy(35,10);
      cout<<c;
      c=195;
      gotoxy(35,24);
      cout<<c;
      c=180;
      gotoxy(50,10);
      cout<<c;
      c=180;
      gotoxy(50,24);
      cout<<c;
      gotoxy(36,9);
      cout<<"airport ticket";
      gotoxy(36,12);
      cout<<"1-sell";
      gotoxy(36,14);
      cout<<"2-buy";
      gotoxy(36,16);
      cout<<"3-entrepot";
      gotoxy(36,18);
      cout<<"4-lottery";
      gotoxy(36,20);
      cout<<"5-informations";
      gotoxy(36,22);
      cout<<"6-exit";
      gotoxy(36,25);
      cout<<" number: ";
      cin>>a;
      if((a==4)&&(w<=99)){
       clrscr();
       cout<<"\n\n\n\n\t\"you don't buy any ticket\"";
       getch();
       start();
      }//end of if
      switch(a){
       case 1:
        clrscr();
        sell();
        break;
       case 2:
        clrscr();
        buy();
        break;
       case 3:
        clrscr();
        cout<<"\n\n\n\tthere are "<<ticket<<" tickets of different country in the entrepot.\n\n\tand there are "<<money<<"$ in the entrepot.";
        getch();
        start();
        break;
       case 4:
        z++;
        clrscr();
        cout<<"\n\n\n\t for exit enter 0.else enter your code for ballot: ";
        cin>>h[z];
        for(f=0;f<=20;f++){
         if(t[f]==h[z]){
          if(h[z]==0)
           start();
          for(i=(z-1);i>=0;i--)
           if(h[z]==h[i]){
             cout<<"\n\n\n\t\"sorry,this code already to use\"";
             getch();
             start();
           }//end of if
          randomize();
          b=rand();
          b%=3;
          if(b==1){
            cout<<"\n\n\t************** you get 100$ bonus **************";
            money-=100;
            getch();
            start();
          }else{
            cout<<"\n\n\t sorry. you don't get any bonus";
            getch();
            start();
          }//end of if
         }//end of if
        }//end of for
        cout<<"\n\n\t\"not found\"";
        h[z]=' ';
        getch();
        start();
        break;
       case 5:
        ////////////////////////////////////////////////////////////////////informations
        clrscr();
        cout<<"\n\n\n\tfor exit to menu enter 0.else enter your ticket's code: ";
        cin>>e;
        if(e==0)
         start();
        ///////////////////////////jadval
        for(f=0;f<=20;f++){
         if(t[f]==e){
           clrscr();
          for(x=10;x<=45;x++){
            c=196;
            gotoxy(x,18);
            cout<<c;
            gotoxy(x,20);
            cout<<c;
            gotoxy(x,22);
            cout<<c;
            gotoxy(x,24);
            cout<<c;
            gotoxy(x,26);
            cout<<c;
            gotoxy(x,28);
            cout<<c;
            gotoxy(x,30);
            cout<<c;
            gotoxy(x,32);
            cout<<c;
            gotoxy(x,34);
            cout<<c;
            gotoxy(x,36);
            cout<<c;
            gotoxy(x,38);
            cout<<c;
            gotoxy(x,40);
            cout<<c;
            gotoxy(x,42);
            cout<<c;
           }//end of for
           for(y=18;y<=42;y++){
            c=179;
            gotoxy(10,y);
            cout<<c;
            gotoxy(45,y);
            cout<<c;
           }//end of for
           c=218;
           gotoxy(10,18);
           cout<<c;
           c=191;
           gotoxy(45,18);
           cout<<c;
           c=192;
           gotoxy(10,42);
           cout<<c;
           c=217;
           gotoxy(45,42);
           cout<<c;
           c=180;
           gotoxy(45,20);
           cout<<c;
           gotoxy(45,22);
           cout<<c;
           gotoxy(45,24);
           cout<<c;
           gotoxy(45,26);
           cout<<c;
           gotoxy(45,28);
           cout<<c;
           gotoxy(45,30);
           cout<<c;
           gotoxy(45,32);
           cout<<c;
           gotoxy(45,34);
           cout<<c;
           gotoxy(45,36);
           cout<<c;
           gotoxy(45,38);
           cout<<c;
           gotoxy(45,40);
           cout<<c;
           c=195;
           gotoxy(10,20);
           cout<<c;
           gotoxy(10,22);
           cout<<c;
           gotoxy(10,24);
           cout<<c;
           gotoxy(10,26);
           cout<<c;
           gotoxy(10,28);
           cout<<c;
           gotoxy(10,30);
           cout<<c;
           gotoxy(10,32);
           cout<<c;
           gotoxy(10,34);
           cout<<c;
           gotoxy(10,36);
           cout<<c;
           gotoxy(10,38);
           cout<<c;
           gotoxy(10,40);
           cout<<c;
           /////////////////////////end of jadval
           gotoxy(11,19);
           cout<<"INFORMATION OF CODE "<<t[f];
           gotoxy(11,21);
           cout<<"full name:          "<<m[f];
           gotoxy(11,23);
           cout<<"age:                "<<n[f];
           gotoxy(11,25);
           cout<<"cost:               "<<o[f];
           gotoxy(11,27);
           cout<<"flight time:        "<<(p[f])<<":"<<q[f];
           gotoxy(11,29);
           cout<<"arrive time:        "<<((p[f])+3)<<":"<<q[f];
           gotoxy(11,31);
           cout<<"day of flight:      "<<r[f]<<"/"<<s[f]<<"/"<<"2012";
           gotoxy(11,33);
           cout<<"airplane            747";
           gotoxy(11,35);
           cout<<"seat:               "<<l[f]<<"d";
           gotoxy(11,37);
           cout<<"cargo:              "<<k[f]<<"kg";
           gotoxy(11,39);
           cout<<"code:               "<<t[f];
           gotoxy(11,41);
           cout<<"flight from iran to "<<u[f];
           getch();
           start();
         }//end of if
        }//end of for
        cout<<"\n\n\t\"not found\"";
        getch();
        start();
        break;
       ////////////////////////////////////////////end of informations
       case 6:
        clrscr();
        cout<<"\n\n\t\t\t\tGoodbye Whit Wish Good Journeys";
        getch();
        exit(1);
        break;
       default:
        clrscr();
        cout<<"\n\n\n\n\t\t\t\"you enter wrong input. please re enter\"";
        getch();
        start();
      }//end of switch
 }//end of void start

 void sell(){
      char b[21],a,e[21],f;
      int x,y,d,g;
        clrscr();
        if(money<=0){
         clrscr();
         cout<<"\n\n\n\n\t\t\t we can't buy them. because we haven't any money!";
         getch();
         start();
        }//end of if
        cout<<"\n\n\twhat is your country's ticket? ";
        cin.get();
        cin.get(b,20);
        cout<<"\n\n\thow many ticket do you want to sell? ";
        cin>>g;
        d=g*1000;
        if((money-d)<=-1){
         clrscr();
         cout<<"\n\n\n\n\t\t\t we can't buy them. because we have "<<money<<"$ only!";
         getch();
         start();
        }//end of if
        cout<<"\n\n\twhat is your full name? ";
        cin.get();
        cin.get(e,20);
        cout<<"\n\n\tyour payment is "<<d<<"$. do you want to sell(y/n)? ";
        cin>>a;
        switch(a){
          case 'n': start();
           break;
          case 'y':
           /////////////////////////////////bill
           clrscr();
           for(x=10;x<=45;x++){
            f=196;
            gotoxy(x,18);
            cout<<f;
            gotoxy(x,20);
            cout<<f;
            gotoxy(x,22);
            cout<<f;
            gotoxy(x,24);
            cout<<f;
            gotoxy(x,26);
            cout<<f;
           }//end of for
           for(y=18;y<=26;y++){
            f=179;
            gotoxy(10,y);
            cout<<f;
            gotoxy(45,y);
            cout<<f;
           }//end of for
           for(y=20;y<=26;y++){
            f=179;
            gotoxy(30,y);
            cout<<f;
           }//end of for
           f=218;
           gotoxy(10,18);
           cout<<f;
           f=191;
           gotoxy(45,18);
           cout<<f;
           f=192;
           gotoxy(10,26);
           cout<<f;
           f=217;
           gotoxy(45,26);
           cout<<f;
           f=193;
           gotoxy(30,26);
           cout<<f;
           f=194;
           gotoxy(30,20);
           cout<<f;
           f=197;
           gotoxy(30,22);
           cout<<f;
           f=197;
           gotoxy(30,24);
           cout<<f;
           f=180;
           gotoxy(45,20);
           cout<<f;
           f=180;
           gotoxy(45,22);
           cout<<f;
           f=180;
           gotoxy(45,24);
           cout<<f;
           f=195;
           gotoxy(10,20);
           cout<<f;
           f=195;
           gotoxy(10,22);
           cout<<f;
           f=195;
           gotoxy(10,24);
           cout<<f;
           gotoxy(23,19);
           cout<<"bill of ticket";
           gotoxy(11,21);
           cout<<"full name";
           gotoxy(11,23);
           cout<<"tickets";
           gotoxy(11,25);
           cout<<"price of tickets";
           gotoxy(31,21);
           cout<<e;
           gotoxy(31,23);
           cout<<g;
           gotoxy(31,25);
           cout<<d<<"$";
           /////////////////////////////////end of bill
           ticket+=g;
           money-=d;
           getch();
           start();
           break;
          default:
           clrscr();
           cout<<"\n\n\n\n\t\t\t\"you enter wrong input. please re enter\"";
           getch();
           clrscr();
           sell();
        }//end of switch
  }//end of void sell

  void buy(){
     char b[21],a,e[21],f;
     int c,x,y,d=1000,j,g,i;
       clrscr();
       if(ticket<=0){
        clrscr();
        cout<<"\n\n\n\n\t\t\t we haven't any ticket's!";
        getch();
        start();
       }//end of if
       cout<<"\n\n\twhat country's ticket do you want to buy? ";
        cin.get();
        cin.get(b,20);
       cout<<"\n\n\twhat is your full name? ";
        cin.get();
        cin.get(e,20);
       cout<<"\n\n\thow old are you? ";
        cin>>c;
       if(c<=10)
         d=500;
       cout<<"\n\n\thow mach cargo do you want to use(15kg-30kg)? ";
        cin>>i;
        if(i<=15 || i>=30){
         cout<<"\n\n\t  wrong.please type again.";
         getch();
         buy();
        }//end of for
        i-=15;
        i*=10;
       cout<<"\n\n\t price of cargor: "<<i<<"$";
       cout<<"\n\t price of ticket: "<<d<<"$";
       d+=i;
       cout<<"\n\t TOTAL COST:      "<<d<<"$";
       cout<<"\n\n Are you sure buy that? ";
        cin>>a;
       switch(a){
         case 'n': start();
          break;
         case 'y':
          clrscr();
         /////////////////////////////////bill
           clrscr();
           for(x=10;x<=45;x++){
            f=196;
            gotoxy(x,18);
            cout<<f;
            gotoxy(x,20);
            cout<<f;
            gotoxy(x,22);
            cout<<f;
            gotoxy(x,24);
            cout<<f;
            gotoxy(x,26);
            cout<<f;
            gotoxy(x,28);
            cout<<f;
            gotoxy(x,30);
            cout<<f;
            gotoxy(x,32);
            cout<<f;
            gotoxy(x,34);
            cout<<f;
            gotoxy(x,36);
            cout<<f;
            gotoxy(x,38);
            cout<<f;
            gotoxy(x,40);
            cout<<f;
            gotoxy(x,42);
            cout<<f;
           }//end of for
           for(y=18;y<=42;y++){
            f=179;
            gotoxy(10,y);
            cout<<f;
            gotoxy(45,y);
            cout<<f;
           }//end of for
           for(y=20;y<=40;y++){
            f=179;
            gotoxy(30,y);
            cout<<f;
           }//end of for
           f=218;
           gotoxy(10,18);
           cout<<f;
           f=191;
           gotoxy(45,18);
           cout<<f;
           f=192;
           gotoxy(10,42);
           cout<<f;
           f=217;
           gotoxy(45,42);
           cout<<f;
           f=193;
           gotoxy(30,40);
           cout<<f;
           f=194;
           gotoxy(30,20);
           cout<<f;
           f=197;
           gotoxy(30,22);
           cout<<f;
           gotoxy(30,24);
           cout<<f;
           gotoxy(30,26);
           cout<<f;
           gotoxy(30,28);
           cout<<f;
           gotoxy(30,30);
           cout<<f;
           gotoxy(30,32);
           cout<<f;
           gotoxy(30,34);
           cout<<f;
           gotoxy(30,36);
           cout<<f;
           gotoxy(30,38);
           cout<<f;
           f=180;
           gotoxy(45,20);
           cout<<f;
           gotoxy(45,22);
           cout<<f;
           gotoxy(45,24);
           cout<<f;
           gotoxy(45,26);
           cout<<f;
           gotoxy(45,28);
           cout<<f;
           gotoxy(45,30);
           cout<<f;
           gotoxy(45,32);
           cout<<f;
           gotoxy(45,34);
           cout<<f;
           gotoxy(45,36);
           cout<<f;
           gotoxy(45,38);
           cout<<f;
           gotoxy(45,40);
           cout<<f;
           f=195;
           gotoxy(10,20);
           cout<<f;
           gotoxy(10,22);
           cout<<f;
           gotoxy(10,24);
           cout<<f;
           gotoxy(10,26);
           cout<<f;
           gotoxy(10,28);
           cout<<f;
           gotoxy(10,30);
           cout<<f;
           gotoxy(10,32);
           cout<<f;
           gotoxy(10,34);
           cout<<f;
           gotoxy(10,36);
           cout<<f;
           gotoxy(10,38);
           cout<<f;
           gotoxy(10,40);
           cout<<f;
           gotoxy(23,19);
           cout<<"bill of ticket";
           gotoxy(11,21);
           cout<<"full name";
           gotoxy(11,23);
           cout<<"age";
           gotoxy(11,25);
           cout<<"cost";
           gotoxy(11,27);
           cout<<"flight time";
           gotoxy(11,29);
           cout<<"arrive time";
           gotoxy(11,31);
           cout<<"day of flight";
           gotoxy(11,33);
           cout<<"airplane";
           gotoxy(11,35);
           cout<<"seat";
           gotoxy(11,37);
           cout<<"cargo";
           gotoxy(11,39);
           cout<<"code";
           gotoxy(31,21);
           cout<<e;
           strcpy(m[v],e);
           gotoxy(31,23);
           cout<<c;
           n[v]=c;
           gotoxy(31,25);
           cout<<d<<"$";
           o[v]=d;
           randomize();
           g=rand();
           g%=2;
           g*=30;
           j=rand();
           j%=20;
           gotoxy(31,27);
           cout<<j<<":"<<g;
           p[v]=j;
           q[v]=g;
           gotoxy(31,29);
           cout<<(j+3)<<":"<<g;
           g=rand();
           g%=30;
           g+=1;
           j=rand();
           j%=11;
           j+=1;
           gotoxy(31,31);
           cout<<g<<"/"<<j<<"/2012";
           r[v]=g;
           s[v]=j;
           gotoxy(31,33);
           cout<<"747";
           g=rand();
           g%=100;
           g++;
           gotoxy(31,35);
           cout<<g<<"d";
           l[v]=g;
           i/=10;
           i+=15;
           gotoxy(31,37);
           cout<<i<<"kg";
           k[v]=i;
           w++;
           gotoxy(31,39);
           cout<<w;
           t[v]=w;
           gotoxy(11,41);
           cout<<"flight from iran to "<<b;
           strcpy(u[v],b);
           /////////////////////////////////end of bill
         ticket-=1;
         money+=d;
         getch();
         clrscr();
         v++;
         start();
         break;
        default:
         clrscr();
         cout<<"\n\n\n\n\t\t\t\"you enter wrong input. please re enter\"";
         getch();
         clrscr();
         buy();
       }//end of switch
  }//end of void buy
