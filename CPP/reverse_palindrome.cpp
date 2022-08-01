#include<iostream>
using namespace std;
int main(){
    int n, rev, reverse = 0;
    cout << " enter the numbers to reverse it "<< endl;
    cin >> n;
    int copy = n;
    while( n != 0){
        rev = n % 10;
        reverse = reverse * 10 + rev;
        n/=10;
    }
    cout<< " the reverse of the number is "<< reverse << endl;
    if( reverse == copy){
        cout<< "yes it is an palindrome"<< endl;
    }
    return 0 ; 
}