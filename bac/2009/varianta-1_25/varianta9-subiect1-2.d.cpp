#include <iostream>
using namespace std;

int main() {

    int n, s=10;

    do {

        cout << "n= "; cin >> n;

    }
    while ( n<0 );

    while ( n>0 ) {

        if ( n%10<s ) {

            s = n%10;

        }
        else {

            s = -1;

        }

        n = n/10;

    }

    cout << endl << "s=" << s;

    return 0;

}
