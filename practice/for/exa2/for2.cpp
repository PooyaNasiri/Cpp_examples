#include <iostream.h>
#include <conio.h>
main( )
{
 char ans='y';
 float x,y,a,b;
 while(ans=='y'){
 clrscr();
 	y=0;
 	cin>>a>>b;
 	for(x=a;x<=b;x++){
  	 y+=x;
 	}//end of for
   cout<<y;
  cout<<"\n"<<"do you want to cantinue(y/n)?  ";
  cin>>ans;
  }//end of while
   getch();
   return 0;
}

