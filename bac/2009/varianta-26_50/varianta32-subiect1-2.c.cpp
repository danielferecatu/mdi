#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    do {

        cout << "a= "; cin >> a;
        cout << "b= "; cin >> b;
        cout << endl;

    }
    while ( a<0 || b<0 );

    if ( a>b ) {

        c = b;
        b = a;
        a = c;

    }

    while ( a<=b ) {

        cout << a;
        a *= 2;

    }

    cout << endl << "a=" << a;

    return 0;
}
