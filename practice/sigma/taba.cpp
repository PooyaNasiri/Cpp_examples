#include <iostream.h>
#include <conio.h>
main(){ //start the program
 int a,b;
   a=1;
   b=0;
   while(a<=10){
    b*=(a*(a-1))/a+1;
    a++;
   }//end of while
   cout<<"\n\t(a*(a-1))/a+1= "<<b;
 getch();
 return 0;
}//end of program
