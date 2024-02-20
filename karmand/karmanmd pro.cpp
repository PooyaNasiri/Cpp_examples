#include <iostream.h>
#include <conio.h>
main(){ //start the program
    float d[6];
    int i;
    char a[6][100],c[6][100],b[6][100];
    for(i=1;i<=2;i++){
     cin.get();
     cout<<"________________________________";
     cout<<"\n\n\nEnter your name: ";
     cin.get(a[i],99);
     cin.get();
     cout<<"\n\nEnter ID: ";
     cin.get(b[i],99);
     cin.get();
     cout<<"\n\nEnter your father name: ";
     cin.get(c[i],99);
     cin.get();
     cout<<"\n\nEnter your income: ";
     cin>>d[i];
    }//end of for
    clrscr();
    for(i=1;i<=2;i++)
     d[i]-=(d[i]*(0.1));
    for(i=1;i<=2;i++){
     cout<<"\n\n\n\nyour name: "<<a[i],99;
     cout<<"\n\nyour ID: "<<b[i],99;
     cout<<"\n\nyour father name: "<<c[i],99;
     cout<<"\n\nyour pure money: "<<d[i];
    }//end of for
 getch();
 return 0;
}//end of program
