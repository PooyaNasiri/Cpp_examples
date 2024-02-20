#include <iostream.h>
#include <conio.h>
main()
{
	float c, meter, inch, cm, yard, mile, km, hectare, foot, liter, milliliter, celsius, fahrenheit, kelvin, millimeter, micron, kilogram, pound, ton, ounce, gram;
   char ans='y', a, b;
   		while(ans=='y'){
         	 clrscr();
            				gotoxy(35,3);
            				cout<<"welcome";
                   		  gotoxy(5,7);
                   		  cout<<"this program can convert 1-area  &  2-volume  &  3-temperature  &"<<endl<<endl<<"\t"<<"\t"<<"\t"<<"4-distance &  5-weight. "<<endl<<endl<<endl<<endl;
                             cout<<"ENTER A NUMBER OF UNIVALENT:  ";
   								  cin>>a;


                              if(a=='1'){
                              clrscr();
                              cout<<endl;
                              cout<<"     1-square foot &  2-square meter &  3-square inch &  4-square cm &"<<endl<<endl<<"     5-square yard& 6-square mile &  7-square km &  8-hectare. "<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF AREA UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A SQUARE FOOT :  ";
                                 cin>>c;
                                  meter=0.093*c;
                                  inch=144*c;
                                  cm=929.034*c;
                                  yard=0.111*c;
                                  mile=0.00000003587*c;
                                  km=0.000000092903*c;
                                  hectare=929.034*c;
                                 cout<<"square meter = "<<meter<<endl<<" square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A SQUARE METER :  ";
                                 cin>>c;
                                  foot=10.764*c;
                                  inch=1.549997*c;
                                  cm=10000*c;
                                  yard=1.196*c;
                                  mile=0.3861*c;
                                  km=0.0000001*c;
                                  hectare=0.00001*c;
                                 cout<<"square foot = "<<foot<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A SQUARE INCH :  ";
                                 cin>>c;
                                  foot=0.006944444*c;
                                  meter=0.000645163*c;
                                  cm=6.4516264*c;
                                  yard=0.111*c;
                                  mile=0.00000000025*c;
                                  km=0.00000000065*c;
                                  hectare=0.0000000645163*c;
                                 cout<<"square meter = "<<meter<<endl<<"square foot = "<<foot<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A SQUARE CM :  ";
                                 cin>>c;
                                  foot=0.001*c;
                                  meter=0.0001*c;
                                  inch=0.1549997*c;
                                  yard=0.00012*c;
                                  mile=0.00000000004*c;
                                  km=0.00000001*c;
                                  hectare=929.034*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square  foot = "<<foot<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A SQUARE YARD :  ";
                                 cin>>c;
                                  foot=90000000*c;
                                  meter=0.836*c;
                                  inch=1296*c;
                                  cm=8361.308*c;
                                  mile=0.000000323*c;
                                  km=0.000000836*c;
                                  hectare=0.0000836*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square foot = "<<foot<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='6'){
                                 cout<<"ENTER A SQUARE MILE :  ";
                                 cin>>c;
                                  foot=27878400*c;
                                  meter=2589998.7*c;
                                  inch=401448960000*c;
                                  cm=2589998700000*c;
                                  yard=3097600*c;
                                  km=2.59*c;
                                  hectare=259*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square foot = "<<foot<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='7'){
                                 cout<<"ENTER A SQUARE KM :  ";
                                 cin>>c;
                                  foot=10763866*c;
                                  meter=1000000*c;
                                  inch=154999680000*c;
                                  cm=10000000000*c;
                                  yard=1195985.1*c;
                                  mile=0.386*c;
                                  hectare=100*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square foot = "<<foot<<endl<<"hectare = "<<hectare<<endl<<endl;
                              	}//end of if

                                 if(b=='8'){
                                 cout<<"ENTER A HECTAR :  ";
                                 cin>>c;
                                  foot=107638.66*c;
                                  meter=10000*c;
                                  inch=15499968*c;
                                  cm=100000000*c;
                                  yard=1195.985*c;
                                  mile=0.003861*c;
                                  km=0.01*c;
                                 cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"square foot = "<<foot<<endl<<endl;
                              	}//end of if
                              }//end of if


                              if(a=='2'){
                              clrscr();
                              cout<<endl<<endl;
                              cout<<"           1-cube foot &  2-cube meter &  3-cube inch &  4-cube cm & "<<endl<<endl<<"           5-cube yard &  6-liter &  7-milliliter. "<<endl<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF VOLUME UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A CUBE FOOT :  ";
                                 cin>>c;
                                  meter=0.028*c;
                                  inch=1728.001*c;
                                  cm=28316.85*c;
                                  yard=0.037*c;
                                  liter=28.317*c;
                                  milliliter=28316.85*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A CUBE METER :  ";
                                 cin>>c;
                                  foot=35.315*c;
                                  inch=61023.759*c;
                                  cm=1000000*c;
                                  yard=1.308*c;
                                  liter=1000*c;
                                  milliliter=1000000*c;
                                 cout<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A CUBE INCH :  ";
                                 cin>>c;
                                  foot=0.001*c;
                                  meter=0.00001639*c;
                                  cm=16.387*c;
                                  yard=0.00002143*c;
                                  liter=0.016*c;
                                  milliliter=16.387*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A CUBE CM :  ";
                                 cin>>c;
                                  foot=0.00003531*c;
                                  meter=0.000001*c;
                                  inch=0.061*c;
                                  yard=0.00000131*c;
                                  liter=0.001*c;
                                  milliliter=1*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A CUBE YARD :  ";
                                 cin>>c;
                                  foot=26.999998*c;
                                  meter=0.7645549*c;
                                  inch=46656.014*c;
                                  cm=764554.9*c;
                                  liter=764.5549*c;
                                  milliliter=764554.9*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='6'){
                                 cout<<"ENTER A LITER :  ";
                                 cin>>c;
                                  foot=0.03531466*c;
                                  meter=0.001*c;
                                  inch=61.023759*c;
                                  cm=1000*c;
                                  yard=0.001308*c;
                                  milliliter=1000*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
                                 }//end of if

                                 if(b=='7'){
                                 cout<<"ENTER A MILLILITER :  ";
                                 cin>>c;
                                  foot=0.000035315*c;
                                  meter=0.000001*c;
                                  inch=0.061024*c;
                                  cm=1*c;
                                  yard=0.000001308*c;
                                  liter=0.001*c;
                                 cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<endl;
                                 }//end of if
                             }//end of if



                             if(a=='3'){
                              clrscr();
                              cout<<endl;
                              cout<<"1-celsius(cetigrade) &  2-fahrenheit &  3-kelvin. "<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF TEMPERATURE UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A CELSIUS(CENTIGRADE) :  ";
                                 cin>>c;
                                  kelvin=273.15+c;
                                  fahrenheit=1.8*c+32;
                                 cout<<"fahrenheit= "<<fahrenheit<<endl<<"kelvin= "<<kelvin<<endl<<endl;
                                 }//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A FAHRENHEIT :  ";
                                 cin>>c;
                                  kelvin=0.556*c+255.372;
                                  celsius=0.556*c-17.778;
                                 cout<<"celsius(cetigrade)= "<<celsius<<endl<<"kelvin= "<<kelvin<<endl<<endl;
                                 }//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A KELVIN :  ";
                                 cin>>c;
                                  celsius=-273.15+c;
                                  fahrenheit=1.8*c-459.67;
                                 cout<<"celsius(cetigrade)= "<<celsius<<endl<<"fahrenheit= "<<fahrenheit<<endl<<endl;
                                 }//end of if
                             }//end of if




                             if(a=='4'){
                              clrscr();
                              cout<<endl;
                              cout<<"               1-foot &  2-meter &  3-inch &  4-cm &  5-yard&"<<endl<<endl<<"               6-mile &  7-km &  8-millimeter & 9-micron."<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF DISTANCE UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A FOOT :  ";
                                 cin>>c;
                                  meter=0.3048*c;
                                  inch=12*c;
                                  cm=30.48*c;
                                  yard=0.3333*c;
                                  mile=0.000189394*c;
                                  km=0.0003048*c;
                                  millimeter=304.8*c;
                                  micron=0.0003048*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A METER :  ";
                                 cin>>c;
                                  foot=3.281*c;
                                  inch=39.37*c;
                                  cm=100*c;
                                  yard=1.094*c;
                                  mile=0.001*c;
                                  km=0.001*c;
                                  millimeter=1000*c;
                                  micron=1000000*c;
                                 cout<<"foot = "<<foot<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='3'){
                                 cout<<"ENTER AN INCH :  ";
                                 cin>>c;
                                  foot=0.083333*c;
                                  meter=0.0254*c;
                                  cm=2.54*c;
                                  yard=0.0278*c;
                                  mile=0.00001578283*c;
                                  km=0.0000254*c;
                                  millimeter=25.4*c;
                                  micron=25,400*c;
                                 cout<<"meter = "<<meter<<endl<<"foot = "<<foot<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A CM :  ";
                                 cin>>c;
                                  foot=0.03333*c;
                                  meter=0.01*c;
                                  inch=0.394*c;
                                  yard=0.01093613*c;
                                  mile=0.000006214*c;
                                  km=0.00001*c;
                                  millimeter=10*c;
                                  micron=10000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"foot = "<<foot<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A YARD :  ";
                                 cin>>c;
                                  foot=3*c;
                                  meter=0.9144*c;
                                  inch=36*c;
                                  cm=91.44*c;
                                  mile=0.001*c;
                                  km=0.001*c;
                                  millimeter=914.4*c;
                                  micron=914400*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"foot = "<<foot<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='6'){
                                 cout<<"ENTER A MILE :  ";
                                 cin>>c;
                                  foot=5280*c;
                                  meter=1609.344*c;
                                  inch=63360*c;
                                  cm=160934.4*c;
                                  yard=160934.4*c;
                                  km=1.609*c;
                                  millimeter=1609344*c;
                                  micron=1609344000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"foot = "<<foot<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='7'){
                                 cout<<"ENTER A KM :  ";
                                 cin>>c;
                                  foot=3280.84*c;
                                  meter=1000*c;
                                  inch=39370.079*c;
                                  cm=100000*c;
                                  yard=1093.613*c;
                                  mile=0.621*c;
                                  millimeter=1000000*c;
                                  micron=1000000000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"foot = "<<foot<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                if(b=='8'){
                                 cout<<"ENTER A MILIMETER :  ";
                                 cin>>c;
                                  foot=0.0032808*c;
                                  meter=0.001*c;
                                  inch=0.03937008*c;
                                  cm=0.1*c;
                                  yard=0.001*c;
                                  mile=0.000001*c;
                                  km=0.000001*c;
                                  micron=1000*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"foot = "<<foot<<endl<<"micron = "<<micron<<endl<<endl;
                              	}//end of if

                                 if(b=='9'){
                                 cout<<"ENTER A MICRIN :  ";
                                 cin>>c;
                                  foot=0.0000032808*c;
                                  meter=0.000001*c;
                                  inch=0.00003937008*c;
                                  cm=0.0001*c;
                                  yard=0.000001*c;
                                  mile=0.000000001*c;
                                  km=0.000000001*c;
                                  millimeter=0.001*c;
                                 cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"foot = "<<foot<<endl<<"millimeter = "<<millimeter<<endl<<endl;
                              	}//end of if
                              }//end of if





                              if(a=='5'){
                              clrscr();
                              cout<<endl;
                              cout<<"          1-gram &  2-kilogram &  3-pound &  4-ton &  5-ounce. "<<endl<<endl<<endl;
                              cout<<"ENTER A NUMBER OF WEIGHT UNIVALENT FOR CONVERT:  ";
                              cin>>b;

                                 if(b=='1'){
                                 cout<<"ENTER A GRAM :  ";
                                 cin>>c;
                                  kilogram=0.001*c;
                                  pound=0.0022046226*c;
                                  ton=0.000001*c;
                                  ounce=0.035273962*c;
                                 cout<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='2'){
                                 cout<<"ENTER A KIKLOGRAM :  ";
                                 cin>>c;
                                  gram=1000*c;
                                  pound=2.2046226*c;
                                  ton=0.001*c;
                                  ounce=35.273962*c;
                                 cout<<"gram = "<<gram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='3'){
                                 cout<<"ENTER A POUND :  ";
                                 cin>>c;
                                  gram=453.59237*c;
                                  kilogram=0.45359237*c;
                                  ton=0.00045359237*c;
                                  ounce=16*c;
                                 cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='4'){
                                 cout<<"ENTER A TON :  ";
                                 cin>>c;
                                  gram=1000000*c;
                                  kilogram=1000*c;
                                  pound=2204.6226*c;
                                  ounce=35273.962*c;
                                 cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ounce = "<<ounce<<endl<<endl;
                                 }//end of if

                                 if(b=='5'){
                                 cout<<"ENTER A OUNCE :  ";
                                 cin>>c;
                                  gram=28.349523*c;
                                  kilogram=0.028349523*c;
                                  pound=0.0625*c;
                                  ton=0.000028349523*c;
                                 cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<endl;
                                 }//end of if
                             }//end of if



                              cout<<endl;
                  cout<<"do you want to continue(y/n)?  ";
                  cin>>ans;
                  cout<<endl;
         }//end of while
         clrscr();
         gotoxy(21,5);
   	cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
   getch();
   return 0;
}
