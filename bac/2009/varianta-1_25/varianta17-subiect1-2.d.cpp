#include <iostream>
using namespace std;

int main() {

    int x, y;

    do {

        cout << "x= "; cin >> x;
        cout << "y= "; cin >> y;

    }
    while ( x<0 && y<0 );

    if ( x<y ) {

        x = x-y;
        y = x+y;
        x = y-x;

    }

    while ( x>=y ) {

        cout << "A";

        x = x-y;

        cout << "B";

    }

    return 0;

}
