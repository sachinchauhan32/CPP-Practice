#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    int smallest =x;
    cout<<"enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    smallest = x;
    if(y<x)
    smallest = y;
    if(z<x)
    smallest = z;
    cout<<"smallest number is "<<smallest<<endl;
    return 0;
}