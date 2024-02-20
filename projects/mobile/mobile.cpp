#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void menu();
void contact();
void massages();
void callregister();
void games();
void extras();
void snack();
void stars();
void calculator();
void converter();
void stopwatch();

class mobile{
 public:
  void addcontact();
  void search();
  void del();
  void format();
  void show();
  void dialle();
  void createmassage();
  void drafts();
  void smsc();
 private:
  int i,v;
  char name[100][25],num[10][25],callingname[50][25],callingnum[50][25],draftsms[1000],j;
}mob;

main(){
 int a,b,d,e,f,g,h,i=0,j,l,m,n,o,q,x,z;
 char p,k,A,B,D,E,F,G;
 a:
 k=247;
 clrscr();
 gotoxy(28,2);
 cout<<k<<" WELLCOME TO DRAGON's MOBILE "<<k;
 gotoxy(6,40);
 cout<<k<<"copy right by dragon team"<<k;
 gotoxy(2,42);
 cout<<"\"Pooya nasiri\"  &  \"Shahab hosseini\"";
  gotoxy(5,5);
  cout<<"User name(6ch):  ";
  a=getch();//m
  A=a;
  gotoxy(5,5);
  cout<<"User name(5ch):  "<<A;
  b=getch();//o
  B=b;
  gotoxy(5,5);
  cout<<"User name(4ch):  "<<A<<B;
  d=getch();//b
  D=d;
  gotoxy(5,5);
  cout<<"User name(3ch):  "<<A<<B<<D;
  e=getch();//i
  E=e;
  gotoxy(5,5);
  cout<<"User name(2ch):  "<<A<<B<<D<<E;
  f=getch();//l
  F=f;
  gotoxy(5,5);
  cout<<"User name(1ch):  "<<A<<B<<D<<E<<F;
  g=getch();//e
  G=g;
  gotoxy(5,5);
  cout<<"User name(0ch):  "<<A<<B<<D<<E<<F<<G;
 if(a==109 && b==111 && d==98 && e==105 && f==108 && g==101){
  gotoxy(40,5);
  cout<<"\"OK\"\n\n\n\n";
  gotoxy(5,7);
  cout<<"Password(7ch):  ";
  h=getch();//D
  gotoxy(5,7);
  cout<<"Password(6ch):  *";
  j=getch();//R
  gotoxy(5,7);
  cout<<"Password(5ch):  **";
  l=getch();//A
  gotoxy(5,7);
  cout<<"Password(4ch):  ***";
  m=getch();//G
  gotoxy(5,7);
  cout<<"Password(3ch):  ****";
  n=getch();//O
  gotoxy(5,7);
  cout<<"Password(2ch):  *****";
  o=getch();//N
  gotoxy(5,7);
  cout<<"Password(1ch):  ******";
  q=getch();//E
  gotoxy(5,7);
  cout<<"Password(0ch):  ";
  if(h==68 && j==82 && l==65 && m==71 && n==79 && o==78  && q==69){
   gotoxy(40,7);
   cout<<"\"OK\"";
   cout<<"\n\n loading...  please wait";
    for(i=25;i<=60;i++){
     p=196;
      gotoxy(i,8);
     cout<<p;
     gotoxy(i,10);
     cout<<p;
    }//end of for
    p=179;
    gotoxy(25,9);
    cout<<p;
    gotoxy(60,9);
    cout<<p;
    p=218;
    gotoxy(25,8);
    cout<<p;
    p=191;
    gotoxy(60,8);
    cout<<p;
    p=192;
    gotoxy(25,10);
    cout<<p;
    p=217;
    gotoxy(60,10);
    cout<<p;
   for(x=26;x<=59;x++){
    p=219;
    gotoxy(x,9);
    cout<<p;
    for(z=0;z<=1000000;z++)
    cout<<"";
   }//end of for
   menu();
  }//end of if
 }//end of if
 cout<<"                  \"wrong\"";
 i++;
 getch();
 if(i==3){
  cout<<"\n\n  \"YOU TRY TO ENTER 3 TIME, CAN'T TRY AGAIN\"";
  while(1)
   getch();
 }//end of if
 goto a;
}//end of main

////////////////////////////////////////////////////////////////////////////////menu
void menu(){
 int a,b=1;
 clrscr();
 gotoxy(37,12);
 cout<<"1- CONTACTS";
 gotoxy(30,14);
 cout<<"2- MASSAGES";
 gotoxy(30,16);
 cout<<"3- CALLREGISTER";
 gotoxy(30,18);
 cout<<"4- GAMES";
 gotoxy(30,20);
 cout<<"5- EXTRAS";
 gotoxy(5,43);
 cout<<"MOVE arrow keys       EXIT  esc       SELECT  enter";
 while(1){
  a=getch();
  if(b==5 && a==80)
   b=0;
  if(b==1 && a==72)
   b=6;
  if(b!=5 && a==80)
   b++;
  if(b!=1 && a==72)
   b--;
  if(a==13)
   switch(b){
    case 1: contact();
    break;
    case 2: massages();
    break;
    case 3: callregister();
    break;
    case 4: games();
    break;
    case 5: extras();
    break;
   }//end of switch
  if(a==27)
   exit(1);
  switch(b){
   case 1:
    gotoxy(30,12);
    cout<<"       1- CONTACTS";
    gotoxy(30,14);
    cout<<"2- MASSAGES        ";
    gotoxy(30,16);
    cout<<"3- CALLREGISTER        ";
    gotoxy(30,18);
    cout<<"4- GAMES        ";
    gotoxy(30,20);
    cout<<"5- EXTRAS        ";
    break;
   case 2:
    gotoxy(30,12);
    cout<<"1- CONTACTS        ";
    gotoxy(30,14);
    cout<<"       2- MASSAGES";
    gotoxy(30,16);
    cout<<"3- CALLREGISTER        ";
    gotoxy(30,18);
    cout<<"4- GAMES        ";
    gotoxy(30,20);
    cout<<"5- EXTRAS        ";
    break;
   case 3:
    gotoxy(30,12);
    cout<<"1- CONTACTS       ";
    gotoxy(30,14);
    cout<<"2- MASSAGES        ";
    gotoxy(30,16);
    cout<<"       3- CALLREGISTER";
    gotoxy(30,18);
    cout<<"4- GAMES        ";
    gotoxy(30,20);
    cout<<"5- EXTRAS        ";
    break;
   case 4:
    gotoxy(30,12);
    cout<<"1- CONTACTS        ";
    gotoxy(30,14);
    cout<<"2- MASSAGES        ";
    gotoxy(30,16);
    cout<<"3- CALLREGISTER        ";
    gotoxy(30,18);
    cout<<"       4- GAMES";
    gotoxy(30,20);
    cout<<"5- EXTRAS        ";
    break;
   case 5:
    gotoxy(30,12);
    cout<<"1- CONTACTS        ";
    gotoxy(30,14);
    cout<<"2- MASSAGES        ";
    gotoxy(30,16);
    cout<<"3- CALLREGISTER        ";
    gotoxy(30,18);
    cout<<"4- GAMES        ";
    gotoxy(30,20);
    cout<<"       5- EXTRAS";
    break;
  }//end of switch
 }//end of while
}//end of menu



////////////////////////////////////////////////////////////////////////////////contact
void contact(){
 int a,b=1;
 clrscr();
 gotoxy(37,12);
 cout<<"1- ADD CONTACTS";
 gotoxy(30,14);
 cout<<"2- SEARCH";
 gotoxy(30,16);
 cout<<"3- DELETE";
 gotoxy(30,18);
 cout<<"4- FORMAT";
 gotoxy(30,20);
 cout<<"5- SHOW ALL";
 gotoxy(2,43);
 cout<<"MOVE arrow keys    EXIT  esc    BACK  backspace    SELECT  enter";
 while(1){
  a=getch();
  if(b==5 && a==80)
   b=0;
  if(b==1 && a==72)
   b=6;
  if(b!=5 && a==80)
   b++;
  if(b!=1 && a==72)
   b--;
  if(a==8)
   menu();
  if(a==13)
   switch(b){
    case 1: mob.addcontact();
    break;
    case 2: mob.search();
    break;
    case 3: mob.del();
    break;
    case 4: mob.format();
    break;
    case 5: mob.show();
    break;
   }//end of switch
  if(a==27)
   exit(1);
  switch(b){
   case 1:
    gotoxy(30,12);
    cout<<"       1- ADD CONTACTS";
    gotoxy(30,14);
    cout<<"2- SEARCH        ";
    gotoxy(30,16);
    cout<<"3- DELETE        ";
    gotoxy(30,18);
    cout<<"4- FORMAT        ";
    gotoxy(30,20);
    cout<<"5- SHOW ALL       ";
    break;
   case 2:
    gotoxy(30,12);
    cout<<"1- ADD CONTACTS        ";
    gotoxy(30,14);
    cout<<"       2- SEARCH";
    gotoxy(30,16);
    cout<<"3- DELETE        ";
    gotoxy(30,18);
    cout<<"4- FORMAT        ";
    gotoxy(30,20);
    cout<<"5- SHOW ALL       ";
    break;
   case 3:
    gotoxy(30,12);
    cout<<"1- ADD CONTACTS       ";
    gotoxy(30,14);
    cout<<"2- SEARCH        ";
    gotoxy(30,16);
    cout<<"       3- DELETE";
    gotoxy(30,18);
    cout<<"4- FORMAT        ";
    gotoxy(30,20);
    cout<<"5- SHOW ALL       ";
    break;
   case 4:
    gotoxy(30,12);
    cout<<"1- ADD CONTACTS        ";
    gotoxy(30,14);
    cout<<"2- SEARCH        ";
    gotoxy(30,16);
    cout<<"3- DELETE        ";
    gotoxy(30,18);
    cout<<"       4- FORMAT";
    gotoxy(30,20);
    cout<<"5- SHOW ALL       ";
    break;
   case 5:
    gotoxy(30,12);
    cout<<"1- ADD CONTACTS        ";
    gotoxy(30,14);
    cout<<"2- SEARCH        ";
    gotoxy(30,16);
    cout<<"3- DELETE        ";
    gotoxy(30,18);
    cout<<"4- FORMAT        ";
    gotoxy(30,20);
    cout<<"       5- SHOW ALL";
    break;
  }//end of switch
 }//end of while
}//end of void contact



////////////////////////////////////////////////////////////////////////////////massages
void massages(){
 int a,b=1;
 clrscr();
 gotoxy(37,12);
 cout<<"1- CREATE MASSAGE";
 gotoxy(30,14);
 cout<<"2- INBOX";
 gotoxy(30,16);
 cout<<"3- DRAFTS";
 gotoxy(2,43);
 cout<<"MOVE arrow keys    EXIT  esc    BACK  backspace    SELECT  enter";
 while(1){
  a=getch();
  if(b==3 && a==80)
   b=0;
  if(b==1 && a==72)
   b=4;
  if(b!=3 && a==80)
   b++;
  if(b!=1 && a==72)
   b--;
  if(a==8)
   menu();
  if(a==13)
   switch(b){
    case 1: mob.createmassage();
    break;
    case 2:
     clrscr();
     cout<<"\n\n  INBOX IS EMPTY.";
     getch();
     menu();
    break;
    case 3: mob.drafts();
    break;
   }//end of switch
  if(a==27)
   exit(1);
  switch(b){
   case 1:
    gotoxy(30,12);
    cout<<"       1- CREATE MASSAGE";
    gotoxy(30,14);
    cout<<"2- INBOX        ";
    gotoxy(30,16);
    cout<<"3- DRAFTS        ";
    break;
   case 2:
    gotoxy(30,12);
    cout<<"1- CREATE MASSAGE        ";
    gotoxy(30,14);
    cout<<"       2- INBOX";
    gotoxy(30,16);
    cout<<"3- DRAFTS        ";
    break;
   case 3:
    gotoxy(30,12);
    cout<<"1- CREATE MASSAGE        ";
    gotoxy(30,14);
    cout<<"2- INBOX        ";
    gotoxy(30,16);
    cout<<"       3- DRAFTS";
    break;
  }//end of switch
 }//end of while
}//end of void massages



////////////////////////////////////////////////////////////////////////////////callregister
void callregister(){
 int a,b=1;
 clrscr();
 gotoxy(37,12);
 cout<<"1- DIALLED NUMBERS";
 gotoxy(30,14);
 cout<<"2- RECEIVED CALLS";
 gotoxy(2,43);
 cout<<"MOVE arrow keys    EXIT  esc    BACK  backspace    SELECT  enter";
 while(1){
  a=getch();
  if(b==2 && a==80)
   b=0;
  if(b==1 && a==72)
   b=3;
  if(b!=2 && a==80)
   b++;
  if(b!=1 && a==72)
   b--;
  if(a==8)
   menu();
  if(a==13)
   switch(b){
    case 1: mob.dialle();
    break;
    case 2:
     clrscr();
     cout<<"\n\n  NO CALL RECIVED.";
     getch();
     menu();
    break;
   }//end of switch
  if(a==27)
   exit(1);
  switch(b){
   case 1:
    gotoxy(30,12);
    cout<<"       1- DIALLED NUMBERS";
    gotoxy(30,14);
    cout<<"2- RECEIVED CALLS        ";
    break;
   case 2:
    gotoxy(30,12);
    cout<<"1- DIALLED NUMBERS        ";
    gotoxy(30,14);
    cout<<"       2- RECEIVED CALLS";
    break;
  }//end of switch
 }//end of while
}//end of void callregister



////////////////////////////////////////////////////////////////////////////////games
void games(){
 int a,b=1;
 clrscr();
 gotoxy(37,12);
 cout<<"1- SNACK & STAIR";
 gotoxy(30,14);
 cout<<"2- STARS GAME";
 gotoxy(2,43);
 cout<<"MOVE arrow keys    EXIT  esc    BACK  backspace    SELECT  enter";
 while(1){
  a=getch();
  if(b==2 && a==80)
   b=0;
  if(b==1 && a==72)
   b=3;
  if(b!=2 && a==80)
   b++;
  if(b!=1 && a==72)
   b--;
  if(a==8)
   menu();
  if(a==13)
   switch(b){
    case 1: snack();
    break;
    case 2: stars();
    break;
   }//end of switch
  if(a==27)
   exit(1);
  switch(b){
   case 1:
    gotoxy(30,12);
    cout<<"       1- SNACK & STAIR";
    gotoxy(30,14);
    cout<<"2- STARS GAME        ";
    break;
   case 2:
    gotoxy(30,12);
    cout<<"1- SNACK & STAIR        ";
    gotoxy(30,14);
    cout<<"       2- STARS GAME";
    break;
  }//end of switch
 }//end of while
}//end of void games



////////////////////////////////////////////////////////////////////////////////extras
void extras(){
 int a,b=1;
 clrscr();
 gotoxy(37,12);
 cout<<"1- CALCULATOR";
 gotoxy(30,14);
 cout<<"2- CONVERTER";
 gotoxy(30,16);
 cout<<"3- STOP WATCH";
 gotoxy(2,43);
 cout<<"MOVE arrow keys    EXIT  esc    BACK  backspace    SELECT  enter";
 while(1){
  a=getch();
  if(b==3 && a==80)
   b=0;
  if(b==1 && a==72)
   b=4;
  if(b!=3 && a==80)
   b++;
  if(b!=1 && a==72)
   b--;
  if(a==8)
   menu();
  if(a==13)
   switch(b){
    case 1: calculator();
    break;
    case 2: converter();
    break;
    case 3: stopwatch();
    break;
   }//end of switch
  if(a==27)
   exit(1);
  switch(b){
   case 1:
    gotoxy(30,12);
    cout<<"       1- CALCULATOR";
    gotoxy(30,14);
    cout<<"2- CONVERTER        ";
    gotoxy(30,16);
    cout<<"3- STOP WATCH        ";
    break;
   case 2:
    gotoxy(30,12);
    cout<<"1- CALCULATOR        ";
    gotoxy(30,14);
    cout<<"       2- CONVERTER";
    gotoxy(30,16);
    cout<<"3- STOP WATCH        ";
    break;
   case 3:
    gotoxy(30,12);
    cout<<"1- CALCULATOR       ";
    gotoxy(30,14);
    cout<<"2- CONVERTER        ";
    gotoxy(30,16);
    cout<<"       3- STOP WATCH";
    break;
  }//end of switch
 }//end of while
}//end of void extras



////////////////////////////////////////////////////////////////////////////////addcontact
void mobile::addcontact(){
 int a;
 char n1[25],n2[25];
 clrscr();
 cout<<"\n\n\n\n    NAME:   ";
 cin.get(n1,20);
 cin.get();
 cout<<"\n\n    NUMBER: ";
 cin.get(n2,20);
 cin.get ();
 gotoxy(5,43);
 cout<<"SAVE enter       EXIT  esc       BACK  backspace";
 a=getch();
 if(a==13){
  strcpy(name[i],n1);
  strcpy(num[i],n2);
  i++;
  menu();
 }//end of if
 clrscr();
 if(a==27)
  exit(1);
 if(a==8)
  menu();
 mob.addcontact();
}//end of void addcontact

////////////////////////////////////////////////////////////////////////////////search
void mobile::search(){
 int b,h,j,a,z;
 char n[25];
 clrscr();
 if(i==0){
  cout<<"\n\n   Contact memory is empty.";
  getch();
  menu();
 }//end of if
 gotoxy(5,4);
 cout<<"Please enter his/her name to find: ";
 gotoxy(40,4);
 cin.get(n,25);
 cin.get();
 for(h=0;h<=100;h++)
  for(j=100;j>=0;j--)
   if(strcmp(n,name[j])==0){
    gotoxy(5,8);
    cout<<"NAME:   "<<name[j]<<"\n\n    NUMBER: "<<num[j];
    gotoxy(5,43);
    cout<<"CALL enter       EXIT esc       BACK backspace";
    a=getch();
    if(a==13){
     gotoxy(5,43);
     cout<<"EXIT esc       BACK backspace                      ";
     gotoxy(5,12);
     cout<<"Calling";
     for(b=0;b<=7;b++)
      for(h=0;h<=300;h++){
       if(h>=0 && h<=100){
        gotoxy(12,12);
        cout<<".  ";
       }//end of if
       if(h>=101 && h<=200){
        gotoxy(12,12);
        cout<<" . ";
       }//end of if
       if(h>=201 && h<=300){
        gotoxy(12,12);
        cout<<"  .";
       }//end of if
       for(z=0;z<=100000;z++)
        cout<<"";
      }//end of for
      gotoxy(5,12);
      cout<<"NO BODY ANSERW";
      getch();
      strcpy(callingname[v],name[j]);
      strcpy(callingnum[v],num[j]);
      v++;
      contact();
    }//end of if
    clrscr();
    if(a==27)
     exit(1);
    if(a==8)
     menu();
    mob.search();
   }//end of if
    cout<<"\n\n    \"Cant find\"";
    getch();
    menu();
}//end of void search

////////////////////////////////////////////////////////////////////////////////show
void mobile::show(){
 int j,b;
 char temp[25];
 clrscr();
 if(i==0){
  cout<<"\n\n   Contact memory is empty.";
  getch();
  menu();
 }//end of if
 for(b=0;b<=i;b++)
  for(j=0;j<=(i-2);j++){
   if((strcmp(name[j]," "))==0)
    j++;
   if((strcmp(name[j],name[j+1]))>0){
    strcpy(temp,name[j]);
    strcpy(name[j],name[j+1]);
    strcpy(name[j+1],temp);
    strcpy(temp,num[j]);
    strcpy(num[j],num[j+1]);
    strcpy(num[j+1],temp);
   }//end of if
  }//end of for
 cout<<"\n\n    NAME               NUMBER";
 for(j=0;j<=(i-1);j++){
  gotoxy(2,(j+3)*2);
  cout<<(j+1)<<"- "<<name[j];
  gotoxy(20,(j+3)*2);
  cout<<num[j];
 }//end of for
 getch();
 menu();
}//end of void search

////////////////////////////////////////////////////////////////////////////////del
void mobile::del(){
 char n[25];
 int a,h,j;
 clrscr();
 if(i==0){
  cout<<"\n\n   Contact memory is empty.";
  getch();
  menu();
 }//end of if
 gotoxy(5,4);
 cout<<"Please enter his/her name to find: ";
 gotoxy(40,4);
 cin.get(n,25);
 cin.get();
 for(h=0;h<=100;h++)
  for(j=100;j>=0;j--)
   if(strcmp(n,name[j])==0){
    gotoxy(5,8);
    cout<<"NAME:   "<<name[j]<<"\n\n    NUMBER: "<<num[j];
    gotoxy(5,43);
    cout<<"DELETE delete       EXIT esc       BACK backspace";
    a=getch();
    if(a==46){
     gotoxy(5,12);
     cout<<"Are you sure to delete this contact(y/n)? ";
     a=getch();
     if(a==121){
      strcpy(name[j],"\0");
      strcpy(num[j],"\0");
      i-=1;
      gotoxy(5,16);
      cout<<"\"Deleting complet\"";
      getch();
      menu();
     }//end of if
    }//end of if
    if(a==27)
     exit(1);
    if(a==8)
     menu();
     mob.del();
   }//end of if
   cout<<"\n\n  \"Can't find\"";
   getch();
   menu();
}//end of void del

////////////////////////////////////////////////////////////////////////////////format
void mobile::format(){
 int a,j;
 clrscr();
 if(i==0){
  cout<<"\n\n   Contact memory is empty.";
  getch();
  menu();
 }//end of if
 gotoxy(5,12);
 cout<<"Are you sure to format contact memory(y/n)? ";
 a=getch();
 if(a==121){
  gotoxy(5,12);
  cout<<"IF YOU SURE TO FORMAT CONTACT MEMORY, ENTER <F>. ";
  a=getch();
  if(a==102){
   for(j=0;j<=100;j++){
    strcpy(name[j]," ");
    strcpy(num[j]," ");
   }//end of for
   i==0;
   v==0;
   gotoxy(5,16);
   cout<<"\"Formating complet\"";
   getch();
   menu();
  }//end of if
 }//end of if
 menu();
}//end of void format

////////////////////////////////////////////////////////////////////////////////createmassage
void mobile::createmassage(){
 int a[1000],x=5,y=5,c,d,v=30;
 char b;
 j=0;
 clrscr();
 while(1){
  gotoxy(5,43);
  cout<<"OPTIONS   esc                                                                                   ";
  gotoxy(2,2);
  cout<<(1000-j)<<" ";
  a[j]=getch();
  b=a[j];
  x++;
  if(x==80){
   y++;
   x=5;
  }//end fo if
  switch(a[j]){
   case 8:
    x-=2;
    j-=2;
    gotoxy(x,y);
    cout<<" ";
    break;
   case 13:
    y++;
    x=5;
    break;
   case 27:
    gotoxy(5,43);
    cout<<"SEND enter    SAVE space    EXIT esc    RESUME WRITING anything";
    c=getch();
    if(c==13){
     clrscr();
     gotoxy(5,43);
     cout<<"SEND enter   EXIT esc    OPEN PHONEBOOK (ctrl+c)";
     gotoxy(5,3);
     cout<<"Enter the phone number:";
     while(1){
      d=getch();
      if(d==27)
       menu();
      if(d==13){
       gotoxy(10,10);
       cout<<"\"Message sent\"";
       getch();
       menu();
      }//end of if
      if(d==3){
       clrscr();
       mob.smsc();
      }//end of if
      if(d<=57 && d>=48){
       gotoxy(v,3);
       d-=48;
       cout<<d;
       v++;
      }//end of if
      if(d==8){
       v--;
       gotoxy(v,3);
       cout<<" ";
      }//end if if
     }//end of while
    }//end of if
    if(c==32)
     for(c=0;c<=(j+5);c++)
      draftsms[c]=a[c];
    if(c==27)
     menu();
    break;
   default:
   gotoxy(x,y);
   cout<<b;
  }//end of siwtch
  j++;
 }//end of while
}//end of void createmassage


////////////////////////////////////////////////////////////////////////////////search
void mobile::smsc(){
 int h,j,a;
 char n[25];
 clrscr();
 if(i==0){
  cout<<"\n\n   Contact memory is empty.";
  getch();
  menu();
 }//end of if
 gotoxy(5,4);
 cout<<"Please enter his/her name to find: ";
 gotoxy(40,4);
 cin.get(n,25);
 cin.get();
 for(h=0;h<=100;h++)
  for(j=100;j>=0;j--)
   if(strcmp(n,name[j])==0){
    gotoxy(5,8);
    cout<<"NAME:   "<<name[j]<<"\n\n    NUMBER: "<<num[j];
    gotoxy(5,43);
    cout<<"SEND enter       EXIT esc";
    a=getch();
    if(a==13){
     gotoxy(10,15);
     cout<<"\n\n\n        \"message sent\"";
     getch();
     menu();
    }//end of if
    clrscr();
    if(a==27)
     menu();
    mob.search();
   }//end of if
    cout<<"\n\n    \"Cant find\"";
    getch();
    menu();
}//end of void search




////////////////////////////////////////////////////////////////////////////////drafts
void mobile::drafts(){
 int x=5,y=5;
 if(draftsms[1]==0){
  clrscr();
  cout<<"\n\n  draft memory is empty.";
  getch();
  menu();
 }//end of if
 char b;
 clrscr();
 for(j=0;j<=100;j++){
  b=draftsms[j];
  gotoxy(x,y);
  cout<<b;
  x++;
  if(x==80){
   y++;
   x=5;
  }//end fo if
  switch(draftsms[j]){
   case 8:
    x-=2;
    gotoxy(x,y);
    cout<<" ";
    break;
   case 13:
    y++;
    x=5;
    break;
  }//end of siwtch
 }//end of for
 getch();
 menu();
}//end of void drafts

////////////////////////////////////////////////////////////////////////////////dialle
void mobile::dialle(){
 int b;
 clrscr();
 if(v==0){
  cout<<"\n\n   Dialled number's memory is empty.";
  getch();
  menu();
 }//end of if
 cout<<"\n\n    NAME               NUMBER";
 for(b=0;b<=v-1;b++){
  gotoxy(2,(b+3)*2);
  cout<<(b+1)<<"- "<<callingname[b];
  gotoxy(20,(b+3)*2);
  cout<<callingnum[b];
 }//end of for
 getch();
 menu();



}//end of void callnumbers









////////////////////////////////////////////////////////////////////////////////snack
void snack(){
 clrscr();
 int b,m,n,o,p,q,r,v=73,w=37,x=71,y=37;
 char a=205,c=186,d=201,e=187,f=200,g=188,h=204,i=185,j=124,k=45,l=177,s=175,t=174;
 randomize();

  clrscr();
   gotoxy(35,2);
   cout<<"welcome";
    cout<<"\n\n\n if you want playing game by one player enter (1) or you want playing game by \n\ntwo players enter (2):  ";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);

  a:
  clrscr();
  //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

  //body
   gotoxy(x,y);
  cout<<"a";

   gotoxy(v,w);
  cout<<"b";
  //endof body


    //////////////////////////////////////////////////////////////////one player

     if(r==49){

     //move1

     gotoxy(35,42);
     cout<<"playar a press any key to move";

    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     g:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for


   for(n=1;n<=m;n++){
    b:
   //harekat be chap
    if(y==37 || y==27 || y==17 || y==7){
      x-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto b;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if



    //harekat be rast

    if(y==32 || y==22 || y==12){
      x+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    ///finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir


   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto b;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
   if(m==6){
    gotoxy(7,42);
    cout<<"((playar a obtain a bonus)) playar {a} press any key to move";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
    goto g;
   }//end of if


   //move2

    h:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for

    for(n=1;n<=m;n++){
     c:
    //harekat be chap

    if(w==37 || w==27 || w==17 || w==7){
      v-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

   //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto c;
    }//end of if

   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if


    //harekat be rast

    if(w==32 || w==22 || w==12){
      v+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

   //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
      cout<<"EXIT esc       BACK backspace";
      r=getch();
      if(r==8)
       games();
      if(r==27)
       exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
      gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto c;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
  }//end of if
   if(m==6)
    goto h;


   //////////////////////////////////////////////////////////////////two player

     if(r==50){

     //move1

     gotoxy(35,42);
     cout<<"playar a press any key to move";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     gotoxy(35,42);
     cout<<"                              ";
     i:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for


   for(n=1;n<=m;n++){
    d:
   //harekat be chap
    if(y==37 || y==27 || y==17 || y==7){
      x-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto d;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if



    //harekat be rast

    if(y==32 || y==22 || y==12){
      x+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

    //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
     gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir


   if(x==71 || x==6){
    y-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto d;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
   if(m==6){
    gotoxy(7,42);
    cout<<"((playar a obtain a bonus)) playar {a} press any key to move";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
    goto i;
   }//end of if


   //move2

    gotoxy(35,42);
    cout<<"playar b press any key to move";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
    gotoxy(35,42);
    cout<<"                              ";
    j:
    for(o=0;o<=100;o++){
      m=rand();
      m=(m%6)+1;
       gotoxy(70,42);
       cout<<m;
      for(q=0;q<=300000;q++){
        cout<<"";
      }//end of for
    }//end of for
    for(q=0;q<=10000000;q++){
     cout<<"";
    }//end of for

    for(n=1;n<=m;n++){
     e:
    //harekat be chap

    if(w==37 || w==27 || w==17 || w==7){
      v-=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

   //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
      gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
     gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
  //end of finish
                  

  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    if(p!=0){
     goto e;
    }//end of if

   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if


    //harekat be rast

    if(w==32 || w==22 || w==12){
      v+=5;
      clrscr();
       gotoxy(x,y);
      cout<<"a";
       gotoxy(v,w);
      cout<<"b";

  //finish
   gotoxy(9,11);
  cout<<s;
   gotoxy(8,11);
  cout<<s;
   gotoxy(7,11);
  cout<<s;
   gotoxy(6,11);
  cout<<s;
   gotoxy(9,12);
  cout<<s;
   gotoxy(8,12);
  cout<<s;
   gotoxy(7,12);
  cout<<s;
   gotoxy(6,12);
  cout<<s;
   gotoxy(9,13);
  cout<<s;
   gotoxy(8,13);
  cout<<s;
   gotoxy(7,13);
  cout<<s;
   gotoxy(6,13);
  cout<<s;
   gotoxy(9,14);
  cout<<s;
   gotoxy(8,14);
  cout<<s;
   gotoxy(7,14);
  cout<<s;
   gotoxy(6,14);
  cout<<s;

   gotoxy(9,21);
  cout<<s;
   gotoxy(8,21);
  cout<<s;
   gotoxy(7,21);
  cout<<s;
   gotoxy(6,21);
  cout<<s;
   gotoxy(9,22);
  cout<<s;
   gotoxy(8,22);
  cout<<s;
   gotoxy(7,22);
  cout<<s;
   gotoxy(6,22);
  cout<<s;
   gotoxy(9,23);
  cout<<s;
   gotoxy(8,23);
  cout<<s;
   gotoxy(7,23);
  cout<<s;
   gotoxy(6,23);
  cout<<s;
   gotoxy(9,24);
  cout<<s;
   gotoxy(8,24);
  cout<<s;
   gotoxy(7,24);
  cout<<s;
   gotoxy(6,24);
  cout<<s;

   gotoxy(9,31);
  cout<<s;
   gotoxy(8,31);
  cout<<s;
   gotoxy(7,31);
  cout<<s;
   gotoxy(6,31);
  cout<<s;
   gotoxy(9,32);
  cout<<s;
   gotoxy(8,32);
  cout<<s;
   gotoxy(7,32);
  cout<<s;
   gotoxy(6,32);
  cout<<s;
   gotoxy(9,33);
  cout<<s;
   gotoxy(8,33);
  cout<<s;
   gotoxy(7,33);
  cout<<s;
   gotoxy(6,33);
  cout<<s;
   gotoxy(9,34);
  cout<<s;
   gotoxy(8,34);
  cout<<s;
   gotoxy(7,34);
  cout<<s;
   gotoxy(6,34);
  cout<<s;



   gotoxy(74,6);
  cout<<t;
   gotoxy(73,6);
  cout<<t;
   gotoxy(72,6);
  cout<<t;
   gotoxy(71,6);
  cout<<t;
   gotoxy(74,7);
  cout<<t;
   gotoxy(73,7);
  cout<<t;
   gotoxy(72,7);
  cout<<t;
   gotoxy(71,7);
  cout<<t;
   gotoxy(74,8);
  cout<<t;
   gotoxy(73,8);
  cout<<t;
   gotoxy(72,8);
  cout<<t;
   gotoxy(71,8);
  cout<<t;
   gotoxy(74,9);
  cout<<t;
   gotoxy(73,9);
  cout<<t;
   gotoxy(72,9);
  cout<<t;
   gotoxy(71,9);
  cout<<t;

   gotoxy(74,16);
  cout<<t;
   gotoxy(73,16);
  cout<<t;
   gotoxy(72,16);
  cout<<t;
   gotoxy(71,16);
  cout<<t;
   gotoxy(74,17);
  cout<<t;
   gotoxy(73,17);
  cout<<t;
   gotoxy(72,17);
  cout<<t;
   gotoxy(71,17);
  cout<<t;
   gotoxy(74,18);
  cout<<t;
   gotoxy(73,18);
  cout<<t;
   gotoxy(72,18);
  cout<<t;
   gotoxy(71,18);
  cout<<t;
   gotoxy(74,19);
  cout<<t;
   gotoxy(73,19);
  cout<<t;
   gotoxy(72,19);
  cout<<t;
   gotoxy(71,19);
  cout<<t;

   gotoxy(74,26);
  cout<<t;
   gotoxy(73,26);
  cout<<t;
   gotoxy(72,26);
  cout<<t;
   gotoxy(71,26);
  cout<<t;
   gotoxy(74,27);
  cout<<t;
   gotoxy(73,27);
  cout<<t;
   gotoxy(72,27);
  cout<<t;
   gotoxy(71,27);
  cout<<t;
   gotoxy(74,28);
  cout<<t;
   gotoxy(73,28);
  cout<<t;
   gotoxy(72,28);
  cout<<t;
   gotoxy(71,28);
  cout<<t;
   gotoxy(74,29);
  cout<<t;
   gotoxy(73,29);
  cout<<t;
   gotoxy(72,29);
  cout<<t;
   gotoxy(71,29);
  cout<<t;


   gotoxy(6,6);
  cout<<l;
   gotoxy(6,7);
  cout<<l;
   gotoxy(6,8);
  cout<<l;
   gotoxy(6,9);
  cout<<l;
   gotoxy(7,6);
  cout<<l;
   gotoxy(7,7);
  cout<<l;
   gotoxy(7,8);
  cout<<l;
   gotoxy(7,9);
  cout<<l;
   gotoxy(8,6);
  cout<<l;
   gotoxy(8,7);
  cout<<l;
   gotoxy(8,8);
  cout<<l;
   gotoxy(8,9);
  cout<<l;
   gotoxy(9,6);
  cout<<l;
   gotoxy(9,7);
  cout<<l;
   gotoxy(9,8);
  cout<<l;
   gotoxy(9,9);
  cout<<l;
   gotoxy(4,5);
  cout<<"f";
   gotoxy(4,6);
  cout<<"i";
   gotoxy(4,7);
  cout<<"n";
   gotoxy(4,8);
  cout<<"i";
   gotoxy(4,9);
  cout<<"s";
   gotoxy(4,10);
  cout<<"h";
   gotoxy(76,36);
  cout<<"s";
   gotoxy(76,37);
  cout<<"t";
   gotoxy(76,38);
  cout<<"a";
   gotoxy(76,39);
  cout<<"r";
   gotoxy(76,40);
  cout<<"t";
    if(y==7){
     if(x<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"a winner\a\a";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
    if(w==7){
     if(v<=9){
      clrscr();
      gotoxy(35,20);
      cout<<"b winner\a\a";
     gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
     }//end of if
    }//end of if
  //end of finish


  gotoxy(70,10);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,15);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,20);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,25);
  cout<<k<<k<<k<<k<<k;

  gotoxy(70,30);
  cout<<k<<k<<k<<k<<k;

  gotoxy(5,35);
  cout<<k<<k<<k<<k<<k;


  //khat
  for(b=5;b<=40;b++){
    gotoxy(10,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(15,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(20,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(25,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(30,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(35,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(40,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(45,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(50,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(55,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(60,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(65,b);
    cout<<j;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(70,b);
    cout<<j;
  }//end of for
  //end of khat



  //dor
  for(b=5;b<=75;b++){
    gotoxy(b,5);
    cout<<a;
  }//end of for
  for(b=5;b<=75;b++){
    gotoxy(b,40);
    cout<<a;
  }//end of for

  for(b=5;b<=40;b++){
    gotoxy(5,b);
    cout<<c;
  }//end of for
  for(b=5;b<=40;b++){
    gotoxy(75,b);
    cout<<c;
  }//end of for

  gotoxy(5,5);
  cout<<d;

  gotoxy(75,5);
  cout<<e;

  gotoxy(5,40);
  cout<<f;

  gotoxy(75,40);
  cout<<g;
  //end of dor


  //masir
  for(b=5;b<=70;b++){
    gotoxy(b,10);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,15);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,20);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,25);
    cout<<a;
  }//end of for

  for(b=5;b<=70;b++){
    gotoxy(b,30);
    cout<<a;
  }//end of for

  for(b=10;b<=75;b++){
    gotoxy(b,35);
    cout<<a;
  }//end of for

  gotoxy(5,10);
  cout<<h;

  gotoxy(75,15);
  cout<<i;

  gotoxy(5,20);
  cout<<h;

  gotoxy(75,25);
  cout<<i;

  gotoxy(5,30);
  cout<<h;

  gotoxy(75,35);
  cout<<i;
  //end of masir

   if(v==8 || v==73){
    w-=5;
    p=m-n;
    m-=1;
    if(p!=0){
     goto e;
    }//end of if
   }//end of if

      for(o=0;o<=10000000;o++){
       cout<<"";
      }//end of for
    }//end of if
   }//end of for
   if(m==6){
    gotoxy(7,42);
    cout<<"((playar b obtain a bonus)) playar {b} press any key to move";
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    r=getch();
    if(r==8)
     games();
    if(r==27)
     exit(1);
    goto j;
   }//end of if
  }//end of if
      goto a;
}//end of void snack














////////////////////////////////////////////////////////////////////////////////stars
void stars(){
  int a,b,c,d,e,f;

   /*start level 1*/
    clrscr();
     gotoxy(35,10);
     cout<<"level 1";
    gotoxy(29,11);
    cout<<"press any key to star";
     getch();
     clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=4;
    e+=1;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<5000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<20000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    gotoxy(5,2);
    cout<<"Enter the number of stars: ";
    f=getch();
    if(f==27)
     exit(1);
    if(f==8)
     games();
    if(f==(e+48)){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
     getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     stars();
    }//end of else

    /*end level 1*/

    /*start level 2*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 2";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=5;
    e+=5;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<5000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<25000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    gotoxy(5,2);
    cout<<"Enter the number of stars: ";
    f=getch();
    if(f==27)
     exit(1);
    if(f==8)
     games();
    if(f==(e+48)){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
     getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     stars();
    }//end of else

    /*end level 2*/

    /*start level 3*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 3";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=10;
    e+=10;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<10000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<35000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    gotoxy(5,2);
    cout<<"Enter the number of stars: ";
    f=getch();
    if(f==27)
     exit(1);
    if(f==8)
     games();
    if(f==(e+48)){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
      getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     stars();
    }//end of else

    /*end level 3*/

   /*start level 4*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 4";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=10;
    e+=20;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<10000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<40000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    gotoxy(5,2);
    cout<<"Enter the number of stars: ";
    f=getch();
    if(f==27)
     exit(1);
    if(f==8)
     games();
    if(f==(e+48)){
     clrscr();
     gotoxy(35,10);
     cout<<"*****right*****";
      gotoxy(29,11);
      cout<<"press any key to next level";
      getch();
    }//end of if
    else{
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     stars();
    }//end of else

    /*end level 4*/

    /*start level 5*/

      clrscr();
      gotoxy(35,10);
      cout<<"level 5";
    gotoxy(29,11);
    cout<<"press any key to star";
      getch();
      clrscr();
    gotoxy(37,10);
    cout<<"3";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"2";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(37,10);
      cout<<"1";
     for(d=0;d<20000000;d++){
      cout<<"";
     }//end of for
      gotoxy(32,10);
      cout<<"<<start>>";
    for(d=0;d<20000000;d++){
      cout<<"";
    }//end of for
     clrscr();
     randomize();
    e=rand();
    e%=10;
    e+=30;
    for(b=0;b<e;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<28000000;d++){
       cout<<"";
      }//end of for
    }//end of for
   for(d=0;d<50000000;d++){
    cout<<"";
   }//end of for
    clrscr();
    gotoxy(5,43);
    cout<<"EXIT esc       BACK backspace";
    gotoxy(5,2);
    cout<<"Enter the number of stars: ";
    f=getch();
    if(f==27)
     exit(1);
    if(f==8)
     games();
    if(f!=(e+48)){
     clrscr();
     gotoxy(40,9);
     cout<<"<<"<<e<<">>";
     gotoxy(35,10);
     cout<<"*****wrong*****";
      gotoxy(30,11);
      cout<<"press any key to restart";
     getch();
     stars();
    }//end of if

    /*end level 5*/

    clrscr();
    gotoxy(35,10);
    cout<<"you win";
    for(b=0;b<20000;b++){
     a=rand();
     c=rand();
     a%=80;
     c%=24;
      gotoxy(a,c);
      cout<<"*";
      for(d=0;d<500000;d++){
       cout<<"";
      }//end of for
    }//end of for

   getch();
}//end of void stars

////////////////////////////////////////////////////////////////////////////////calculator
void calculator(){
 long double a,b;
 char d,e=251;
 clrscr();
 gotoxy(5,42);
 cout<<"EXIT esc       BACK backspace                                 ";
 gotoxy(5,42);
 cout<<"a+b       a-b       a*b       a/b       a^b       "<<e<<"B=a$b";
 gotoxy(2,4);
 cout<<"Enter a act basic of mathematics: ";
 cin>>a>>d>>b;
 gotoxy(36,6);
 switch(d){
  case '+':
   cout<<a<<"+"<<b<<"="<<(a+b);
   break;
  case '-':
   cout<<a<<"-"<<b<<"="<<(a-b);
   break;
  case '*':
   cout<<a<<"*"<<b<<"="<<(a*b);
   break;
  case '/':
   cout<<a<<"/"<<b<<"="<<(a/b);
   break;
  case '^':
   cout<<a<<"^"<<b<<"= "<<(pow(a,b));
   break;
  case '$':
   cout<<e<<b<<"="<<(sqrt(b));
   break;
  default:
   gotoxy(5,8);
   cout<<"this equation isn't act basic of mathematics.";
   calculator();
 }//end o switch
 gotoxy(5,42);
 cout<<"EXIT esc       BACK backspace                                 ";
 a=getch();
 if(a==27)
  exit(1);
 if(a==8)
  menu();
 calculator();
}//end of void calculator

////////////////////////////////////////////////////////////////////////////////converter
void converter(){
 clrscr();
 float c, meter,inch,cm,yard,mile,km,hectare,foot,liter,milliliter,celsius,fahrenheit,kelvin,millimeter,micron,kilogram,pound,ton,ounce,gram;
 char a,b;
 clrscr();
 gotoxy(35,3);
 cout<<"welcome";
 gotoxy(5,43);
 cout<<"BACK TO MENU  enything else     EXIT esc";
 gotoxy(5,7);
 cout<<"1-area  &  2-volume  &  3-temperature  &  4-distance &  5-weight.";
 cout<<"\n\n\n\n  ENTER A NUMBER OF UNIVALENT:  ";
 cin>>a;


 if(a=='1'){
  clrscr();
  cout<<endl;
  cout<<"     1-square foot &  2-square meter &  3-square inch &  4-square cm &\n\n     5-square yard& 6-square mile &  7-square km &  8-hectare. \n\n\n";
  cout<<"  ENTER A NUMBER OF AREA UNIVALENT FOR CONVERT:  ";
  cin>>b;
  if(b=='1'){
   cout<<"  ENTER A SQUARE FOOT :  ";
   cin>>c;
   meter=0.093*c;
   inch=144*c;
   cm=929.034*c;
   yard=0.111*c;
   mile=0.00000003587*c;
   km=0.000000092903*c;
   hectare=929.034*c;
   cout<<"square meter = "<<meter<<endl<<" square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='2'){
   cout<<"ENTER A SQUARE METER :  ";
   cin>>c;
   foot=10.764*c;
   inch=1.549997*c;
   cm=10000*c;
   yard=1.196*c;
   mile=0.3861*c;
   km=0.0000001*c;
   hectare=0.00001*c;
   cout<<"square foot = "<<foot<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='3'){
   cout<<"ENTER A SQUARE INCH :  ";
   cin>>c;
   foot=0.006944444*c;
   meter=0.000645163*c;
   cm=6.4516264*c;
   yard=0.111*c;
   mile=0.00000000025*c;
   km=0.00000000065*c;
   hectare=0.0000000645163*c;
   cout<<"square meter = "<<meter<<endl<<"square foot = "<<foot<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='4'){
   cout<<"ENTER A SQUARE CM :  ";
   cin>>c;
   foot=0.001*c;
   meter=0.0001*c;
   inch=0.1549997*c;
   yard=0.00012*c;
   mile=0.00000000004*c;
   km=0.00000001*c;
   hectare=929.034*c;
   cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square  foot = "<<foot<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='5'){
   cout<<"ENTER A SQUARE YARD :  ";
   cin>>c;
   foot=90000000*c;
   meter=0.836*c;
   inch=1296*c;
   cm=8361.308*c;
   mile=0.000000323*c;
   km=0.000000836*c;
   hectare=0.0000836*c;
   cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square foot = "<<foot<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='6'){
   cout<<"ENTER A SQUARE MILE :  ";
   cin>>c;
   foot=27878400*c;
   meter=2589998.7*c;
   inch=401448960000*c;
   cm=2589998700000*c;
   yard=3097600*c;
   km=2.59*c;
   hectare=259*c;
   cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square foot = "<<foot<<endl<<"square km = "<<km<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='7'){
   cout<<"ENTER A SQUARE KM :  ";
   cin>>c;
   foot=10763866*c;
   meter=1000000*c;
   inch=154999680000*c;
   cm=10000000000*c;
   yard=1195985.1*c;
   mile=0.386*c;
   hectare=100*c;
   cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square foot = "<<foot<<endl<<"hectare = "<<hectare<<endl<<endl;
  }//end of if

  if(b=='8'){
   cout<<"ENTER A HECTAR :  ";
   cin>>c;
   foot=107638.66*c;
   meter=10000*c;
   inch=15499968*c;
   cm=100000000*c;
   yard=1195.985*c;
   mile=0.003861*c;
   km=0.01*c;
   cout<<"square meter = "<<meter<<endl<<"square inch = "<<inch<<endl<<"square cm = "<<cm<<endl<<"square yard = "<<yard<<endl<<"square mile = "<<mile<<endl<<"square km = "<<km<<endl<<"square foot = "<<foot<<endl<<endl;
  }//end of if
 }//end of if


 if(a=='2'){
  clrscr();
  cout<<endl<<endl;
  cout<<"           1-cube foot &  2-cube meter &  3-cube inch &  4-cube cm & "<<endl<<endl<<"           5-cube yard &  6-liter &  7-milliliter. "<<endl<<endl<<endl<<endl;
  cout<<"ENTER A NUMBER OF VOLUME UNIVALENT FOR CONVERT:  ";
  cin>>b;

  if(b=='1'){
   cout<<"ENTER A CUBE FOOT :  ";
   cin>>c;
   meter=0.028*c;
   inch=1728.001*c;
   cm=28316.85*c;
   yard=0.037*c;
   liter=28.317*c;
   milliliter=28316.85*c;
   cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
  }//end of if

  if(b=='2'){
   cout<<"ENTER A CUBE METER :  ";
   cin>>c;
   foot=35.315*c;
   inch=61023.759*c;
   cm=1000000*c;
   yard=1.308*c;
   liter=1000*c;
   milliliter=1000000*c;
   cout<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
  }//end of if

  if(b=='3'){
   cout<<"ENTER A CUBE INCH :  ";
   cin>>c;
   foot=0.001*c;
   meter=0.00001639*c;
   cm=16.387*c;
   yard=0.00002143*c;
   liter=0.016*c;
   milliliter=16.387*c;
   cout<<"cube meter= "<<meter<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
  }//end of if

  if(b=='4'){
   cout<<"ENTER A CUBE CM :  ";
   cin>>c;
   foot=0.00003531*c;
   meter=0.000001*c;
   inch=0.061*c;
   yard=0.00000131*c;
   liter=0.001*c;
   milliliter=1*c;
   cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
  }//end of if

  if(b=='5'){
   cout<<"ENTER A CUBE YARD :  ";
   cin>>c;
   foot=26.999998*c;
   meter=0.7645549*c;
   inch=46656.014*c;
   cm=764554.9*c;
   liter=764.5549*c;
   milliliter=764554.9*c;
   cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
  }//end of if

  if(b=='6'){
   cout<<"ENTER A LITER :  ";
   cin>>c;
   foot=0.03531466*c;
   meter=0.001*c;
   inch=61.023759*c;
   cm=1000*c;
   yard=0.001308*c;
   milliliter=1000*c;
   cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<endl<<"milliliterter= "<<milliliter<<endl<<endl;
  }//end of if

  if(b=='7'){
   cout<<"ENTER A MILLILITER :  ";
   cin>>c;
   foot=0.000035315*c;
   meter=0.000001*c;
   inch=0.061024*c;
   cm=1*c;
   yard=0.000001308*c;
   liter=0.001*c;
   cout<<"cube meter= "<<meter<<endl<<"cube inch= "<<inch<<endl<<"cube cm= "<<cm<<endl<<"cube yard= "<<yard<<endl<<"cube foot= "<<foot<<"liter= "<<liter<<endl<<endl;
  }//end of if
 }//end of if



 if(a=='3'){
  clrscr();
  cout<<endl;
  cout<<"1-celsius(cetigrade) &  2-fahrenheit &  3-kelvin. "<<endl<<endl<<endl;
  cout<<"ENTER A NUMBER OF TEMPERATURE UNIVALENT FOR CONVERT:  ";
  cin>>b;

  if(b=='1'){
   cout<<"ENTER A CELSIUS(CENTIGRADE) :  ";
   cin>>c;
   kelvin=273.15+c;
   fahrenheit=1.8*c+32;
   cout<<"fahrenheit= "<<fahrenheit<<endl<<"kelvin= "<<kelvin<<endl<<endl;
  }//end of if

  if(b=='2'){
   cout<<"ENTER A FAHRENHEIT :  ";
   cin>>c;
   kelvin=0.556*c+255.372;
   celsius=0.556*c-17.778;
   cout<<"celsius(cetigrade)= "<<celsius<<endl<<"kelvin= "<<kelvin<<endl<<endl;
  }//end of if

  if(b=='3'){
   cout<<"ENTER A KELVIN :  ";
   cin>>c;
   celsius=-273.15+c;
   fahrenheit=1.8*c-459.67;
   cout<<"celsius(cetigrade)= "<<celsius<<endl<<"fahrenheit= "<<fahrenheit<<endl<<endl;
  }//end of if
 }//end of if


 if(a=='4'){
  clrscr();
  cout<<endl;
  cout<<"               1-foot &  2-meter &  3-inch &  4-cm &  5-yard&"<<endl<<endl<<"               6-mile &  7-km &  8-millimeter & 9-micron."<<endl<<endl<<endl;
  cout<<"ENTER A NUMBER OF DISTANCE UNIVALENT FOR CONVERT:  ";
  cin>>b;

  if(b=='1'){
   cout<<"ENTER A FOOT :  ";
   cin>>c;
   meter=0.3048*c;
   inch=12*c;
   cm=30.48*c;
   yard=0.3333*c;
   mile=0.000189394*c;
   km=0.0003048*c;
   millimeter=304.8*c;
   micron=0.0003048*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='2'){
   cout<<"ENTER A METER :  ";
   cin>>c;
   foot=3.281*c;
   inch=39.37*c;
   cm=100*c;
   yard=1.094*c;
   mile=0.001*c;
   km=0.001*c;
   millimeter=1000*c;
   micron=1000000*c;
   cout<<"foot = "<<foot<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='3'){
   cout<<"ENTER AN INCH :  ";
   cin>>c;
   foot=0.083333*c;
   meter=0.0254*c;
   cm=2.54*c;
   yard=0.0278*c;
   mile=0.00001578283*c;
   km=0.0000254*c;
   millimeter=25.4*c;
   micron=25,400*c;
   cout<<"meter = "<<meter<<endl<<"foot = "<<foot<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='4'){
   cout<<"ENTER A CM :  ";
   cin>>c;
   foot=0.03333*c;
   meter=0.01*c;
   inch=0.394*c;
   yard=0.01093613*c;
   mile=0.000006214*c;
   km=0.00001*c;
   millimeter=10*c;
   micron=10000*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"foot = "<<foot<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='5'){
   cout<<"ENTER A YARD :  ";
   cin>>c;
   foot=3*c;
   meter=0.9144*c;
   inch=36*c;
   cm=91.44*c;
   mile=0.001*c;
   km=0.001*c;
   millimeter=914.4*c;
   micron=914400*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"foot = "<<foot<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='6'){
   cout<<"ENTER A MILE :  ";
   cin>>c;
   foot=5280*c;
   meter=1609.344*c;
   inch=63360*c;
   cm=160934.4*c;
   yard=160934.4*c;
   km=1.609*c;
   millimeter=1609344*c;
   micron=1609344000*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"foot = "<<foot<<endl<<"km = "<<km<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='7'){
   cout<<"ENTER A KM :  ";
   cin>>c;
   foot=3280.84*c;
   meter=1000*c;
   inch=39370.079*c;
   cm=100000*c;
   yard=1093.613*c;
   mile=0.621*c;
   millimeter=1000000*c;
   micron=1000000000*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"foot = "<<foot<<endl<<"millimeter = "<<millimeter<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='8'){
   cout<<"ENTER A MILIMETER :  ";
   cin>>c;
   foot=0.0032808*c;
   meter=0.001*c;
   inch=0.03937008*c;
   cm=0.1*c;
   yard=0.001*c;
   mile=0.000001*c;
   km=0.000001*c;
   micron=1000*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"foot = "<<foot<<endl<<"micron = "<<micron<<endl<<endl;
  }//end of if

  if(b=='9'){
   cout<<"ENTER A MICRIN :  ";
   cin>>c;
   foot=0.0000032808*c;
   meter=0.000001*c;
   inch=0.00003937008*c;
   cm=0.0001*c;
   yard=0.000001*c;
   mile=0.000000001*c;
   km=0.000000001*c;
   millimeter=0.001*c;
   cout<<"meter = "<<meter<<endl<<"inch = "<<inch<<endl<<"cm = "<<cm<<endl<<"yard = "<<yard<<endl<<"mile = "<<mile<<endl<<"km = "<<km<<endl<<"foot = "<<foot<<endl<<"millimeter = "<<millimeter<<endl<<endl;
  }//end of if
 }//end of if


 if(a=='5'){
  clrscr();
  cout<<endl;
  cout<<"          1-gram &  2-kilogram &  3-pound &  4-ton &  5-ounce. "<<endl<<endl<<endl;
  cout<<"ENTER A NUMBER OF WEIGHT UNIVALENT FOR CONVERT:  ";
  cin>>b;

  if(b=='1'){
   cout<<"ENTER A GRAM :  ";
   cin>>c;
   kilogram=0.001*c;
   pound=0.0022046226*c;
   ton=0.000001*c;
   ounce=0.035273962*c;
   cout<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
  }//end of if

  if(b=='2'){
   cout<<"ENTER A KIKLOGRAM :  ";
   cin>>c;
   gram=1000*c;
   pound=2.2046226*c;
   ton=0.001*c;
   ounce=35.273962*c;
   cout<<"gram = "<<gram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
  }//end of if

  if(b=='3'){
   cout<<"ENTER A POUND :  ";
   cin>>c;
   gram=453.59237*c;
   kilogram=0.45359237*c;
   ton=0.00045359237*c;
   ounce=16*c;
   cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"ton = "<<ton<<endl<<"ounce = "<<ounce<<endl<<endl;
  }//end of if

  if(b=='4'){
   cout<<"ENTER A TON :  ";
   cin>>c;
   gram=1000000*c;
   kilogram=1000*c;
   pound=2204.6226*c;
   ounce=35273.962*c;
   cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ounce = "<<ounce<<endl<<endl;
  }//end of if

  if(b=='5'){
   cout<<"ENTER A OUNCE :  ";
   cin>>c;
   gram=28.349523*c;
   kilogram=0.028349523*c;
   pound=0.0625*c;
   ton=0.000028349523*c;
   cout<<"gram = "<<gram<<endl<<"kilogram = "<<kilogram<<endl<<"pound = "<<pound<<endl<<"ton = "<<ton<<endl<<endl;
  }//end of if
 }//end of if
 menu();
}//end of void converter

////////////////////////////////////////////////////////////////////////////////stopwatch
void stopwatch(){
 int a,b,c,d,e,f,g,h;
 clrscr();
 gotoxy(2,2);
 cout<<"Press and hold any key to start, and dont hold any thing to pause.";
 gotoxy(5,43);
 cout<<"EXIT esc       BACK backspace";
 while(1){
  a=getch();
  if(a==8)
   menu();
  if(a==27)
   exit(1);
  for(a=0;a<=100;a++){
   for(b=0;b<=12;b++){
    for(c=0;c<=30;c++){
     for(d=0;d<=23;d++){
      for(e=0;e<=59;e++){
       for(f=0;f<=59;f++){
        for(g=0;g<=59;g++){
         for(h=0;h<=59;h++){
          h+=1;
          a=getch();
          if(a==8)
           menu();
          if(a==27)
           exit(1);
          clrscr();
          gotoxy(25,10);
          cout<<a<<"   "<<b<<"/"<<c<<"/"<<d<<"       "<<e<<":"<<f<<":"<<g<<"."<<h;
          gotoxy(2,2);
          cout<<"Press and hold any key to start, and dont hold any thing to pause.";
          gotoxy(5,43);
          cout<<"EXIT esc       BACK backspace";
         }//end of for
        }//end of for
       }//end of for
      }//end of for
     }//end of for
    }//end of for
   }//end of for
  }//end of for
 }//end of while
}//end of void stopwatch

