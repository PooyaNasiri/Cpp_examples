#include <iostream.h>
#include <conio.h>
main(){ //start the program
int a,b,c,z;
char e;

             for(a=0;a<=24;a++){
              for(b=0;b<=60;b++){
               for(c=0;c<=60;c++){
                   clrscr();
                   a:

                  if(a>=24){
                   a=0;
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

                  gotoxy(40,20);
                  cout<"          ";
                  gotoxy(40,20);
                  cout<<a<<":"<<b<<":"<<c;


                  /////////////////////////////////second
                  e=248;
                  switch(c){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                     gotoxy(49,11);
                     cout<<e;
                     break;
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                     gotoxy(59,16);
                     cout<<e;
                     break;
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                     gotoxy(69,20);
                     cout<<e;
                     break;
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                     gotoxy(59,24);
                     cout<<e;
                     break;
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                     gotoxy(49,29);
                     cout<<e;
                     break;
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                     gotoxy(40,34);
                     cout<<e;
                     break;
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                     gotoxy(31,29);
                     cout<<e;
                     break;
                    case 38:
                    case 39:
                    case 40:
                    case 41:
                    case 42:
                     gotoxy(21,24);
                     cout<<e;
                     break;
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                     gotoxy(11,20);
                     cout<<e;
                     break;
                    case 48:
                    case 49:
                    case 50:
                    case 51:
                    case 52:
                     gotoxy(21,16);
                     cout<<e;
                     break;
                    case 53:
                    case 54:
                    case 55:
                    case 56:
                    case 57:
                     gotoxy(31,11);
                     cout<<e;
                     break;
                    case 0:
                    case 1:
                    case 2:
                    case 58:
                    case 59:
                    case 60:
                     gotoxy(40,6);
                     cout<<e;
                     break;
                  }//end of switch
                   gotoxy(40,5);
                   cout<<"12";
                   gotoxy(50,10);
                   cout<<"1";
                   gotoxy(60,15);
                   cout<<"2";
                   gotoxy(70,20);
                   cout<<"3";
                   gotoxy(60,25);
                   cout<<"4";
                   gotoxy(50,30);
                   cout<<"5";
                   gotoxy(40,35);
                   cout<<"6";
                   gotoxy(30,30);
                   cout<<"7";
                   gotoxy(20,25);
                   cout<<"8";
                   gotoxy(10,20);
                   cout<<"9";
                   gotoxy(20,15);
                   cout<<"10";
                   gotoxy(30,10);
                   cout<<"11";


                 /////////////////////////////////minute
                 e=79;
                  switch(b){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                     gotoxy(48,11);
                     cout<<e;
                     break;
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                     gotoxy(58,16);
                     cout<<e;
                     break;
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                     gotoxy(68,20);
                     cout<<e;
                     break;
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                     gotoxy(58,24);
                     cout<<e;
                     break;
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                     gotoxy(48,29);
                     cout<<e;
                     break;
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                     gotoxy(39,34);
                     cout<<e;
                     break;
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                     gotoxy(32,29);
                     cout<<e;
                     break;
                    case 38:
                    case 39:
                    case 40:
                    case 41:
                    case 42:
                     gotoxy(22,24);
                     cout<<e;
                     break;
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                     gotoxy(12,20);
                     cout<<e;
                     break;
                    case 48:
                    case 49:
                    case 50:
                    case 51:
                    case 52:
                     gotoxy(22,16);
                     cout<<e;
                     break;
                    case 53:
                    case 54:
                    case 55:
                    case 56:
                    case 57:
                     gotoxy(32,11);
                     cout<<e;
                     break;
                    case 0:
                    case 1:
                    case 2:
                    case 58:
                    case 59:
                    case 60:
                     gotoxy(40,7);
                     cout<<e;
                     break;
                  }//end of switch


                  /////////////////////////////////hour
                 e=219;
                  switch(a){
                    case 1:
                     gotoxy(46,11);
                     cout<<e;
                     break;
                    case 2:
                     gotoxy(56,16);
                     cout<<e;
                     break;
                    case 3:
                     gotoxy(66,20);
                     cout<<e;
                     break;
                    case 4:
                     gotoxy(56,24);
                     cout<<e;
                     break;
                    case 5:
                     gotoxy(56,29);
                     cout<<e;
                     break;
                    case 6:
                     gotoxy(37,32);
                     cout<<e;
                     break;
                    case 7:
                     gotoxy(34,29);
                     cout<<e;
                     break;
                    case 8:
                     gotoxy(24,24);
                     cout<<e;
                     break;
                    case 9:
                     gotoxy(14,20);
                     cout<<e;
                     break;
                    case 10:
                     gotoxy(24,16);
                     cout<<e;
                     break;
                    case 11:
                     gotoxy(34,11);
                     cout<<e;
                     break;
                    case 0:
                    case 12:
                     gotoxy(40,9);
                     cout<<e;
                     break;
                  }//end of switch


                for(z=0;z<=25600000;z++)
                  cout<<"";
               }//end of for
              }//end of for
             }//end of for

 getch();
 return 0;
}//end of program
