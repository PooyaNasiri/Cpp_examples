#include <iostream.h>
#include <conio.h>
main()
	{//start program
	   int a,d,f;
	   float b,c,e;
      char ans='y';
   		while(ans=='y'){
         	gotoxy(30,1);
   	   	cout<<"welcome";
               gotoxy(1,4);
   				cout<<"ENTER TREE NUMBER : ";
      				cin>>d>>e>>f;
      					for(c=d,b=1,a=1;a<=f;a++, b*=e){
         					c+=1/b;
            				cout<<"\n"<<"javab= "<<c<<"     when a =  "<<a<<"\n";
         				}//end of for
         	cout<<endl<<endl<<endl<<endl<<"do you want to continue? (y/n): ";
   			cin>>ans;
            clrscr();
   		}//end of while
       gotoxy(25,6);
       cout<<"thank you for use this program"<<endl<<"                          press any key to exit";
    getch();
    return 0;
	}//end program

