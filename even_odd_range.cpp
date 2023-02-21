#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin>>a>>b;
    int c=a,d=b;
    if (a<10 && a>0)
    {
        if (b>9)
         b=(b+9)-b;
         
        int diff=b-a;
        if (diff>0){
        for(int i=0;i<=diff;i++)
        {
            switch(a){
            case 1: 
            cout<<"one"<<endl;
            a++;
            break;
            case 2:
            cout<<"two"<<endl;
            a++;
            break;
            case 3:
            a++;
            break;
            case 4:
            cout<<"four"<<endl;
            a++;
            break;
            case 5:
            cout<<"five"<<endl;
            a++;
            break;
            case 6:
            cout<<"six"<<endl;
            a++;
            break;
            case 7:
            cout<<"seven"<<endl;
            a++;
            break;
            case 8:
            cout<<"eight"<<endl;
            a++;
            break;
            case 9:
            cout<<"nine"<<endl;
            }   
          }
          
          for (i=c;i<=d;i++)
            {
               if (i>9)
               {
                   if (i%2==0)
                   cout<<"even"<<endl; 
                   else
                   cout<<"odd"<<endl;
               }
            }    
        }  
    }
         
      return 0;
}
