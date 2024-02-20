#include <iostream.h>
#include <conio.h>
#include <math.h>
main(){
   long double a,b;
   char d,e=251,f=179,g=218,h=192,i=191,j=217,k=196,l=251;
   a:
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
       gotoxy(25,8);
       cin>>a>>d>>b;
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
       }//end of switch
       getch();
       clrscr();
       goto a;
}//end of program
