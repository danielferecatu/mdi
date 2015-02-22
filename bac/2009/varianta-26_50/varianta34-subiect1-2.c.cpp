#include <iostream>
using namespace std;

int main() {

    int x, y;

    do {

        cout << "x= "; cin >> x;
        cout << "y= "; cin >> y;

    }
    while ( x<0 || y<0 );

    if ( y<x ) {

        int aux = y;
        y = x;
        x = aux;

    }

    while ( x<=y ) {

        cout << endl << x*10+y;
        x++;
        y--;

    }

    return 0;
}
