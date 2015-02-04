#include <iostream>
using namespace std;

int main() {

    int n, k, p=1, nr=0;

    do {

        cout << "n= "; cin >> n;
        cout << "k= "; cin >> k;

    }
    while ( n<=0 && k<=0 );

    while ( n!=0 && k!=0 ) {

        if ( n%2==0 ) {

            nr = nr+n/10%10*p;
            p = p*10;

        }
        else {

            k--;

        }

        n = n/10;

    }

    cout << endl << "nr=" << nr;

    return 0;

}
