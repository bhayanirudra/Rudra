#include<iostream>
using namespace std;
int main()
{
       int a=0,b=1,n,i,c;
       
       cout<<"enter the number of terms=";
       cin>>n;
        cout<<a<<b;
        for(i=3;i<=n;i++)
        {
                c=a+b;
                cout<<c;
                a=b;
                b=c;
        }
   return 0;
}        
           

