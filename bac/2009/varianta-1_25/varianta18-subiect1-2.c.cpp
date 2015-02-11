#include <iostream>
using namespace std;

int main() {

    int x, y;

    do {

        cout << "x= "; cin >> x;
        cout << "y= "; cin >>y;

    }
    while ( x<0 || y<0);

    if ( x>y ) {

        int aux;

        aux = x;
        x = y;
        y = aux;

    }

    if ( x%2==0 ) {

        x++;

    }

    while ( x<=y ) {

        x += 2;
        cout << "*";

    }

    return 0;

}
