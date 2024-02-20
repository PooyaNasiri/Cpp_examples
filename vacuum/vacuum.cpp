#include <iostream.h>
#include <conio.h>
main(){ //start the program
  int b=0,m,n,x=0,y,z,X=1;
  char a;
 getch();
 while(x<=80){
  if(0==b%2){
   for(x=X;x<=X;x++){
    for(y=1;y<=49;y++){
     a=219;
     gotoxy(x,y);
     cout<<a<<a;
     gotoxy(x,y+1);
     cout<<a<<a;
     for(z=0;z<=500000;z++)
      cout<<"";
    }//end of for
   }//end of for
  }else{
   for(x=X;x<=X;x++){
    for(y=49;y>=1;y--){
     a=219;
     gotoxy(x,y);
     cout<<a<<a;
     gotoxy(x,y+1);
     cout<<a<<a;
     for(z=0;z<=500000;z++)
      cout<<"";
    }//end of for
   }//end of for
  }//end fo else
  b++;
  X+=2;
 }//end of while


 getch();


 X=79;
 while(x>=0){
  if(0==b%2){
   for(x=X;x>=X;x--){
    for(y=1;y<=49;y++){
    for(m=10;m<=30;m++){
   a=219;
   gotoxy(15,m);
   cout<<a;
   gotoxy(35,m);
   cout<<a;
   gotoxy(45,m);
   cout<<a;
   gotoxy(55,m);
   cout<<a;
  }//end of for
  for(n=15;n<=25;n++){
   a=219;
   gotoxy(n,10);
   cout<<a;
   gotoxy(n,20);
   cout<<a;
   gotoxy(n,30);
   cout<<a;
  }//end of for
  m=8;
  for(n=35;n<=45;n++){
    m+=2;
    a=219;
    gotoxy(n,m);
    cout<<a;
    gotoxy(n,m+1);
    cout<<a;
  }//end of for
  m=8;
  for(n=55;n<=65;n++){
    m+=1;
    a=219;
    gotoxy(n,m+1);
    cout<<a;
  }//end of for
  m=32;
  for(n=55;n<=65;n++){
    m-=1;
    a=219;
    gotoxy(n,m-1);
    cout<<a;
  }//end of for
     a=0;
     gotoxy(x,y);
     cout<<a<<a;
     gotoxy(x,y+1);
     cout<<a<<a;
     for(z=0;z<=500000;z++)
      cout<<"";
    }//end of for
   }//end of for
  }else{
   for(x=X;x>=X;x--){
    for(y=49;y>=1;y--){
    for(m=10;m<=30;m++){
   a=219;
   gotoxy(15,m);
   cout<<a;
   gotoxy(35,m);
   cout<<a;
   gotoxy(45,m);
   cout<<a;
   gotoxy(55,m);
   cout<<a;
  }//end of for
  for(n=15;n<=25;n++){
   a=219;
   gotoxy(n,10);
   cout<<a;
   gotoxy(n,20);
   cout<<a;
   gotoxy(n,30);
   cout<<a;
  }//end of for
  m=8;
  for(n=35;n<=45;n++){
    m+=2;
    a=219;
    gotoxy(n,m);
    cout<<a;
    gotoxy(n,m+1);
    cout<<a;
  }//end of for
  m=8;
  for(n=55;n<=65;n++){
    m+=1;
    a=219;
    gotoxy(n,m+1);
    cout<<a;
  }//end of for
  m=32;
  for(n=55;n<=65;n++){
    m-=1;
    a=219;
    gotoxy(n,m-1);
    cout<<a;
  }//end of for
     a=0;
     gotoxy(x,y);
     cout<<a<<a;
     gotoxy(x,y+1);
     cout<<a<<a;
     for(z=0;z<=500000;z++)
      cout<<"";
    }//end of for
   }//end of for
  }//end fo else
  b++;
  X-=2;
 }//end of while
 getch();
}//end of program
