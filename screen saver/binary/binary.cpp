#include <iostream.h>
#include <conio.h>
main(){ //start the program

      int a=0,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,E,F,G;

   while(1){
     a++;
      //x<4
      b=a/2;
      c=a%2;
      if(b<2){
       cout<<b<<c;
      }//end of if

      //x<8
      d=b/2;
      e=b%2;
      if(d<2){
       cout<<d<<e<<c;
      }//end of if

      //x<16
      f=d/2;
      g=d%2;
      if(f<2){
       cout<<f<<g<<e<<c;
      }//end of if

      //x<32
      h=f/2;
      i=f%2;
      if(h<2){
       cout<<h<<i<<g<<e<<c;
      }//end of if

      //x<64
      j=h/2;
      k=h%2;
      if(j<2){
       cout<<j<<k<<i<<g<<e<<c;
      }//end of if

      //x<128
      l=j/2;
      m=j%2;
      if(l<2){
       cout<<l<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<256
      n=l/2;
      o=l%2;
      if(n<2){
       cout<<n<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<512
      p=n/2;
      q=n%2;
      if(p<2){
       cout<<p<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<1024
      r=p/2;
      s=p%2;
      if(r<2){
       cout<<r<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<2048
      t=r/2;
      u=r%2;
      if(t<2){
       cout<<t<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<4096
      v=t/2;
      w=t%2;
      if(v<2){
       cout<<v<<w<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<8192
      x=v/2;
      y=v%2;
      if(x<2){
       cout<<x<<y<<w<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<16384
      z=x/2;
      A=x%2;
      if(z<2){
       cout<<z<<A<<y<<w<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<32768
      B=z/2;
      C=z%2;
      if(B<2){
       cout<<B<<C<<A<<y<<w<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<65536
      D=B/2;
      E=B%2;
      if(D<2){
       cout<<D<<E<<C<<A<<y<<w<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if

      //x<131072
      F=D/2;
      G=F%2;
      if(F<2){
       cout<<F<<G<<E<<C<<A<<y<<w<<u<<s<<q<<o<<m<<k<<i<<g<<e<<c;
      }//end of if
      for(z=0;z<=1000000;z++)
       cout<<"";
   }//end of while
}//end of program
