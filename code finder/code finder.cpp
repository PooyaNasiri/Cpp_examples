#include <iostream.h>
#include <conio.h>
main(){
 unsigned int a,b;
 a:
 cout<<"\nplease enter your code : ";
 cin>>a;
 for(b=0;b<=1000000000;b++)
  if(b==a)
   break;
 cout<<"your code is :           "<<b;
 getch();
 goto a;
}