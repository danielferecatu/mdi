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
char par;
int d=0, i=0;

// citire date
cout << "Dati secventa de paranteze: ";
do {
    cin >> par;
    if( par=='(' ) {
        d++;
    }
    else if( par==')' ) {
        i++;
    }
}
while( par=='(' || par==')' );

// afisare rezultat
if( d==i ) {
    cout << endl << "Sirul este corect";
}
else {
    cout << endl << "Sirul nu este corect";
}

return 0;

}
