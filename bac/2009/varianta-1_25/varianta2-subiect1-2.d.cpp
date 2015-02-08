#include <iostream>
using namespace std;

int main() {

    int x, y;

    do {

        cout << "x= "; cin >> x;

    }
    while ( x<0 );

    while ( x>0 ) {

        cout << "y= "; cin >> y;

        if ( x>y ) {

            cout << x%10 << endl;

        }
        else {

            cout << y%10 << endl;

        }

        x = y;
    }

    return 0;

}
