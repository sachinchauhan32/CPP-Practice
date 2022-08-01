#include<iostream>
using namespace std;
int main(){
    int n,i,j,space;
    cout<<"enter the number you want the pyramid of"<<endl;
    cin>>n;
    for(i = 1; i<=n; i++){
        for(space = n - i; space>0; space--)
           cout<<" ";
           for(j = 1; j <= i; j++)
           cout<<"* ";

        cout<<endl;
    }
}