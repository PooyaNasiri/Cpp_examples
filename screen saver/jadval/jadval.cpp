#include <iostream.h>
#include <conio.h>
void rect(int x1,int y1,int x2,int y2);
void move(int a,int b,int c,int d);
char g;
 /////////////////main
 main(){
   rect(30,10,55,35);
 }//end of main
 /////////////////rect
 void rect(int x1,int y1,int x2,int y2){
     int x,y;
     for(x=x1;x<=x2;x++){
        g=196;
        gotoxy(x,y1-1);
        cout<<" ";
        gotoxy(x,y2+1);
        cout<<" ";
        gotoxy(x,y1);
        cout<<g;
        gotoxy(x,y2);
        cout<<g;
     }//end of for
     for(y=y1;y<=y2;y++){
        g=179;
        gotoxy(x1,y);
        cout<<g;
        gotoxy(x2,y);
        cout<<g;
     }//end of for
        g=218;
        gotoxy(x1,y1);
        cout<<g;
        g=191;
        gotoxy(x2,y1);
        cout<<g;
        g=192;
        gotoxy(x1,y2);
        cout<<g;
        g=217;
        gotoxy(x2,y2);
        cout<<g;
        y1++;
        y2--;
        getch();
        if(y1<y2){
         rect(x1,y1,x2,y2);
        }else{
         move(x1,y1,x2,y2);
        }//end of if
 }//End of void rect

 /////////////////move
 void move(int a,int b,int c,int d){
     int x,y;
     for(x=a;x<=c;x++){
        g=196;
        gotoxy(x,b-1);
        cout<<" ";
        gotoxy(x,d+1);
        cout<<" ";
        gotoxy(x,b);
        cout<<g;
        gotoxy(x,d);
        cout<<g;
     }//end of for
     for(y=d;y<=b;y++){
        g=179;
        gotoxy(a,y);
        cout<<g;
        gotoxy(c,y);
        cout<<g;
     }//end of for
        g=192;
        gotoxy(a,b);
        cout<<g;
        g=217;
        gotoxy(c,b);
        cout<<g;
        g=218;
        gotoxy(a,d);
        cout<<g;
        g=191;
        gotoxy(c,d);
        cout<<g;
        b++;
        d--;
        getch();
        if(d>=10){
          move(a,b,c,d);
        }else{
          rect(30,10,55,35);
        }//end of if
 }//End of void move
