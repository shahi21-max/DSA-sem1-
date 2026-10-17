#include <iostream>
using namespace std ;

int hcf ( int a, int b) {
     while ( a>0 ) {
         int t = a ;
         a = b % a ;
         b = t ;
       
     }
     return b;
 }

int main () {

    cout<<hcf (10,0) ;

    return 0 ;
}
 