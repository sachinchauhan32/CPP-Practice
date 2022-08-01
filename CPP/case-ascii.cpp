#include<iostream>
using namespace std;

int main()
{
     cout<<"enter anything"<<endl;
      char c;
    cin>>c;
   int ascii =c;
    if(ascii>=65 && ascii <=90)
    {
        cout<<"1"<<endl;

    } 
    else if( ascii>=97 && ascii<=122)
    {
        cout<<"0"<<endl;
    }
else if(ascii >=48 && ascii <=57)
{   cout<<"-1"<<endl;
}
}