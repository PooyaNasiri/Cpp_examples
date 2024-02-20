#include <iostream.h>
#include <conio.h>
main(){ //start the program
    int b,c,e,f[5];
    char a[5];
    for(b=1;b<=5;b++){
     cin>>a[b];
     f[b]=a[b];
    }//end of for
    for(b=5;b>=1;b--)
     for(c=1;c<=b;c++)
      if(f[c]>f[c+1]){
       e=f[c];
       f[c]=f[c+1];
       f[c+1]=e;
      }//end of if
    for(b=1;b<=5;b++){
     a[b]=f[b];
     cout<<a[b]<<"   ";
    }//end of for
 getch();
 return 0;
}//end of program                                                          
