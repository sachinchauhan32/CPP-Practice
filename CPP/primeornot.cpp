#include<iostream>
using namespace std;
int main(){
    char c;
    cout <<" enter any key"<<endl;
    cin >> c;
    int ascii = c;
    if(ascii >= 97 && ascii <= 122){
        cout <<"Its an lowercase"<< endl;

    }
    else if ( ascii >= 65 && ascii <= 90){
        cout << " Its an uppercase"<< endl;

    }
    else if ( ascii >= 48 && ascii <= 57){
        cout << " Its an numerical value"<< endl;
    }
    
}