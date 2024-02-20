#include <iostream.h>
#include <conio.h>
void rect(int x1,int y1,int x2,int y2);
int x,y,a,b,c,d;
char g;
main(){
  cin>>a>>b>>c>>d;
  rect(a,b,c,d);
}//end of main
void rect(int x1,int y1,int x2,int y2){
     for(x=x1;x<=x2;x++){
        g=196;
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
        getch();
}//End of void rect

