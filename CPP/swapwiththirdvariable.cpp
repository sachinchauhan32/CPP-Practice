#include<iostream>
using namespace std;
int main()
{
    int x,y,t;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    t = x;
    x = y;
    y = t;
    cout<<"value of x is "<<x<<endl;
    cout<<"value of y is "<<y;

}