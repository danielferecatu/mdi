#include <iostream>
using namespace std;

int main() {

int x, d=2, y=0, z=0, p;


cout << "x= ";
cin >> x;


while ( x!=1 ) {

    p = 0;

    while ( x%d==0 ) {

        p++;
        x /= d;

    }

    if ( p!=0 ) {

        if ( y==0 ) y = d;

        z = d;

    }

    d++;

}

cout << endl << "y=" << y;
cout << endl << "z=" << z;

return 0;

}
