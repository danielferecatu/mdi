#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float x, y;

    do {

         cout << "x= "; cin >> x;

    }
    while ( x<0 );

    y = floor(x);
    x -=y;

    while ( x!=floor(x) ) {

        x *= 10;

    }

    if ( x==y ) {

        cout << "1";

    }
    else {

        cout << "2";

    }

}
