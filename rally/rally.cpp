#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

main(){

 char a,c1=218,c2=191,c3=192,c4=217,c5=196,c6=179,c7=60,c8=62,c9=94;
 int  n,v,x=43,y=30,p=1,q=0,X=35,Y=1,z;
 a:

 if(p%2==0){
  for(z=1;z<=40;z++){
   gotoxy(34,z);
   cout<<c6;
   gotoxy(58,z);
   cout<<c6;
   if(z%2==0){
    gotoxy(42,z);
    cout<<c6;
    gotoxy(42,z+1);
    cout<<" ";
    gotoxy(50,z);
    cout<<c6;
    gotoxy(50,z+1);
    cout<<" ";
   }//end of if
  }//end of for
 }//end of if

 if(p%2!=0){
  for(z=1;z<=40;z++){
   gotoxy(34,z);
   cout<<c6;
   gotoxy(58,z);
   cout<<c6;
   if(z%2==0){
    gotoxy(42,z+1);
    cout<<c6;
    gotoxy(42,z);
    cout<<" ";
    gotoxy(50,z+1);
    cout<<c6;
    gotoxy(50,z);
    cout<<" ";
   }//end of if
  }//end of for
 }//end of if

 gotoxy(x,y);
 cout<<"  "<<c1<<c9<<c2<<" ";
 gotoxy(x,y+1);
 cout<<" "<<c7<<c6<<" "<<c6<<c8<<" ";
 gotoxy(x,y+2);
 cout<<"  "<<c6<<" "<<c6<<" ";
 gotoxy(x,y+3);
 cout<<" "<<c7<<c6<<" "<<c6<<c8<<" ";
 gotoxy(x,y+4);
 cout<<"  "<<c3<<c5<<c4<<" ";

 a=getch();

 switch(a){
   case 97:
    if(x!=35)
     x-=8;
    for(n=30;n<=35;n++){
     gotoxy(44,n);
     cout<<"     ";
     gotoxy(52,n);
     cout<<"     ";
    }//end of for
    break;
   case 100:
    if(x!=51)
     x+=8;
    for(n=30;n<=35;n++){
     gotoxy(36,n);
     cout<<"     ";
     gotoxy(44,n);
     cout<<"     ";
    }//end of for
    break;
   case 119:
    p+=1;
    if((p%20==0 || q==1)&&(Y<=35)){
     Y++;
     q=1;
     gotoxy(X,Y-1);
     cout<<"       ";
     gotoxy(X,Y);
     cout<<"  "<<c1<<c9<<c2<<" ";
     gotoxy(X,Y+1);
     cout<<" "<<c7<<c6<<" "<<c6<<c8<<" ";
     gotoxy(X,Y+2);
     cout<<"  "<<c6<<" "<<c6<<" ";
     gotoxy(X,Y+3);
     cout<<" "<<c7<<c6<<" "<<c6<<c8<<" ";
     gotoxy(X,Y+4);
     cout<<"  "<<c3<<c5<<c4<<" ";
    }//end of if
    for(n=35;n<=40;n++){
     gotoxy(36,n);
     cout<<"     ";
     gotoxy(44,n);
     cout<<"     ";
     gotoxy(52,n);
     cout<<"     ";
    }//end of for

     if(Y>=35){
      Y=1;
      randomize();
      v=rand();
      v%=3;
      v++;
     }//end of if
     switch(v){
      case 1:
       X=35;
      break;
      case 2:
       X=43;
      break;
      case 3:
       X=51;
      break;
     }//end of switch
   break;
 }//end of switch
 if(x==X)
  if(Y+4>=y){
   clrscr();
   gotoxy(34,18);
   cout<<"     #@!%$&$      ";
   for(z=0;z<=30000000;z++)
    cout<<"";
   gotoxy(34,18);
   cout<<" ?:\"{}!!@#$%^+-] ";
   for(z=0;z<=30000000;z++)
    cout<<"";
   gotoxy(34,18);
   cout<<"  :<>*&^%=-\|+!@  ";
   for(z=0;z<=30000000;z++)
    cout<<"";
   gotoxy(34,18);
   cout<<"     YOU LOSE     ";
   getch();
   getch();
   gotoxy(34,18);
   cout<<"                  ";
   x=43;
   y=30;
   p=1;
   q=0;
   X=35;
   Y=1;
   goto a;
  }//end of if



 goto a;
}
