#include<iostream>
using namespace std;
void add (int &x,int &y)
{
        cout<<x+y;
}
int main()
{
        int a,b;
        cout<<"Enter frist number = ";
        cin>>a;
        cout<<"Enter second number = ";
        cin>>b;

       
        add(a,b);

}
