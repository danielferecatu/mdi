#include <iostream>
using namespace std;

int main() {

    int n, d;

    cout << "n= ";
    cin >> n;

    if ( n<0 ) {

        n = -n;

    }

    d = 1;

    for ( int i=2; i<=n/2; i++) {

        if ( i|n ) {

            d = i;

        }

    }

    cout << endl << "d=" << d;

}
