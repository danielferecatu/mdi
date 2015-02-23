#include <iostream>
using namespace std;

int main() {

    int n;

    do {

        cout << "n= "; cin >> n;
        cout << endl;

    }
    while ( n<=0 );

    for ( int i=1; i<=n; i++) {

        int x;

        do {

            cout << "x= "; cin >> x;

        }
        while ( x<0 );

        int nr = 0;

        while ( x>0 ) {

            nr = nr*100 + x%10;
            x /= 100;

        }

        while ( nr>0 ) {

            x = x*10 + nr%10;
            nr /= 10;

        }

        cout << "x=" << x << endl << endl;

    }

    return 0;
}
