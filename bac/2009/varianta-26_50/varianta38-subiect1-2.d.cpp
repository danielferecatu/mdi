#include <iostream>
using namespace std;

int main() {

    int n;

    do {

        cout << "n= "; cin >> n;
        cout << endl;

    }
    while ( n<0 );

    for ( int i=1; i<=n; i++ ) {

        int p =1;

        for ( int j=i; j>=2; j-- ) {

            p *=j;

        }

        cout << p/(i*2);

    }

    return 0;
}
