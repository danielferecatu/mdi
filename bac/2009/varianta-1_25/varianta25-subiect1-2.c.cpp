#include <iostream>
using namespace std;

int main() {

    int a, b, c, t;

    do {

         cout << "a= "; cin >> a;
         cout << "b= "; cin >> b;
         cout << "c= "; cin >> c;

    }
    while ( a<=0 || b<=0 || c<=0 );

    if ( a>b ) {

        t = a;
        a = b;
        b = t;

    }

    while ( a<=b ) {

        if ( c|a ) {

            cout << a;

        }

        a++;

    }

}
