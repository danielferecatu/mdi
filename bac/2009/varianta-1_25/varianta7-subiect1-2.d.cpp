#include <iostream>
using namespace std;

int main() {

    int n, m, nr=0, a;

    cout << "n= "; cin >> n;

        for (a=9; a>=0; a--) {

            m=n;

            while ( m!=0 && m%10!=a ) {

                m = m/10;

            }

            if ( m!=0 ) {

                nr = nr*10+m%10;

            }

        }

    cout << endl << "nr=" << nr;

    return 0;

}
