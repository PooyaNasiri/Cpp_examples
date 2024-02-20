#include <iostream.h>
#include <conio.h>
main(){ //start the program
    long int a[100],b,c,e,f;
    cin>>f;
    for(b=1;b<=f;b++)
     cin>>a[b];
    for(b=f;b>=1;b--)
     for(c=1;c<=f;c++)
      if(a[c]>a[c+1]){
       e=a[c];
       a[c]=a[c+1];
       a[c+1]=e;
      }//end of if
    for(b=1;b<=f;b++)
     cout<<a[b]<<"   ";
 getch();
 return 0;
}//end of program
