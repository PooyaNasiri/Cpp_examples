#include <iostream.h>
#include <conio.h>
main( )
{
  float x,y;
   for(x=0;x<100;x++)
   {
   y=x+0.5;
   cout<<"y= "<<x<<"\t"<<"\t";
   cout<<"y= "<<y<<"\t"<<"\n";
   }//end of for

   for(x=100;x>0;x--)
   {
   y=x-0.5;
   cout<<"y= "<<x<<"\t"<<"\t";
   cout<<"y= "<<y<<"\t"<<"\n";
   }//end of for

   getch();
   return 0;
}//end of program

