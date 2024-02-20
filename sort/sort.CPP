#include <iostream.h>
#include <conio.h>
main(){ //start the program
    int b,c,a[10];

    for(b=1;b<=10;b++){
     cin>>a[b];
    }
    for(c=-10000000;c<=10000000;c++)
     for(b=1;b<=10;b++)
      if(a[b]==c)
       cout<<"\n"<<a[b];

 getch();
 return 0;
}//end of program
