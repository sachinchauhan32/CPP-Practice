#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c= a+b;
    return c;
}

    int main()
{    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"sum of these number is " <<sum(num1,num2);
    return 0;
}