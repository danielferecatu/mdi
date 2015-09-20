#include <iostream>
using namespace std;

int fact( int s, int e ) {

    if( e>=s ) {
        return e * fact( s, e-1 );
    }
    else {
        return 1;
    }

}

int comb( int n, int k ) {

    return fact( n-k+1, n ) / fact( 2, k );

}

int main() {

// variabile
int n=0, k=0;

// citire date
cout << "n= ";
cin >> n;
cout << "k= ";
cin >> k;

// afisare rezultat
cout << endl << "C= " << comb( n, k );

}
