#include <iostream.h>
#include <conio.h>
main( )
{
	int  time1i, time2i, time1o, time2o, time2O, time1O,time1out, a;
   char ans='y', A;
   		while(ans=='y'){
         gotoxy(30,1);
   	   cout<<"welcome";
   			gotoxy(1,3);
   			cout<<"this program can convert :"<<endl<<endl<<"tehran times to Hong kong(h),london(l),Brasilia(b),Kuala lumpur(singapore)(k),  Us & canada(u),Paris(p),Alaska(a),Santiago(s),International date line west(i)."<<endl<<endl<<"please type firest letter of define introduce capital:  ";
            cin>>A;
            cout<<"enter your (tehran) time :      ";
            cin>>time1i>>time2i;
                while(time1i>=25 || time2i>=60){
                  clrscr();
                   gotoxy(30,1);
                   cout<<"welcome";
   					   gotoxy(1,3);
   					   cout<<"this program can convert ((tehran times to Hong kong(H), london(L), Brasilia(B),"<<endl<<"Kuala lumpur(singapore)(K),Us & canada(U), Paris(P), "<<endl<<"International date line west(I) )) times."<<endl<<endl<<"please type firest letter of introduce capital:  ";
           		   cin>>A;
            		cout<<"enter your (tehran) time :      ";
            		cin>>time1i>>time2i;
                  }//end of while
            	if(A=='h'){
            		time1o=time1i+4;
            		time2o=time2i+30;
                   cout<<"HOMG KONG time is :             "<<time1o<<":"<<time2o<<endl;
                     if(time2o > 60){
            					time2O=time2o%60;
          	 					a=time2o/60;
            					time1O=a+time1o;
                             cout<<"HOMG KONG right time is :       "<<time1O<<":"<<time2O<<endl;
                              if(time1O > 24){
                              	time1out=time1O-24;
                          		   cout<<"HOMG KONG high right time is :  "<<time1out<<":"<<time2O<<endl;
                              }//end of if
            			}//end of if
               }//end of if
               if(A=='l'){
            		time1o=time1i-3;
            		time2o=time2i-30;
                    cout<<"LONDON time is  :           "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"LONDON right time is:       "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='b'){
            		time1o=time1i-3;
            		time2o=time2i-30;
                    cout<<"BRASILIA time is  :           "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"BRASILIA right time is:          "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='k'){
            		time1o=time1i+4;
            		time2o=time2i+30;
                   cout<<"KUALA LUPUR(singapore) time is:..............."<<time1o<<":"<<time2o<<endl;
                     if(time2o > 60){
            					time2O=time2o%60;
          	 					a=time2o/60;
            					time1O=a+time1o;
                           cout<<"KUALA LUPUR(singapore) right time is:........."<<time1O<<":"<<time2O<<endl;
                           if(time1O > 24){
                              	time1out=time1O-24;
                          		   cout<<"KUALA LUPUR(singapore) high right time is :..."<<time1out<<":"<<time2O<<endl;
                              }//end of if
            			}//end of if
               }//end of if
               if(A=='u'){
            		time1o=time1i-9;
            		time2o=time2i-30;
                    cout<<"US & CANADA  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"US & CANADA right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='i'){
            		time1o=time1i-15;
            		time2o=time2i-30;
                    cout<<"International date line west  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"International date line west right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='p'){
            		time1o=time1i-2;
            		time2o=time2i-30;
                    cout<<"PARIS  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"PARIS right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='a'){
            		time1o=time1i-12;
            		time2o=time2i-30;
                    cout<<"ALASKA  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"ALASKA right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
               if(A=='s'){
            		time1o=time1i-7;
            		time2o=time2i-30;
                    cout<<"SANTIAGO  time is  :       "<<time1o<<":"<<time2o<<endl;
                   		if(time1o<=0 || time2o<=0){
                    			time2O=60+time2o;
                           time1O=24+time1o;
                           cout<<"SANTIAGO right time is:    "<<time1O<<":"<<time2O<<endl;
                        }//end of if
            	}//end of if
   			cout<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
       gotoxy(25,6);
       cout<<"thank you for use this program"<<endl<<"                             press any key to exit";
   getch();
   return 0;
}
