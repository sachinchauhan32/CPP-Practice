#include<iostream>
using namespace std;
int main(){
    int n , j=1;
    cin>>n;
    int i =1;
    int k = i ;
    while(i<=n){
        while(j <= i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}