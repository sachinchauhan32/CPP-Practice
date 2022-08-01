class student {
    public :
    int rollnumber;
    int age;
};
#include <iostream>
using namespace std;
int main(){
    /*createing object statically */
    student s1;
    student s2;
    student s3, s4, s5 ;
    /* initializing value */
    s1.age = 21 ;
    s1. rollnumber = 100;
    /* printing output */
    cout << " age is : " << s1.age <<endl;
    cout << " rollnumber is : " << s1.rollnumber << endl;
    /* creates object dynamically */
    student *s6 = new student ;
     (*s6). age = 21;
     (*s6). rollnumber = 100;
     /* we can create this in another way also */
     s6 -> age = 21;
     s6 -> rollnumber  = 100;

    
}