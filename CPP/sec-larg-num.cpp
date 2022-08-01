#include<iostream>
using namespace std;
#include <climits>
int main(){
    int n;
    cin>>n;
    int lar=INT_MIN,secondLar=INT_MIN;
    int num;
    int count=1;
    while(count<=n){
        cin>>num;
        if (num>lar){
            secondLar=lar;
            lar=num;
        }
        else if(num>secondLar&&num!=lar){
            secondLar=num;
        }
        count++;
    }
    cout<<secondLar;
}