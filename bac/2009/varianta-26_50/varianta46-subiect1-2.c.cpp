#include <iostream>
using namespace std;

int main() {

    int n, s=0, nr=0;

    do {

        cout << "n= "; cin >> n;

    }
    while ( n<0 );

    while ( n!=0 ) {

        if ( n%2==0 ) {

            s = s*10 + n%10;

        }

        n /= 10;

    }

    if ( s!=0 ) {

        nr =1;

    }

    cout << endl << "nr=" << nr;

    return 0;
}
