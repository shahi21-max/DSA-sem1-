#include <iostream>
using namespace std ;

int main(){

    int n ; cin>>n ;
    int arr [ int (2e5) ] = {} ;
    for ( int i = 0 ; i<n ; i++ ) 
     cin>>arr[ i ] ;
     
     long long mv = 0 ;
     for ( int i =1 ; i<n ; i++) {
      if ( arr [ i ] < arr [ i-1 ] ) { 
        mv+= abs (arr[i] - arr [i-1] ) ;
      arr [ i ] = arr [ i-1 ] ; }
     }
     cout<<mv<<endl ; 
     return 0 ;
    }

