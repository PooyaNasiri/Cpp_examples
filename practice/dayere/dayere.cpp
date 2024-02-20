#include <iostream.h>
#include <conio.h>
main(){ //start the program
  char a;
  int x,y;
  for(x=41,y=11;x<=56,y<=21;x++,y++){
   a=191;
   gotoxy(x,y);
   cout<<a;
  }//end of for

  for(x=40,y=11;x<=55,y<=21;x++,y++){
   a=192;
   gotoxy(x,y);
   cout<<a;
  }//end of for



  for(x=40,y=12;x<=35,y<=21;x--,y++){
   a=217;
   gotoxy(x,y);
   cout<<a;
  }//end of for

  for(x=40,y=11;x<=35,y<=21;x--,y++){
   a=218;
   gotoxy(x,y);
   cout<<a;
  }//end of for



  for(x=31,y=22;x<=36,y<=31;x++,y++){
   a=191;
   gotoxy(x,y);
   cout<<a;
  }//end of for

  for(x=30,y=22;x<=35,y<=32;x++,y++){
   a=192;
   gotoxy(x,y);
   cout<<a;
  }//end of for



  for(x=41,y=31;x<=60,y>=22;x++,y--){
   a=218;
   gotoxy(x,y);
   cout<<a;
  }//end of for

  for(x=41,y=32;x<=60,y>=22;x++,y--){
   a=217;
   gotoxy(x,y);
   cout<<a;
  }//end of for



 getch();
 return 0;
}//end of program
