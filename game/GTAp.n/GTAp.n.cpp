#include <iostream>
#include <conio.h>
#include <stdlib.h>
void machine();
void body();

int a,x=40,y=20,z,b,c=10;
char e;

main(){ //start the program
  int d,e,f,g,h,i,j,k,l;
  b:
  	 body();
  	/*
  cout<<"\n\n   Enter password: ";
  d=getch();//2
  cout<<"*";
  e=getch();//0
  cout<<"*";
  f=getch();//8
  cout<<"*";
  g=getch();//1
  cout<<"*";
  h=getch();//3
  cout<<"*";
  i=getch();//7
  cout<<"*";
  j=getch();//5
  cout<<"*";
  k=getch();//1
  cout<<"*";
  l=getch();//6
  cout<<"*";
  if(d==50){
  if(e==48){
  if(f==56){
  if(g==49){
  if(h==51){
  if(i==55){
  if(j==53){
  if(k==49){
  if(l==54){
  
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else
  }else{
   cout<<"\n\n  \"your password is wrong\"";
   goto b;
  }//end of else*/
}//end of main

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////body
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////body
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////body


void body(){
  clrscr();
  gotoxy(5,41);
  cout<<"move left <A>        move right <D>    move up <W>    move down <S>";
  cout<<"\n\n    shot <ARROW KEYS>    jump <SPACE>      repose <X>     sit <C>";
  cout<<"\n\n    run <HOLD SHIFT>     change to car <F>   exit <ESC>";
  gotoxy(x,y);
  cout<<" *";
  gotoxy(x,y+1);
  cout<<"/|\\";
  gotoxy(x,y+2);
  cout<<"/ \\";
  gotoxy(5,2);
  cout<<"shot IIIIIIIIII                                       healt 100/100";

  ///////////////cadr
  for(z=1;z<=80;z++){
   e=196;
   gotoxy(z,1);
   cout<<e;
   e=196;
   gotoxy(z,3);
   cout<<e;
   e=196;
   gotoxy(z,47);
   cout<<e;
   gotoxy(z,39);
   cout<<e;
  }//end of for
  for(z=1;z<=47;z++){
   e=179;
   gotoxy(1,z);
   cout<<e;
   gotoxy(80,z);
   cout<<e;
  }//end of for
  e=218;
  gotoxy(1,1);
  cout<<e;
  e=191;
  gotoxy(80,1);
  cout<<e;
  e=192;
  gotoxy(1,47);
  cout<<e;
  e=217;
  gotoxy(80,47);
  cout<<e;
  e=195;
  gotoxy(1,39);
  cout<<e;
  e=180;
  gotoxy(80,39);
  cout<<e;
  e=195;
  gotoxy(1,3);
  cout<<e;
  e=180;
  gotoxy(80,3);
  cout<<e;

  while(1){
   a=getch();

   gotoxy(40,20);
   cout<<"                 ";

   /////////////////////////////slow move
   if(a==97){
    if(x<=2){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    x--;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   if(a==100){
    if(x>=76){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    x++;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   if(a==119){
    if(y<=4){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    y--;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   if(a==115){
    if(y>=36){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    y++;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if


   /////////////////////////////fast move
   if(a==65){
    if(x<=3){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    x-=2;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   if(a==68){
    if(x>=76){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    x+=2;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   if(a==87){
    if(y<=4){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    y-=2;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   if(a==83){
    if(y>=35){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto c;
    }//end of if
    gotoxy(x,y);
    cout<<"    ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
    y+=2;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   c:
   /////////////////////////////shot
   if(c<=0){
    gotoxy(20,2);
    cout<<"\"Reload your gun <R>\"";
    goto a;
   }//end of if

   if(a==75){
    c--;
    for(b=x-5;b>=3;b--){
     gotoxy(b,y);
     cout<<".";
     gotoxy(b+1,y);
     cout<<" ";
     for(z=0;z<=200000;z++)
      cout<<"";
    }//end of for
    gotoxy(b,y);
    cout<<"  ";
   }//end of if

   if(a==77){
    c--;
    for(b=x+5;b<=78;b++){
     gotoxy(b,y);
     cout<<".";
     gotoxy(b-1,y);
     cout<<" ";
     for(z=0;z<=200000;z++)
      cout<<"";
    }//end of for
    gotoxy(b-1,y);
    cout<<" ";
   }//end of if

   if(a==72){
    c--;
    for(b=y-5;b>=4;b--){
     gotoxy(x,b);
     cout<<".";
     gotoxy(x,b+1);
     cout<<" ";
     for(z=0;z<=200000;z++)
      cout<<"";
    }//end of for
    gotoxy(x,b+1);
    cout<<"  ";
   }//end of if

   if(a==80){
    c--;
    for(b=y+5;b<=36;b++){
     gotoxy(x,b);
     cout<<".";
     gotoxy(x,b-1);
     cout<<" ";
     for(z=0;z<=200000;z++)
      cout<<"";
    }//end of for
    gotoxy(x,b-1);
    cout<<" ";
   }//end of if

   a:

   ////////////reload
   if(a==114){
    c=10;
    gotoxy(20,2);
    cout<<"                       ";
   }//end of if

    ////////////shot
    gotoxy(2,2);
    cout<<"   shot ";
    switch(c){
     case 0: cout<<"          "; break;
     case 1: cout<<"I         "; break;
     case 2: cout<<"II        "; break;
     case 3: cout<<"III       "; break;
     case 4: cout<<"IIII      "; break;
     case 5: cout<<"IIIII     "; break;
     case 6: cout<<"IIIIII    "; break;
     case 7: cout<<"IIIIIII   "; break;
     case 8: cout<<"IIIIIIII  "; break;
     case 9: cout<<"IIIIIIIII "; break;
     case 10: cout<<"IIIIIIIIII"; break;
    }//end of swtch


   /////////////////////////////other

   ////////////sitdown
   if(a==99){
    gotoxy(x,y);
    cout<<"_*_";
    gotoxy(x,y+1);
    cout<<"/ \\";
    gotoxy(x,y+2);
    cout<<"    ";
   }//end of if

   ////////////repose
   if(a==120){
    gotoxy(x,y);
    cout<<" *  ";
    gotoxy(x,y+1);
    cout<<"    ";
    gotoxy(x,y+2);
    cout<<"    ";
   }//end of if

   ////////////jump
   if(a==32){
    y--;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"-|-";
    gotoxy(x,y+2);
    cout<<"- -";
    gotoxy(x,y+3);
    cout<<"   ";
    for(z=0;z<=5000000;z++)
     cout<<"";
    gotoxy(x,y);
    cout<<"  ";
    gotoxy(x+2,y+1);
    cout<<"  ";
    y++;
    gotoxy(x,y);
    cout<<" *";
    gotoxy(x,y+1);
    cout<<"/|\\";
    gotoxy(x,y+2);
    cout<<"/ \\";
   }//end of if

   //////////////machine
   if(a==102)
    machine();

   if(a==27)
    exit(1);

  }//end of while
}//end of void body


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////machine
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////machine
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////machine


void machine(){

  clrscr();
  gotoxy(5,41);
  cout<<"move left <A>    move right <D>    move up <W>    move down <S>";
  cout<<"\n\n    horn <H>         chenge to body <F>    exit <ESC> ";
  gotoxy(x,y);
  cout<<"   ___";
  gotoxy(x,y+1);
  cout<<" _/___\\_";
  gotoxy(x,y+2);
  cout<<"|_______|";

  while(1){
   a=getch();

   if((a==97)||(a==100)||(a==119)||(a==115))
    clrscr();

   gotoxy(5,41);
   cout<<"move left <A>    move right <D>    move up <W>    move down <S>";
   cout<<"\n\n    horn <H>         chenge to body <F>    exit <ESC> ";

   /////////////////////////////move
   if(a==97){
    if(x<=2){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto d;
    }//end of if
    x--;
    gotoxy(x,y);
    cout<<"    ___";
    gotoxy(x,y+1);
    cout<<" __/___\\_";
    gotoxy(x,y+2);
    cout<<"|________|";
   }//end of if

   if(a==100){
    if(x>=70){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto d;
    }//end of if
    x++;
    gotoxy(x,y);
    cout<<"   ___";
    gotoxy(x,y+1);                                     
    cout<<" _/___\\__";
    gotoxy(x,y+2);
    cout<<"|________|";
   }//end of if

   if(a==119){
    if(y<=3){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto d;
    }//end of if
    y--;
    gotoxy(x,y-2);
    cout<<" __";
    gotoxy(x,y-1);
    cout<<"|  |";
    gotoxy(x,y);
    cout<<"|__|";
    gotoxy(x,y+1);
    cout<<"|  |";
    gotoxy(x,y+2);
    cout<<"|__|";
    gotoxy(x,y+3);
    cout<<"|__|";
   }//end of if

   if(a==115){
    if(y>=35){
     gotoxy(40,20);
     cout<<"\" out of size\"";
     goto d;
    }//end of if
    gotoxy(x,y);
    cout<<"           ";
    gotoxy(x,y+1);
    cout<<"           ";
    gotoxy(x,y+2);
    cout<<"           ";
    y++;
    gotoxy(x,y-1);
    cout<<" __";
    gotoxy(x,y);
    cout<<"|__|";
    gotoxy(x,y+1);
    cout<<"|  |";
    gotoxy(x,y+2);
    cout<<"|__|";
    gotoxy(x,y+3);
    cout<<"|  |";
    gotoxy(x,y+4);
    cout<<"|__|";
   }//end of if

   d:
   ////////////horn
   if(a==104)
    cout<<"\a";

   if(a==102)
    body();

   if(a==27)
    exit(1);

  }//end of while
 }//end of void machin
