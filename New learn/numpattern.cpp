#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " enter n " << endl;
    cin >> n;
    for( int i = 1; i <= n; i++){
        cout << i << " ";
    if( i % 3 == 0){
        cout << endl;
    }
    }

}