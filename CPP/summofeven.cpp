#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << " enter n number"<< endl;
    cin >> n;
    for( int i = 2; i <= n; i++){
        if( i % 2 == 0){
            sum = sum + i ;
        }
       
    }
     cout << "the sum of number till " << n << " is " << sum << endl;
}