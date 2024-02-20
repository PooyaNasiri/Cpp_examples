#include <iostream.h>
#include <conio.h>
main()
{//start the program

          int a, b, c, d, e, f, g, h, i, x, y, w;
          gotoxy(27,10);
      	 cout<<"PRESS ANY KEY TO START THIS MATCH";
          getch();
             a=0;
             b=0;                              
             b:
             c=40;
             d=23;
             e:
             x=c;
             y=d;
             a:
             g=1000000;
            if((c==x&&d==y) || (c==(x+4)&&d==y) || (c==(x+2)&&d==y) || (c==(x+2)&&d==(y+1))){
             clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n\n\n";
             cout<<" num 1= move left & down         num 2= move down          num 0= short shot   \n";
             cout<<" num 3= move right & down        num 4= move left          num 10= long shot   \n";
             cout<<" num 7= move left & up           num 6= move right                             \n";
             cout<<" num 9= move right & up          num 8= move up                                \n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
              gotoxy(40,23);
              cin>>w;

              //move right
             if(w==6){
              if(d==(y+1)){
               goto c;
              }//end of if
              else{
               x+=1;
               c=(x+4);
               }//end of else
             }//end of if

             //move left
             if(w==4){
             if(d==(y+1)){
               goto d;
              }//end of if
              else{
               x-=1;
               c=x;
              }//end of else
             }//end of if

             //mpve up
             if(w==8){
              if(d==(y+1)){
               d-=1;
              }//end of if
               y-=1;
               d-=1;
              if(c==(x+4)){
                c-=2;
              }//end of if
              if(c==x){
                c+=2;
              }//end of if
             }//end of if

             //move down
             if(w==2){
               y+=1;
               d+=2;
              if(c==(x+4)){
                x+=2;
              }//end of if
              if(c==x){
                x-=2;
              }//end of if
             }//end of if

             //move up & right
             if(w==9){
              if(d==(y+1)){
               d-=1;
              }//end of if
              if(c==x){
               c+=5;
               d-=1;
               x+=1;
               y-=1;
              }//end of if
              if(c==x+2){
               c+=3;
               d-=1;
               x+=1;
               y-=1;
              }//end of if
              else{
               y-=1;
               d-=1;
               x+=1;
               c+=1;
              }//end of else
             }//end of if

             //move up & left
             if(w==7){
              if(d==(y+1)){
               d-=1;
              }//end of if
              if(c==(x+4)){
               c-=5;
               d-=1;
               x-=1;
               y-=1;
              }//end of if
              if(c==x+2){
               c-=3;
               d-=1;
               x-=1;
               y-=1;
              }//end of if
              else{
               y-=1;
               d-=1;
               x-=1;
               c-=1;
              }//end of else
             }//end of if

             //move down & left
             if(w==1){
              if(c==(x+4)){
               c-=5;
               d+=1;
               x-=1;
               y+=1;
              }//end of if
              if(c==x+2){
               c-=3;
               if(d==y){
                d+=1;
               }//end of if
               x-=1;
               y+=1;
              }//end of if
              else{
               y+=1;
               d+=1;
               x-=1;
               c-=1;
              }//end of else
             }//end of if

             //move down & right
             if(w==3){
              if(c==x){
               c+=5;
               y+=1;
               d+=1;
               x+=1;
              }//end of if
              if(c==x+2){
               c+=3;
               if(d==y){
                d+=1;
               }//end of if
               x+=1;
               y+=1;
              }//end of if
              else{
               y+=1;
               d+=1;
               x+=1;
               c+=1;
              }//end of else
             }//end of if

             //out
             if(y<5 || y>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
               getch();
               goto e;
             }//end of if

             //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

              //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if


          /*short shoot*/
          if(w==0){

             //shoot to right
           if(c==(x+4)){
            for(e=0;e<20;e++){
               c+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";


               //right goaler
               if(d<=23 && d>=21){
                if(c==76){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=20-e;
                 for(h=0;h<i;h++){
               c-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if

               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

               //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of if
           }//end of if

           //shoot to left
            if(c==x){
             for(e=0;e<20;e++){
               c-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for

               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";

               //left goaler
               if(d<=23 && d>=21){
                if(c==5){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=20-e;
                 for(h=0;h<i;h++){
               c+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if

               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

             //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of for
           }//end of if


           //shoot to up
           if(c==(x+2)&&(y==d)){
            for(e=0;e<20;e++){
               d-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if



           //shoot to down
           if((c==(x+2))&&(d==(y+1))){
            for(e=0;e<20;e++){
               d+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if
          }//end of if







          /*long shoot*/

          if(w==10){
              g=600000;

             //shoot to right
           if(c==(x+4)){
            for(e=0;e<35;e++){
               c+=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";

               //right goaler
               if(d<=23 && d>=21){
                if(c==76){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=35-e;
                 for(h=0;h<i;h++){
               c-=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if


               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

               //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of for
           }//end of if


            //shoot to left
            if(c==x){
             for(e=0;e<35;e++){
               c-=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for

               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";

               //left goaler
               if(d<=23 && d>=21){
                if(c==5){
                 clrscr();
                 gotoxy(35,25);
                 cout<<"OH";
                 getch();
                 i=35-e;
                 for(h=0;h<i;h++){
               c+=1;
               g+=200000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
                 }//end of for
                 goto a;
                }//end of if
               }//end of if


               //corner
             if(d<=16 || d>=30){
              if(c<=2 || c>=79){
              clrscr();
              gotoxy(35,25);
              cout<<"CORNER\a";
               getch();
               goto f;
               }//end of if
             }//end of if

             //gool
             if(d>=17 && d<=29){
              if(c==79 || c==2){
               clrscr();
               gotoxy(30,25);
               cout<<"GOOOOOOOOOOOOOOOOOAL\a\a";
               getch();
               if(c==79){
                a+=1;
               }//end of if
               if(c==2){
                b+=1;
               }//end of if
               goto b;
              }//end of if
             }//end of if
            }//end of for
           }//end of if



          //shoot to up
           if(c==(x+2)&&(y==d)){
            for(e=0;e<35;e++){
               d-=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if

           //shoot to down
           if((c==(x+2))&&(d==(y+1))){
            for(e=0;e<35;e++){
               d+=1;
               g+=100000;
               for(f=0;f<g;f++){
                cout<<"";
               }//end of for
               clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
             //out
             if(d<5 || d>41){
              clrscr();
              gotoxy(35,25);
              cout<<"OUT\a";
              getch();
              goto e;
             }//end of if
            }//end of for
           }//end of if
          }//end of if
         }//end of if




             else{
              clrscr();
             cout<<"\n  player 1= "<<a<<"\t\t\t\t\t\t     player 2= "<<b;
             cout<<"\n  ____________________________________________________________________________\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|                                                                      |__|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |________                                                            ________|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |__      |                                                          |      __|\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |  |     |                      _____________                       |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" | *|     |                     |             |                      |     |* |\n";
             cout<<" |/|\\     |                     |      _      |                      |     /|\\|\n";
             cout<<" |/ \\  O  |                     |     |_|     |                      |  O  / \\|\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |             |                      |     |  |\n";
             cout<<" |  |     |                     |_____________|                      |     |  |\n";
             cout<<" |  |     |                                                          |     |  |\n";
             cout<<" |__|     |                                                          |     |__|\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |        |                                                          |        |\n";
             cout<<" |________|                                                          |________|\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |                                                                            |\n";
             cout<<" |__                                                                        __|\n";
             cout<<" |  |                                                                      |  |\n";
             cout<<" |__|______________________________________________________________________|__|\n";
              gotoxy(x,y-2);
              cout<<"  *";
               gotoxy(x,y-1);
               cout<<" /|\\""";
              gotoxy(x,y);
              cout<<" / \\";
               gotoxy(c,d);
               cout<<"o";
              gotoxy(40,23);
              cin>>w;

              //move right
              c:
             if(w==6){
               x+=1;
             }//end of if

             //move left
             d:
             if(w==4){
               x-=1;
             }//end of if

             //mpve up
             if(w==8){
               y-=1;
             }//end of if

             //move down
             if(w==2){
               y+=1;
             }//end of if

             //move up & right
             if(w==9){
               y-=1;
               x+=1;
             }//end of if

             //move up & left
             if(w==7){
               y-=1;
               x-=1;
             }//end of if

             //move down & left
             if(w==1){
               y+=1;
               x-=1;
             }//end of if

             //move down & right
             if(w==3){
               y+=1;
               x+=1;
             }//end of if
         }//end of else
             goto a;
             f:
              if(d<20 && c<4){
               d=5;
               c=5;
               x=c-4;
               y=d;
              }//end of if
              if(d>25 && c<4){
               d=40;
               c=5;
               x=c-4;
               y=d;
              }//end of if
              if(d<20 && c>70){
               d=5;
               c=77;
               x=c;
               y=d;
              }//end of if
              if(d>25 && c>70){
               d=40;
               c=77;
               x=c;
               y=d;
              }//end of if
             goto a;
}//end of program
