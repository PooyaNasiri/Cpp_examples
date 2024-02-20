#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
main(){ //start the program
 int z,i,j,k,l;
 double x,y,b,c,d;
 char a,e,f,g,h;
 while(1){
 clrscr();
 for(x=28;x<=48;x++){
  a=196;
  gotoxy(x,10);
  cout<<a;
  gotoxy(x,30);
  cout<<a;
  gotoxy(x,26);
  cout<<a;
 }//end of for
 for(y=11;y<=29;y++){
  a=179;
  gotoxy(28,y);
  cout<<a;
  gotoxy(48,y);
  cout<<a;
 }//end of for
  a=218;
  gotoxy(28,10);
  cout<<a;
  a=191;
  gotoxy(48,10);
  cout<<a;
  a=217;
  gotoxy(48,30);
  cout<<a;
  a=192;
  gotoxy(28,30);
  cout<<a;
  a=195;
  gotoxy(28,26);
  cout<<a;
  a=180;
  gotoxy(48,26);
  cout<<a;

  gotoxy(30,12);
  cout<<"1- karmand";
  gotoxy(30,15);
  cout<<"2- ketab";
  gotoxy(30,18);
  cout<<"3- mashin hesab";
  gotoxy(30,21);
  cout<<"4- mazrab x";
  gotoxy(30,24);
  cout<<"5- khorooj";
  gotoxy(30,28);
  cout<<"Enter a nuumber:";
  cin>>z;

  switch(z){
      case 1:
      clrscr();
      c=1;
      b=0;
      d=0;
      gotoxy(35,3);
      cout<<"welcome";
      cout<<"\n\n   this program can calculate remainder of income.";
       do{
        cout<<"\n\n\n  enter income then shortage's income: ";
        cin>>d>>b;
         d-=b*(d/100);
         c++;
        cout<<"\n  remainder of income= "<<d;
        cout<<"\n\n do you want to cantinue: ";
        cin>>e;
        if(e!='y')
         break;
       }while(1);
      break;

      case 2:
      while(1){
      clrscr();
      b=0;
      d=0;
      gotoxy(35,3);
      cout<<"welcome";
      cout<<"\n\n   this program can calculate COST PRICE.";
        cout<<"\n\n\n  enter cost of book then discount: ";
        cin>>d>>b;
         d-=b*(d/100);
        cout<<"\n  COST PRICE= "<<d;
        cout<<"\n\n do you want to cantinue: ";
        cin>>e;
        if(e!='y')
         break;
      }//end of while
      break;

      case 3:
      while(1){
      clrscr();
      b=0;
      d=0;

      for(y=15;y<=22;y++){
       a=179;
       gotoxy(27,y);
       cout<<a;
       gotoxy(50,y);
       cout<<a;
       gotoxy(46,y);
       cout<<a;
      }//end of for

      for(x=27;x<=50;x++){
       a=196;
       gotoxy(x,15);
       cout<<a;
       gotoxy(x,22);
       cout<<a;
      }//end of for

      a=218;
      gotoxy(27,15);
      cout<<a;
      a=191;
      gotoxy(50,15);
      cout<<a;
      a=217;
      gotoxy(50,22);
      cout<<a;
      a=192;
      gotoxy(27,22);
      cout<<a;

      gotoxy(47,16);
      cout<<"a+b";
      gotoxy(47,17);
      cout<<"a-b";
      gotoxy(47,18);
      cout<<"a*b";
      gotoxy(47,19);
      cout<<"a/b";
      gotoxy(47,20);
      cout<<"a^b";
      gotoxy(47,21);
      h=251;
      cout<<h<<" b";
       gotoxy(29,17);
       cin>>b>>g>>d;
       gotoxy(25,10);
       switch(g){
        case '+':
         gotoxy(29,19);
         cout<<b<<"+"<<d<<"="<<(b+d);
         break;
        case '-':
         gotoxy(29,19);
         cout<<b<<"-"<<d<<"="<<(b-d);
         break;
        case '*':
         gotoxy(29,19);
         cout<<b<<"*"<<d<<"="<<(b*d);
         break;
        case '/':
         gotoxy(29,19);
         cout<<b<<"/"<<d<<"="<<(b/d);
         break;
        case '^':
         gotoxy(29,19);
         cout<<b<<"^"<<d<<"="<<(pow(b,d));
         break;
        case '$':
         f=251;
         gotoxy(29,19);
         cout<<f<<d<<"="<<(sqrt(d));
         break;
       }//end o switch
       cout<<"\n\n\n\n\n do you want to cantinue: ";
       cin>>e;
       if(e=='y')
        break;
      }//end of while


      case 4:
       while(1){
       i=1;
       j=0;
       k=0;
       l=0;
       clrscr();
       gotoxy(35,3);
           cout<<"welcome";
           cout<<"\n\n  tihs program calculate the multiple of <a> between <b> and <c>.\n\n enter the number (a b c): ";
           cin>>i>>j>>k;
           cout<<"\n\n";
            while(j<=k){
              if(j%i==0){
               cout<<j<<"\t";
               l+=j;
              }//end of if
              j++;
            }//end of while
            cout<<"\n\n addition of them is: "<<l;
            cout<<"\n\n do you want to cantinue: ";
            cin>>e;
            if(e!='y')
             break;
       }//end of while
      break;

      case 5:
      clrscr();
      gotoxy(21,5);
      cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
      getch();
      exit(1);
      break;
      default:
       clrscr();
       gotoxy(25,20);
       cout<<"out of programe";
       getch();
    }//end of switch
 }//end of while
}//end of program
