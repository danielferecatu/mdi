#include <iostream>
using namespace std;

int main() {

    int n, z=0, p=1, c;

    do {

        cout << "n= ";
        cin >> n;

    }
    while ( n<0 );

    while ( n>0 ) {

        c = n%10;
        n = n/10;

        if ( c%3==0 ) {

            z = z+p*(9-c);
            p = p*10;

        }

    }

    cout << endl << "z=" << z;

    return 0;

}
