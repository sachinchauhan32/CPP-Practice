#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"after swapping,the value of x is "<<x<<endl;
    cout<<"after swapping,the value of y is "<<y;
}