#include <iostream.h>
#include <conio.h>
main(){ //start the program
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
                     for(h=0;h<=40;h++){
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
                     }//end of for
                    }//end of for
                   }//end of for
                  }//end of for
                 }//end of for
                }//end of for
               }//end of for
goto a;
}//end of program
