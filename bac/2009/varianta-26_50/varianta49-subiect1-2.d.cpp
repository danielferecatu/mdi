#include <iostream>
using namespace std;

int main() {

    int x, k=0;

    do {

        cout << "x= "; cin >> x;

    }
    while ( x<=0 );

    while ( x!=0 ) {

        k = k*10 + x%10;
        x /= 10;

    }

    while ( k!=0 ) {

        x = x*10 + k%10;
        k /= 100;

    }

    cout << endl << "x=" << x;

    return 0;
}
