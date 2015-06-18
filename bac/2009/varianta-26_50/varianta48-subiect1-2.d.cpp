#include <iostream>
using namespace std;

int main() {

int n, x, nr;


cout << "n= ";
cin >> n;


for ( int i=1; i<=n; i++) {


    do {

        cout << "x= ";
        cin >> x;

    }
    while ( x<0 );

    nr = 0;

    while ( x>0 ) {

        nr = nr*100 + x%10;
        x /= 100;

    }

    while ( nr>0 ) {

        x = x*10 + nr%10;
        nr /= 10;

    }

    cout << "x=" << x;

}

return 0;

}
