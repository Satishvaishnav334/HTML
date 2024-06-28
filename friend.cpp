#include<iostream>
using namespace std;
class gourav;
class nitesh{
public:
    int a;
public:
    void setdata(){
    cout<<endl<<"Enter the value of a => ";
    cin>>a;
    }
    void printdata(){
    cout<<endl<<"the value of a is => "<<a;
    }
    friend void max(nitesh n1,gourav g1);
};
class gourav
{
private:
    int b;
public:
    void setdata(){
    cout<<endl<<"Enter the value of b => ";
    cin>>b;
    }
    void printdata(){
    cout<<endl<<"the value of b is => "<<b;
    }
     void Max(nitesh n1,gourav g1){
     if(n1.a>g1.b){
     cout<<endl<<"A is greater";
    }
     else{
     cout<<endl<<"B is greater";
     }
};
int main()
{
  gourav g1;
  nitesh n1;
  n1.setdata();
  n1.printdata();
  g1.setdata();
  g1.printdata();
  max(n1,g1);
}};

