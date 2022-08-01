#include<iostream>
using namespace std;
int main()
{
    int marks[11];
    for ( int i = 0; i < 11; i++)
    {
        cout<<"enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];

    }
    for ( int i =0; i < 11; i++)
    {
        cout<<"the marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
    return 0;

    
}
