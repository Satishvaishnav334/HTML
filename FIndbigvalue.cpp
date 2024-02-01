#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"enter your three values = ";
 cin>>a>>b>>c;

 if(a>b){
    if(a>c){
        cout<<"a is greater = "<<a;
    }
    else{
        cout<<"c is greater = "<<c;
    }
 }
 else{
    if(b>c){
        cout<<"b is greater = "<<b;

    }
    else{
        cout<<"c is greater = = "<<c;
    }
 }

}
