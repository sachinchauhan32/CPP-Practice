#include<iostream>
using namespace std;
int main(){
    int n ;
    bool is_prime = true;
    cout << " enter num"<<endl;
    cin >> n;
    if( n == 0 || n == 1){
        is_prime = false;
        cout << " not prime"<<endl;
        return 0;
    }
    for( int i = 2; i < n; i++){
        if( n % i == 0){
            cout << "not prime"<<endl;
            return 0;
        }
    }
    cout << "it is prime"<<endl;
}
