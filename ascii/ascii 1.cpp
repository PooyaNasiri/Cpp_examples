#include <iostream.h>
#include <conio.h>
main(){
int a;
char b;
for(a=0;a<=255;a++){
 b=a;
 cout<<a<<" = "<<b<<"     ";
 if(a%5==0)
  cout<<"\n";
 }//end of if
 getch();
 return 0;
}
