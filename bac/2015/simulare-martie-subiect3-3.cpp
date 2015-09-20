#include <iostream>
using namespace std;

int Cifre( int n ) {

    int c, nr, i;

    while( n!=0 ) {

        c = n%10;
        nr = n;
        i = 0;

        while( nr!=0 ) {
            if( nr%10==c ) {
                i++;
            }
            nr/= 10;
        }

        if( i==1 ) {
            cout << c << " ";
        }

        n/= 10;

    }

}

int main() {

Cifre( 24207 );

}
