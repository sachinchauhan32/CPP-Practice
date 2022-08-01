#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int);
int main()
{int a,b;
cout<<"enter two numbers";
cin>>a>>b;
cout<<"sum is "<<add(a,b);
}
int add(int x,int y)
{
    return(x+y);
}