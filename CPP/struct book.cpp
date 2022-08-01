#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[27];
    float price;

};
void display(book);
book input();
void main()
{
    book b1;
    b1=input();
    display(b1);

}
void display(book b)
{
    cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;
}
book input()
{
    book b;
    cout<<"enter bookid,title and price of the book";
    cin>>b.bookid>>b.title>>b.price;
    return(b);

}

