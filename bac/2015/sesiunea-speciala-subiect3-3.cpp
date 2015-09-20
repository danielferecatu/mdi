#include <iostream>
using namespace std;

long DivImpar( long a, long b ) {

    long d=2;

    for( int i=d; i<=a; i++ ) {
        if( a%i==0 && b%i==0 && i%2==1 ) {
            d = i;
        }
    }

    return d;

}

int main() {

cout << DivImpar( 30, 60 );

return 0;

}
