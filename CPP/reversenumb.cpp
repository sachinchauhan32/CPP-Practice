#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<endl;
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
    }
    return 0;
}