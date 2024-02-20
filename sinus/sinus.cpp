#include <iostream.h>
#include <conio.h>
main(){
 a:
 float a=0,b,z,x=0,sin=0;
 char q=233;
 cout<<"\n\n please enter the degrees: ";                                                     
 cin>>a;
 b=a*0.01745;
 cout<<"\n radian: "<<b;
 for(z=1;z<=a;z++){
   sin+=(0.01745-x);
   if(z<=45)
    x+=0.0000795;
   if(z>=45)
    x+=0.00031962;
 }//end of for
 cout<<"\n sin"<<q<<":   "<<sin;
 getch();
 goto a;
}
