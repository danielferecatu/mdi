#include <iostream>
using namespace std;

int main() {

    int n;

    do {

        cout << "n= "; cin >> n;

    }
    while ( n<=0 );

    for ( int i=1; i<=n-1; i++) {

        if ( i%2==0 ) {

            cout << "#";

        }

        for ( int j=i+1; j<=n; j++) {

            cout << "*";

        }

    }

}
