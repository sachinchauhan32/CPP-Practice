#include <iostream> 
#include <ctype.h> 
 
using namespace std; 
 
int main(void) 
{ 
  char chSumProduct; 
  int i, n, nSum, nProduct; 
  cin >>  n; 
 
  cout << "\nEnter S for Sum, P for Product (S or P): "; 
 
  cin >> chSumProduct; 
 
 
  chSumProduct = toupper(chSumProduct); 
 
  if (chSumProduct == 'S') { 
    nSum = 0; 
 
    for (i = 1; i <= n; i++) 
      nSum += i; 
 
    cout << "\nSum of 1 to " << n << ": " << nSum; 
  } 
 
  else { 
    nProduct = 1; 
 
    for (i = 1; i <= n; i++) 
      nProduct *= i; 
 
    cout << n << ": " << nProduct; 
  } 
 
  return 0; 
} 