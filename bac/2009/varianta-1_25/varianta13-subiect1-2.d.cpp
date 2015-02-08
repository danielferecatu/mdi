#include <iostream>
using namespace std;

int main() {

    int a, b, k=0, n, c;

    do {

        cout << "a= "; cin >> a;
        cout << "b= "; cin >> b;

    }
    while ( a<0 || b<0 || a>=b );

    for (int i=a; i<=b; i++) {

        n = i;
        c = 0;

        while ( n>0 ) {

            if ( n%2==1 ) {

                c++;

            }

            n = n/10;

        }

        if ( c>0 ) {

            k++;

        }

    }

    cout << "k=" << k;

    return 0;

}
