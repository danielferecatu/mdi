#include <iostream>
using namespace std;

int main() {

int a=0, k=0, x;

do {

    do {
        cout << "x= "; cin >> x;
    }
    while ( x<0 );

    while ( x>99 ) x/= 10;

    if ( x>9 ) {
        a = a*100 + x;
        k++;
    }

}
while ( k!=4 );

cout << endl << "a=" << a;

return 0;

}
