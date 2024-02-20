#include <iostream.h>
#include <conio.h>
main()
{//start the program
  int a, b, c, d, e, f, g, h, i, j, k, l, A, B, C, D, E, F, G, I, J, K, L, M;
           c:
           clrscr();
           gotoxy(35,2);
            cout<<"welcome";
            cout<<"\n"<<"\n"<<"this program con stop watching for life time & can make a time and date."<<"\n"<<"\n"<<"Enter a number of 1-clock and date.   2-stop watch. :     ";
           cin>>D;

     /*clock & date*/

     if(D==1){
           b:
       clrscr();
        gotoxy(35,2);
        cout<<"welcome";
      	 cout<<endl<<endl<<endl<<endl<<"enter your city time(24:60:60) :    ";
          cin>>A>>B>>C;
           cout<<"enter (solar) date(YYYY/MM/DD) :    ";
           cin>>E>>F>>G;
            clrscr();
             for(e=E;e<=10000;e++){
              for(f=F;f<=13;f++){
               for(g=G;g<=31;g++){
                for(a=A;a<=24;a++){
                 for(b=B;b<=60;b++){
                  for(c=C;c<=60;c++){
                   a:
                  if(f>=13){
                   f=1;
                   e+=1;
                   E+=1;
                   goto a;
                  }//end of if

                  if(g>=31){
                   g=1;
                   f+=1;
                   F+=1;
                   goto a;
                  }//end of if

                  if(a>=24){
                   a=0;
                   g+=1;
                   G+=1;
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

                  clrscr();
                   gotoxy(37,20);
                   cout<<"your ciy time: "<<a<<":"<<b<<":"<<c;
                    gotoxy(37,21);
                    cout<<"SOLAR date:    "<<e<<"/"<<f<<"/"<<g;
                      i=e+622;
                      j=f+2;
                      k=g+19;
                       gotoxy(37,23);
                       cout<<"MILADI date:   "<<i<<"/"<<j<<"/"<<k;
                 		   if(j>=13 || k>=31){
                         clrscr();
                          gotoxy(37,20);
                  		  cout<<"your ciy time: "<<a<<":"<<b<<":"<<c;
                  		   gotoxy(37,21);
                  		   cout<<"SOLAR date:    "<<e<<"/"<<f<<"/"<<g;
                   		    K=k%30;
                  		    l=k/30;
                  		    J=l+j;
                            M=J%12;
                            L=M/12;
                            I=L+i;
                          gotoxy(37,23);
                          cout<<"MILADI date:   "<<I<<"/"<<M<<"/"<<K;
                        }//end of if

                   for(d=0;d<=25600000;d++){
                     cout<<"";
                   }//end of for
                  }//end of for
                 }//end of for
                }//end of for
               }//end of for
              }//end of for
             }//end of for
           cout<<"\n"<<"\n"<<"<<your date or tuor time isnt raight. please type again your righe date and yuor righe time.>>";
             getch();
             goto b;
     }//end of if

     /*stop watch*/

      if(D==2){
        clrscr();
         gotoxy(35,1);
         cout<<"welcome";
          gotoxy(1,4);
          cout<<"this program can stop watching for life time. "<<"\n"<<"\n"<<"<<press and hold any key to start and dont hold any thing to pause.>>";
            getch();
     			for(a=0;a<=100;a++){
             for(b=0;b<=12;b++){
              for(c=0;c<=30;c++){
               for(d=0;d<=23;d++){
  	 	   		 for(e=0;e<=59;e++){
                 for(f=0;f<=59;f++){
                  for(g=0;g<=59;g++){
            		 for(h=0;h<=59;h++){
                   h+=1;
                   getch();
                   clrscr();                                                         
                   gotoxy(25,10);
                   cout<<a<<"   "<<b<<"/"<<c<<"/"<<d<<"       "<<e<<":"<<f<<":"<<g<<"."<<h;
                    gotoxy(35,1);
                    cout<<"welcome";
         				gotoxy(1,4);
        		 			cout<<"this program can stop watching for life time. ";
                   }//end of for
                  }//end of for
                 }//end of for
                }//end of for
               }//end of for
              }//end of for
             }//end of for
            }//end of for
      }//end of if
      clrscr();
      gotoxy(10,5);
      cout<<"there is/ara [a] foul in the your type.please type again.";
      getch();
      goto c;
}//end of program
