#include <iostream>
using namespace std;

int main() {

int a, b, nr=0, x, c;

cout << "a= ";
cin >> a;

cout << "b= ";
cin >> b;

for( int i=a; i<=b; i++ ) {

    x = i;
    c = x%10;

    while( x && x%10==c ) {
        x/= 10;
    }

    if( x==0 ) {
        nr++;
    }

}

cout << endl << nr;

return 0;

}
