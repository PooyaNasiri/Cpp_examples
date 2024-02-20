#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
main(){ //start the program
  int a, x, y;
  randomize();
  a:
  x=rand();
  y=rand();
  x%=60;
  y%=40;
  x+=2;
  y+=2;
   clrscr();
   gotoxy(x,y);
   cout<<"Microsoft(p.n)";
    gotoxy(x,y+2);
    cout<<"Windows XP";
   for(a=0;a<=100000000;a++){
    cout<<"";
   }//end of for
  goto a;
}//end of program
